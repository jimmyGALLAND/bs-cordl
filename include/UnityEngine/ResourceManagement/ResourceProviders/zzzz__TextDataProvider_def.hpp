#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ProvideHandle_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ResourceProviderBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TextDataProvider)
namespace System {
class Type;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct ProvideHandle;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class __TextDataProvider__InternalOp;
}
namespace System {
class Object;
}
namespace UnityEngine::Networking {
class UnityWebRequestAsyncOperation;
}
namespace System {
class Exception;
}
namespace UnityEngine {
class AsyncOperation;
}
namespace UnityEngine::ResourceManagement {
class WebRequestQueueOperation;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::ResourceProviders {
class TextDataProvider;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class __TextDataProvider__InternalOp;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider);
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::ResourceProviders::__TextDataProvider__InternalOp);
// Type: ::InternalOp
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14002)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14018))
// CS Name: ::TextDataProvider::InternalOp*
class CORDL_TYPE __TextDataProvider__InternalOp : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Provider, offset 0x10, size 0x8
  __declspec(property(get = __get_m_Provider, put = __set_m_Provider))::UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider* m_Provider;

  /// @brief Field m_RequestOperation, offset 0x18, size 0x8
  __declspec(property(get = __get_m_RequestOperation, put = __set_m_RequestOperation))::UnityEngine::Networking::UnityWebRequestAsyncOperation* m_RequestOperation;

  /// @brief Field m_RequestQueueOperation, offset 0x20, size 0x8
  __declspec(property(get = __get_m_RequestQueueOperation, put = __set_m_RequestQueueOperation))::UnityEngine::ResourceManagement::WebRequestQueueOperation* m_RequestQueueOperation;

  /// @brief Field m_PI, offset 0x28, size 0x18
  __declspec(property(get = __get_m_PI, put = __set_m_PI))::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle m_PI;

  /// @brief Field m_IgnoreFailures, offset 0x40, size 0x1
  __declspec(property(get = __get_m_IgnoreFailures, put = __set_m_IgnoreFailures)) bool m_IgnoreFailures;

  /// @brief Field m_Complete, offset 0x41, size 0x1
  __declspec(property(get = __get_m_Complete, put = __set_m_Complete)) bool m_Complete;

  /// @brief Field m_Timeout, offset 0x44, size 0x4
  __declspec(property(get = __get_m_Timeout, put = __set_m_Timeout)) int32_t m_Timeout;

  constexpr ::UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider*& __get_m_Provider();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider*> const& __get_m_Provider() const;

  constexpr void __set_m_Provider(::UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider* value);

  constexpr ::UnityEngine::Networking::UnityWebRequestAsyncOperation*& __get_m_RequestOperation();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Networking::UnityWebRequestAsyncOperation*> const& __get_m_RequestOperation() const;

  constexpr void __set_m_RequestOperation(::UnityEngine::Networking::UnityWebRequestAsyncOperation* value);

  constexpr ::UnityEngine::ResourceManagement::WebRequestQueueOperation*& __get_m_RequestQueueOperation();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::WebRequestQueueOperation*> const& __get_m_RequestQueueOperation() const;

  constexpr void __set_m_RequestQueueOperation(::UnityEngine::ResourceManagement::WebRequestQueueOperation* value);

  constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle& __get_m_PI();

  constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle const& __get_m_PI() const;

  constexpr void __set_m_PI(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle value);

  constexpr bool& __get_m_IgnoreFailures();

  constexpr bool const& __get_m_IgnoreFailures() const;

  constexpr void __set_m_IgnoreFailures(bool value);

  constexpr bool& __get_m_Complete();

  constexpr bool const& __get_m_Complete() const;

  constexpr void __set_m_Complete(bool value);

  constexpr int32_t& __get_m_Timeout();

  constexpr int32_t const& __get_m_Timeout() const;

  constexpr void __set_m_Timeout(int32_t value);

  /// @brief Method GetPercentComplete addr 0x2bda3d4 size 0x18 virtual false final false
  inline float_t GetPercentComplete();

  /// @brief Method Start addr 0x2bd9ff0 size 0x3e4 virtual false final false
  inline void Start(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle provideHandle, ::UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider* rawProvider);

  /// @brief Method WaitForCompletionHandler addr 0x2bda4e4 size 0x74 virtual false final false
  inline bool WaitForCompletionHandler();

  /// @brief Method RequestOperation_completed addr 0x2bda558 size 0x1ac virtual false final false
  inline void RequestOperation_completed(::UnityEngine::AsyncOperation* op);

  /// @brief Method CompleteOperation addr 0x2bda704 size 0xac virtual false final false
  inline void CompleteOperation(::StringW text, ::System::Exception* exception);

  /// @brief Method ConvertText addr 0x2bda3ec size 0xf8 virtual false final false
  inline ::System::Object* ConvertText(::StringW text);

  /// @brief Method SendWebRequest addr 0x2bda7b0 size 0x284 virtual true final false
  inline void SendWebRequest(::StringW path);

  static inline ::UnityEngine::ResourceManagement::ResourceProviders::__TextDataProvider__InternalOp* New_ctor();

  /// @brief Method .ctor addr 0x2bd9fe8 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <SendWebRequest>b__13_0 addr 0x2bdaa34 size 0x98 virtual false final false
  inline void _SendWebRequest_b__13_0(::UnityEngine::Networking::UnityWebRequestAsyncOperation* asyncOperation);

  // Ctor Parameters [CppParam { name: "", ty: "__TextDataProvider__InternalOp", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TextDataProvider__InternalOp(__TextDataProvider__InternalOp&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TextDataProvider__InternalOp", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TextDataProvider__InternalOp(__TextDataProvider__InternalOp const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TextDataProvider__InternalOp();

