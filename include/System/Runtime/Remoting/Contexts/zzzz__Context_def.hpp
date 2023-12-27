#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__UIntPtr_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Context)
namespace System {
class LocalDataStoreSlot;
}
namespace System::Runtime::Remoting::Contexts {
class ContextCallbackObject;
}
namespace System {
class LocalDataStore;
}
namespace System {
class ContextBoundObject;
}
namespace System {
class Object;
}
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
namespace System::Runtime::Remoting::Contexts {
class IDynamicProperty;
}
namespace System {
class LocalDataStoreMgr;
}
namespace System {
class MarshalByRefObject;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Runtime::Remoting::Contexts {
class CrossContextDelegate;
}
namespace System::Runtime::Remoting::Contexts {
class IContextProperty;
}
namespace System::Runtime::Remoting::Contexts {
class DynamicPropertyCollection;
}
namespace System::Runtime::Remoting::Activation {
class IConstructionCallMessage;
}
namespace System {
class LocalDataStoreHolder;
}
namespace System::Runtime::Remoting::Messaging {
class IMessageSink;
}
// Forward declare root types
namespace System::Runtime::Remoting::Contexts {
class Context;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Contexts::Context);
// Type: System.Runtime.Remoting.Contexts::Context
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Contexts {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3098))
// CS Name: ::System.Runtime.Remoting.Contexts::Context*
class CORDL_TYPE Context : public ::System::Object {
public:
  // Declarations
  /// @brief Field domain_id, offset 0x10, size 0x4
  __declspec(property(get = __get_domain_id, put = __set_domain_id)) int32_t domain_id;

  /// @brief Field context_id, offset 0x14, size 0x4
  __declspec(property(get = __get_context_id, put = __set_context_id)) int32_t context_id;

  /// @brief Field static_data, offset 0x18, size 0x8
  __declspec(property(get = __get_static_data, put = __set_static_data)) void* static_data;

  /// @brief Field data, offset 0x20, size 0x8
  __declspec(property(get = __get_data, put = __set_data)) void* data;

  /// @brief Field server_context_sink_chain, offset 0x28, size 0x8
  __declspec(property(get = __get_server_context_sink_chain, put = __set_server_context_sink_chain))::System::Runtime::Remoting::Messaging::IMessageSink* server_context_sink_chain;

  /// @brief Field client_context_sink_chain, offset 0x30, size 0x8
  __declspec(property(get = __get_client_context_sink_chain, put = __set_client_context_sink_chain))::System::Runtime::Remoting::Messaging::IMessageSink* client_context_sink_chain;

  /// @brief Field context_properties, offset 0x38, size 0x8
  __declspec(property(get = __get_context_properties,
                      put = __set_context_properties))::System::Collections::Generic::List_1<::System::Runtime::Remoting::Contexts::IContextProperty*>* context_properties;

  /// @brief Field _localDataStore, offset 0x40, size 0x8
  __declspec(property(get = __get__localDataStore, put = __set__localDataStore))::System::LocalDataStoreHolder* _localDataStore;

  /// @brief Field context_dynamic_properties, offset 0x48, size 0x8
  __declspec(property(get = __get_context_dynamic_properties, put = __set_context_dynamic_properties))::System::Runtime::Remoting::Contexts::DynamicPropertyCollection* context_dynamic_properties;

  /// @brief Field callback_object, offset 0x50, size 0x8
  __declspec(property(get = __get_callback_object, put = __set_callback_object))::System::Runtime::Remoting::Contexts::ContextCallbackObject* callback_object;

  /// @brief Field local_slots, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_local_slots, put = setStaticF_local_slots))::ArrayW<::System::Object*, ::Array<::System::Object*>*> local_slots;

