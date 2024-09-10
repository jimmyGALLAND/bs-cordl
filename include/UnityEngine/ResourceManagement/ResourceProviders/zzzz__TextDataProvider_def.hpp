#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/ResourceProviders/TextDataProvider.hpp"
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
class Exception;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::Networking {
class UnityWebRequestAsyncOperation;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct ProvideHandle;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class __TextDataProvider__InternalOp;
}
namespace UnityEngine::ResourceManagement {
class WebRequestQueueOperation;
}
namespace UnityEngine {
class AsyncOperation;
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
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: false
// CS Name: ::TextDataProvider::InternalOp*
class CORDL_TYPE __TextDataProvider__InternalOp : public ::System::Object {
public:
// Declarations
/// @brief Field m_Complete, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_Complete, put=__cordl_internal_set_m_Complete)) bool  m_Complete;

/// @brief Field m_IgnoreFailures, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IgnoreFailures, put=__cordl_internal_set_m_IgnoreFailures)) bool  m_IgnoreFailures;

/// @brief Field m_PI, offset 0x28, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_PI, put=__cordl_internal_set_m_PI)) ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle  m_PI;

/// @brief Field m_Provider, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Provider, put=__cordl_internal_set_m_Provider)) ::UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider*  m_Provider;

/// @brief Field m_RequestOperation, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RequestOperation, put=__cordl_internal_set_m_RequestOperation)) ::UnityEngine::Networking::UnityWebRequestAsyncOperation*  m_RequestOperation;

/// @brief Field m_RequestQueueOperation, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RequestQueueOperation, put=__cordl_internal_set_m_RequestQueueOperation)) ::UnityEngine::ResourceManagement::WebRequestQueueOperation*  m_RequestQueueOperation;

/// @brief Field m_Timeout, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Timeout, put=__cordl_internal_set_m_Timeout)) int32_t  m_Timeout;

/// @brief Method CompleteOperation, addr 0x470fc68, size 0xac, virtual false, abstract: false, final false
inline void CompleteOperation(::StringW  text, ::System::Exception*  exception) ;

/// @brief Method ConvertText, addr 0x470f940, size 0xf8, virtual false, abstract: false, final false
inline ::System::Object* ConvertText(::StringW  text) ;

/// @brief Method GetPercentComplete, addr 0x470f928, size 0x18, virtual false, abstract: false, final false
inline float_t GetPercentComplete() ;

static inline ::UnityEngine::ResourceManagement::ResourceProviders::__TextDataProvider__InternalOp* New_ctor() ;

/// @brief Method RequestOperation_completed, addr 0x470faac, size 0x1bc, virtual false, abstract: false, final false
inline void RequestOperation_completed(::UnityEngine::AsyncOperation*  op) ;

/// @brief Method SendWebRequest, addr 0x470fd14, size 0x2a8, virtual true, abstract: false, final false
inline void SendWebRequest(::StringW  path) ;

/// @brief Method Start, addr 0x470f534, size 0x3f4, virtual false, abstract: false, final false
inline void Start(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle  provideHandle, ::UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider*  rawProvider) ;

/// @brief Method WaitForCompletionHandler, addr 0x470fa38, size 0x74, virtual false, abstract: false, final false
inline bool WaitForCompletionHandler() ;

/// @brief Method <SendWebRequest>b__13_0, addr 0x470ffbc, size 0x94, virtual false, abstract: false, final false
inline void _SendWebRequest_b__13_0(::UnityEngine::Networking::UnityWebRequestAsyncOperation*  asyncOperation) ;

constexpr bool const& __cordl_internal_get_m_Complete() const;

constexpr bool& __cordl_internal_get_m_Complete() ;

constexpr bool const& __cordl_internal_get_m_IgnoreFailures() const;

constexpr bool& __cordl_internal_get_m_IgnoreFailures() ;

constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle const& __cordl_internal_get_m_PI() const;

constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle& __cordl_internal_get_m_PI() ;

constexpr ::UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider*& __cordl_internal_get_m_Provider() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider*> const& __cordl_internal_get_m_Provider() const;

constexpr ::UnityEngine::Networking::UnityWebRequestAsyncOperation*& __cordl_internal_get_m_RequestOperation() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Networking::UnityWebRequestAsyncOperation*> const& __cordl_internal_get_m_RequestOperation() const;

constexpr ::UnityEngine::ResourceManagement::WebRequestQueueOperation*& __cordl_internal_get_m_RequestQueueOperation() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::WebRequestQueueOperation*> const& __cordl_internal_get_m_RequestQueueOperation() const;

constexpr int32_t const& __cordl_internal_get_m_Timeout() const;

constexpr int32_t& __cordl_internal_get_m_Timeout() ;

constexpr void __cordl_internal_set_m_Complete(bool  value) ;

constexpr void __cordl_internal_set_m_IgnoreFailures(bool  value) ;

constexpr void __cordl_internal_set_m_PI(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle  value) ;

constexpr void __cordl_internal_set_m_Provider(::UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider*  value) ;

constexpr void __cordl_internal_set_m_RequestOperation(::UnityEngine::Networking::UnityWebRequestAsyncOperation*  value) ;

constexpr void __cordl_internal_set_m_RequestQueueOperation(::UnityEngine::ResourceManagement::WebRequestQueueOperation*  value) ;

constexpr void __cordl_internal_set_m_Timeout(int32_t  value) ;

/// @brief Method .ctor, addr 0x470f52c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __TextDataProvider__InternalOp() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__TextDataProvider__InternalOp", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TextDataProvider__InternalOp(__TextDataProvider__InternalOp && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TextDataProvider__InternalOp", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TextDataProvider__InternalOp(__TextDataProvider__InternalOp const& ) = delete;

/// @brief Field m_Provider, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider*  ___m_Provider;

/// @brief Field m_RequestOperation, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequestAsyncOperation*  ___m_RequestOperation;

/// @brief Field m_RequestQueueOperation, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::ResourceManagement::WebRequestQueueOperation*  ___m_RequestQueueOperation;

/// @brief Field m_PI, offset: 0x28, size: 0x18, def value: None
 ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle  ___m_PI;

/// @brief Field m_IgnoreFailures, offset: 0x40, size: 0x1, def value: None
 bool  ___m_IgnoreFailures;

/// @brief Field m_Complete, offset: 0x41, size: 0x1, def value: None
 bool  ___m_Complete;

/// @brief Field m_Timeout, offset: 0x44, size: 0x4, def value: None
 int32_t  ___m_Timeout;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::ResourceProviders::__TextDataProvider__InternalOp, 0x48>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::__TextDataProvider__InternalOp, ___m_Provider) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::__TextDataProvider__InternalOp, ___m_RequestOperation) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::__TextDataProvider__InternalOp, ___m_RequestQueueOperation) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::__TextDataProvider__InternalOp, ___m_PI) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::__TextDataProvider__InternalOp, ___m_IgnoreFailures) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::__TextDataProvider__InternalOp, ___m_Complete) == 0x41, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::__TextDataProvider__InternalOp, ___m_Timeout) == 0x44, "Offset mismatch!");

} // namespace end def UnityEngine::ResourceManagement::ResourceProviders
// Type: UnityEngine.ResourceManagement.ResourceProviders::TextDataProvider
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 29, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: false
// CS Name: ::UnityEngine.ResourceManagement.ResourceProviders::TextDataProvider*
class CORDL_TYPE TextDataProvider : public ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase {
public:
// Declarations
using InternalOp = ::UnityEngine::ResourceManagement::ResourceProviders::__TextDataProvider__InternalOp;