public:
  /// @brief Field m_Provider, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider* ___m_Provider;

  /// @brief Field m_RequestOperation, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Networking::UnityWebRequestAsyncOperation* ___m_RequestOperation;

  /// @brief Field m_RequestQueueOperation, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::ResourceManagement::WebRequestQueueOperation* ___m_RequestQueueOperation;

  /// @brief Field m_PI, offset: 0x28, size: 0x18, def value: None
  ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle ___m_PI;

  /// @brief Field m_IgnoreFailures, offset: 0x40, size: 0x1, def value: None
  bool ___m_IgnoreFailures;

  /// @brief Field m_Complete, offset: 0x41, size: 0x1, def value: None
  bool ___m_Complete;

  /// @brief Field m_Timeout, offset: 0x44, size: 0x4, def value: None
  int32_t ___m_Timeout;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::ResourceProviders::__TextDataProvider__InternalOp, 0x48>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::ResourceProviders
// Type: UnityEngine.ResourceManagement.ResourceProviders::TextDataProvider
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 29, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14013))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14019))
// CS Name: ::UnityEngine.ResourceManagement.ResourceProviders::TextDataProvider*
class CORDL_TYPE TextDataProvider : public ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase {
public:
  // Declarations
  using InternalOp = ::UnityEngine::ResourceManagement::ResourceProviders::__TextDataProvider__InternalOp;

  /// @brief Field <IgnoreFailures>k__BackingField, offset 0x1c, size 0x1
  __declspec(property(get = __get__IgnoreFailures_k__BackingField, put = __set__IgnoreFailures_k__BackingField)) bool _IgnoreFailures_k__BackingField;

  __declspec(property(get = get_IgnoreFailures, put = set_IgnoreFailures)) bool IgnoreFailures;

  constexpr bool& __get__IgnoreFailures_k__BackingField();

  constexpr bool const& __get__IgnoreFailures_k__BackingField() const;

  constexpr void __set__IgnoreFailures_k__BackingField(bool value);

  /// @brief Method get_IgnoreFailures addr 0x2bd9f3c size 0x8 virtual false final false
  inline bool get_IgnoreFailures();

  /// @brief Method set_IgnoreFailures addr 0x2bd9f44 size 0xc virtual false final false
  inline void set_IgnoreFailures(bool value);

  /// @brief Method Convert addr 0x2bd9f50 size 0x8 virtual true final false
  inline ::System::Object* Convert(::System::Type* type, ::StringW text);

  /// @brief Method Provide addr 0x2bd9f58 size 0x90 virtual true final false
  inline void Provide(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle provideHandle);

  static inline ::UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider* New_ctor();

  /// @brief Method .ctor addr 0x2bd7748 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TextDataProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextDataProvider(TextDataProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextDataProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextDataProvider(TextDataProvider const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextDataProvider();

public:
  /// @brief Field <IgnoreFailures>k__BackingField, offset: 0x1c, size: 0x1, def value: None
  bool ____IgnoreFailures_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider, 0x20>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::ResourceProviders
NEED_NO_BOX(::UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider*, "UnityEngine.ResourceManagement.ResourceProviders", "TextDataProvider");
NEED_NO_BOX(::UnityEngine::ResourceManagement::ResourceProviders::__TextDataProvider__InternalOp);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::__TextDataProvider__InternalOp*, "UnityEngine.ResourceManagement.ResourceProviders", "TextDataProvider/InternalOp");