  /// @brief Field default_server_context_sink, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_default_server_context_sink,
                             put = setStaticF_default_server_context_sink))::System::Runtime::Remoting::Messaging::IMessageSink* default_server_context_sink;

  /// @brief Field global_count, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_global_count, put = setStaticF_global_count)) int32_t global_count;

  /// @brief Field _localDataStoreMgr, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__localDataStoreMgr, put = setStaticF__localDataStoreMgr))::System::LocalDataStoreMgr* _localDataStoreMgr;

  /// @brief Field global_dynamic_properties, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_global_dynamic_properties,
                             put = setStaticF_global_dynamic_properties))::System::Runtime::Remoting::Contexts::DynamicPropertyCollection* global_dynamic_properties;

  __declspec(property(get = get_ContextID)) int32_t ContextID;

  __declspec(
      property(get = get_ContextProperties))::ArrayW<::System::Runtime::Remoting::Contexts::IContextProperty*, ::Array<::System::Runtime::Remoting::Contexts::IContextProperty*>*> ContextProperties;

  __declspec(property(get = get_IsDefaultContext)) bool IsDefaultContext;

  __declspec(property(get = get_NeedsContextSink)) bool NeedsContextSink;

  __declspec(property(get = get_HasDynamicSinks)) bool HasDynamicSinks;

  __declspec(property(get = get_HasExitSinks)) bool HasExitSinks;

  __declspec(property(get = get_MyLocalStore))::System::LocalDataStore* MyLocalStore;

  constexpr int32_t& __get_domain_id();

  constexpr int32_t const& __get_domain_id() const;

  constexpr void __set_domain_id(int32_t value);

  constexpr int32_t& __get_context_id();

  constexpr int32_t const& __get_context_id() const;

  constexpr void __set_context_id(int32_t value);

  constexpr void*& __get_static_data();

  constexpr void* const& __get_static_data() const;

  constexpr void __set_static_data(void* value);

  constexpr void*& __get_data();

  constexpr void* const& __get_data() const;

  constexpr void __set_data(void* value);

  constexpr ::System::Runtime::Remoting::Messaging::IMessageSink*& __get_server_context_sink_chain();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Messaging::IMessageSink*> const& __get_server_context_sink_chain() const;

  constexpr void __set_server_context_sink_chain(::System::Runtime::Remoting::Messaging::IMessageSink* value);

  constexpr ::System::Runtime::Remoting::Messaging::IMessageSink*& __get_client_context_sink_chain();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Messaging::IMessageSink*> const& __get_client_context_sink_chain() const;

  constexpr void __set_client_context_sink_chain(::System::Runtime::Remoting::Messaging::IMessageSink* value);

  constexpr ::System::Collections::Generic::List_1<::System::Runtime::Remoting::Contexts::IContextProperty*>*& __get_context_properties();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Runtime::Remoting::Contexts::IContextProperty*>*> const& __get_context_properties() const;

  constexpr void __set_context_properties(::System::Collections::Generic::List_1<::System::Runtime::Remoting::Contexts::IContextProperty*>* value);

  constexpr ::System::LocalDataStoreHolder*& __get__localDataStore();

  constexpr ::cordl_internals::to_const_pointer<::System::LocalDataStoreHolder*> const& __get__localDataStore() const;

  constexpr void __set__localDataStore(::System::LocalDataStoreHolder* value);

  constexpr ::System::Runtime::Remoting::Contexts::DynamicPropertyCollection*& __get_context_dynamic_properties();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Contexts::DynamicPropertyCollection*> const& __get_context_dynamic_properties() const;

  constexpr void __set_context_dynamic_properties(::System::Runtime::Remoting::Contexts::DynamicPropertyCollection* value);

  constexpr ::System::Runtime::Remoting::Contexts::ContextCallbackObject*& __get_callback_object();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Contexts::ContextCallbackObject*> const& __get_callback_object() const;

  constexpr void __set_callback_object(::System::Runtime::Remoting::Contexts::ContextCallbackObject* value);

  static inline void setStaticF_local_slots(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  static inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> getStaticF_local_slots();

  static inline void setStaticF_default_server_context_sink(::System::Runtime::Remoting::Messaging::IMessageSink* value);

  static inline ::System::Runtime::Remoting::Messaging::IMessageSink* getStaticF_default_server_context_sink();

  static inline void setStaticF_global_count(int32_t value);

  static inline int32_t getStaticF_global_count();

  static inline void setStaticF__localDataStoreMgr(::System::LocalDataStoreMgr* value);

  static inline ::System::LocalDataStoreMgr* getStaticF__localDataStoreMgr();

  static inline void setStaticF_global_dynamic_properties(::System::Runtime::Remoting::Contexts::DynamicPropertyCollection* value);

  static inline ::System::Runtime::Remoting::Contexts::DynamicPropertyCollection* getStaticF_global_dynamic_properties();

  /// @brief Method RegisterContext addr 0x249c4e4 size 0x4 virtual false final false
  static inline void RegisterContext(::System::Runtime::Remoting::Contexts::Context* ctx);

  /// @brief Method ReleaseContext addr 0x249c4e8 size 0x4 virtual false final false
  static inline void ReleaseContext(::System::Runtime::Remoting::Contexts::Context* ctx);

  static inline ::System::Runtime::Remoting::Contexts::Context* New_ctor();

  /// @brief Method .ctor addr 0x249c4ec size 0x84 virtual false final false
  inline void _ctor();

  /// @brief Method Finalize addr 0x249c570 size 0xd0 virtual true final false
  inline void Finalize();

  /// @brief Method get_DefaultContext addr 0x2493da0 size 0x8 virtual false final false
  static inline ::System::Runtime::Remoting::Contexts::Context* get_DefaultContext();

  /// @brief Method get_ContextID addr 0x249c640 size 0x8 virtual true final false
  inline int32_t get_ContextID();

  /// @brief Method get_ContextProperties addr 0x249c648 size 0x74 virtual true final false
  inline ::ArrayW<::System::Runtime::Remoting::Contexts::IContextProperty*, ::Array<::System::Runtime::Remoting::Contexts::IContextProperty*>*> get_ContextProperties();

  /// @brief Method get_IsDefaultContext addr 0x249c6bc size 0x10 virtual false final false
  inline bool get_IsDefaultContext();

  /// @brief Method get_NeedsContextSink addr 0x249c6cc size 0xe0 virtual false final false
  inline bool get_NeedsContextSink();

  /// @brief Method RegisterDynamicProperty addr 0x249c7dc size 0x78 virtual false final false
  static inline bool RegisterDynamicProperty(::System::Runtime::Remoting::Contexts::IDynamicProperty* prop, ::System::ContextBoundObject* obj, ::System::Runtime::Remoting::Contexts::Context* ctx);

  /// @brief Method UnregisterDynamicProperty addr 0x249cd24 size 0x78 virtual false final false
  static inline bool UnregisterDynamicProperty(::StringW name, ::System::ContextBoundObject* obj, ::System::Runtime::Remoting::Contexts::Context* ctx);

  /// @brief Method GetDynamicPropertyCollection addr 0x249c854 size 0x1e4 virtual false final false
  static inline ::System::Runtime::Remoting::Contexts::DynamicPropertyCollection* GetDynamicPropertyCollection(::System::ContextBoundObject* obj, ::System::Runtime::Remoting::Contexts::Context* ctx);

  /// @brief Method NotifyGlobalDynamicSinks addr 0x249cf7c size 0x100 virtual false final false
  static inline void NotifyGlobalDynamicSinks(bool start, ::System::Runtime::Remoting::Messaging::IMessage* req_msg, bool client_site, bool async);

  /// @brief Method get_HasGlobalDynamicSinks addr 0x249d6d8 size 0xa4 virtual false final false
  static inline bool get_HasGlobalDynamicSinks();

  /// @brief Method NotifyDynamicSinks addr 0x249d77c size 0x84 virtual false final false
  inline void NotifyDynamicSinks(bool start, ::System::Runtime::Remoting::Messaging::IMessage* req_msg, bool client_site, bool async);

  /// @brief Method get_HasDynamicSinks addr 0x249d800 size 0x40 virtual false final false
  inline bool get_HasDynamicSinks();

  /// @brief Method get_HasExitSinks addr 0x2499cd0 size 0xb8 virtual false final false
  inline bool get_HasExitSinks();

  /// @brief Method GetProperty addr 0x249d840 size 0x1e8 virtual true final false
  inline ::System::Runtime::Remoting::Contexts::IContextProperty* GetProperty(::StringW name);

  /// @brief Method SetProperty addr 0x249da28 size 0x1ac virtual true final false
  inline void SetProperty(::System::Runtime::Remoting::Contexts::IContextProperty* prop);

  /// @brief Method Freeze addr 0x249dbd4 size 0x1ac virtual true final false
  inline void Freeze();

  /// @brief Method ToString addr 0x249dd80 size 0x5c virtual true final false
  inline ::StringW ToString();

  /// @brief Method GetServerContextSinkChain addr 0x249dddc size 0x1c4 virtual false final false
  inline ::System::Runtime::Remoting::Messaging::IMessageSink* GetServerContextSinkChain();

  /// @brief Method GetClientContextSinkChain addr 0x2499d88 size 0x208 virtual false final false
  inline ::System::Runtime::Remoting::Messaging::IMessageSink* GetClientContextSinkChain();

  /// @brief Method CreateServerObjectSinkChain addr 0x24938d8 size 0x1b8 virtual false final false
  inline ::System::Runtime::Remoting::Messaging::IMessageSink* CreateServerObjectSinkChain(::System::MarshalByRefObject* obj, bool forceInternalExecute);

  /// @brief Method CreateEnvoySink addr 0x2493240 size 0x204 virtual false final false
  inline ::System::Runtime::Remoting::Messaging::IMessageSink* CreateEnvoySink(::System::MarshalByRefObject* serverObject);

  /// @brief Method SwitchToContext addr 0x249dfc8 size 0x8 virtual false final false
  static inline ::System::Runtime::Remoting::Contexts::Context* SwitchToContext(::System::Runtime::Remoting::Contexts::Context* newContext);

  /// @brief Method CreateNewContext addr 0x249dfd0 size 0x844 virtual false final false
  static inline ::System::Runtime::Remoting::Contexts::Context* CreateNewContext(::System::Runtime::Remoting::Activation::IConstructionCallMessage* msg);

  /// @brief Method DoCallBack addr 0x249e814 size 0x174 virtual false final false
  inline void DoCallBack(::System::Runtime::Remoting::Contexts::CrossContextDelegate* deleg);

  /// @brief Method get_MyLocalStore addr 0x249e994 size 0x174 virtual false final false
  inline ::System::LocalDataStore* get_MyLocalStore();

  /// @brief Method AllocateDataSlot addr 0x249eb08 size 0x64 virtual false final false
  static inline ::System::LocalDataStoreSlot* AllocateDataSlot();

  /// @brief Method AllocateNamedDataSlot addr 0x249eb6c size 0x6c virtual false final false
  static inline ::System::LocalDataStoreSlot* AllocateNamedDataSlot(::StringW name);

  /// @brief Method FreeNamedDataSlot addr 0x249ebd8 size 0x6c virtual false final false
  static inline void FreeNamedDataSlot(::StringW name);

  /// @brief Method GetNamedDataSlot addr 0x249ec44 size 0x6c virtual false final false
  static inline ::System::LocalDataStoreSlot* GetNamedDataSlot(::StringW name);

  /// @brief Method GetData addr 0x249ecb0 size 0x30 virtual false final false
  static inline ::System::Object* GetData(::System::LocalDataStoreSlot* slot);

  /// @brief Method SetData addr 0x249ece0 size 0x40 virtual false final false
  static inline void SetData(::System::LocalDataStoreSlot* slot, ::System::Object* data);

  // Ctor Parameters [CppParam { name: "", ty: "Context", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Context(Context&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Context", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Context(Context const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Context();

public:
  /// @brief Field domain_id, offset: 0x10, size: 0x4, def value: None
  int32_t ___domain_id;

  /// @brief Field context_id, offset: 0x14, size: 0x4, def value: None
  int32_t ___context_id;

  /// @brief Field static_data, offset: 0x18, size: 0x8, def value: None
  void* ___static_data;

  /// @brief Field data, offset: 0x20, size: 0x8, def value: None
  void* ___data;

  /// @brief Field server_context_sink_chain, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::Remoting::Messaging::IMessageSink* ___server_context_sink_chain;

  /// @brief Field client_context_sink_chain, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::Remoting::Messaging::IMessageSink* ___client_context_sink_chain;

  /// @brief Field context_properties, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Runtime::Remoting::Contexts::IContextProperty*>* ___context_properties;

  /// @brief Field _localDataStore, offset: 0x40, size: 0x8, def value: None
  ::System::LocalDataStoreHolder* ____localDataStore;

  /// @brief Field context_dynamic_properties, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::Remoting::Contexts::DynamicPropertyCollection* ___context_dynamic_properties;

  /// @brief Field callback_object, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::Remoting::Contexts::ContextCallbackObject* ___callback_object;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Contexts::Context, 0x58>, "Size mismatch!");

} // namespace System::Runtime::Remoting::Contexts
NEED_NO_BOX(::System::Runtime::Remoting::Contexts::Context);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Contexts::Context*, "System.Runtime.Remoting.Contexts", "Context");