 __declspec(property(get=get_IgnoreFailures, put=set_IgnoreFailures)) bool  IgnoreFailures;

/// @brief Field <IgnoreFailures>k__BackingField, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get__IgnoreFailures_k__BackingField, put=__cordl_internal_set__IgnoreFailures_k__BackingField)) bool  _IgnoreFailures_k__BackingField;

/// @brief Method Convert, addr 0x470f484, size 0x8, virtual true, abstract: false, final false
inline ::System::Object* Convert(::System::Type*  type, ::StringW  text) ;

static inline ::UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider* New_ctor() ;

/// @brief Method Provide, addr 0x470f48c, size 0xa0, virtual true, abstract: false, final false
inline void Provide(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle  provideHandle) ;

constexpr bool const& __cordl_internal_get__IgnoreFailures_k__BackingField() const;

constexpr bool& __cordl_internal_get__IgnoreFailures_k__BackingField() ;

constexpr void __cordl_internal_set__IgnoreFailures_k__BackingField(bool  value) ;

/// @brief Method .ctor, addr 0x470cab4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IgnoreFailures, addr 0x470f470, size 0x8, virtual false, abstract: false, final false
inline bool get_IgnoreFailures() ;

/// @brief Method set_IgnoreFailures, addr 0x470f478, size 0xc, virtual false, abstract: false, final false
inline void set_IgnoreFailures(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TextDataProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextDataProvider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TextDataProvider(TextDataProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextDataProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextDataProvider(TextDataProvider const& ) = delete;

/// @brief Field <IgnoreFailures>k__BackingField, offset: 0x1c, size: 0x1, def value: None
 bool  ____IgnoreFailures_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider, ____IgnoreFailures_k__BackingField) == 0x1c, "Offset mismatch!");

} // namespace end def UnityEngine::ResourceManagement::ResourceProviders
NEED_NO_BOX(::UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider*, "UnityEngine.ResourceManagement.ResourceProviders", "TextDataProvider");
NEED_NO_BOX(::UnityEngine::ResourceManagement::ResourceProviders::__TextDataProvider__InternalOp);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::__TextDataProvider__InternalOp*, "UnityEngine.ResourceManagement.ResourceProviders", "TextDataProvider/InternalOp");
