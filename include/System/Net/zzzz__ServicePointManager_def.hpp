#pragma once
// IWYU pragma private; include "System/Net/ServicePointManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__SecurityProtocolType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ServicePointManager)
namespace System::Collections::Concurrent {
template<typename TKey,typename TValue>
class ConcurrentDictionary_2;
}
namespace System::Net::Security {
class RemoteCertificateValidationCallback;
}
namespace System::Net {
class ICertificatePolicy;
}
namespace System::Net {
class IWebProxy;
}
namespace System::Net {
struct SecurityProtocolType;
}
namespace System::Net {
class ServerCertValidationCallback;
}
namespace System::Net {
class ServicePoint;
}
namespace System::Net {
class __ServicePointManager__SPKey;
}
namespace System {
class Object;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Net {
class ServicePointManager;
}
namespace System::Net {
class __ServicePointManager__SPKey;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::ServicePointManager);
MARK_REF_PTR_T(::System::Net::__ServicePointManager__SPKey);
// Type: ::SPKey
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// CS Name: ::ServicePointManager::SPKey*
class CORDL_TYPE __ServicePointManager__SPKey : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_UsesProxy)) bool  UsesProxy;

/// @brief Field proxy, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_proxy, put=__cordl_internal_set_proxy)) ::System::Uri*  proxy;

/// @brief Field uri, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_uri, put=__cordl_internal_set_uri)) ::System::Uri*  uri;

/// @brief Field use_connect, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_use_connect, put=__cordl_internal_set_use_connect)) bool  use_connect;

/// @brief Method Equals, addr 0x43448d8, size 0xf4, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode, addr 0x4344804, size 0xd4, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

static inline ::System::Net::__ServicePointManager__SPKey* New_ctor(::System::Uri*  uri, ::System::Uri*  proxy, bool  use_connect) ;

constexpr ::System::Uri*& __cordl_internal_get_proxy() ;

constexpr ::cordl_internals::to_const_pointer<::System::Uri*> const& __cordl_internal_get_proxy() const;

constexpr ::System::Uri*& __cordl_internal_get_uri() ;

constexpr ::cordl_internals::to_const_pointer<::System::Uri*> const& __cordl_internal_get_uri() const;

constexpr bool const& __cordl_internal_get_use_connect() const;

constexpr bool& __cordl_internal_get_use_connect() ;

constexpr void __cordl_internal_set_proxy(::System::Uri*  value) ;

constexpr void __cordl_internal_set_uri(::System::Uri*  value) ;

constexpr void __cordl_internal_set_use_connect(bool  value) ;

/// @brief Method .ctor, addr 0x43442cc, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(::System::Uri*  uri, ::System::Uri*  proxy, bool  use_connect) ;

/// @brief Method get_UsesProxy, addr 0x43447a4, size 0x60, virtual false, abstract: false, final false
inline bool get_UsesProxy() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __ServicePointManager__SPKey() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__ServicePointManager__SPKey", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ServicePointManager__SPKey(__ServicePointManager__SPKey && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ServicePointManager__SPKey", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ServicePointManager__SPKey(__ServicePointManager__SPKey const& ) = delete;

/// @brief Field uri, offset: 0x10, size: 0x8, def value: None
 ::System::Uri*  ___uri;

/// @brief Field proxy, offset: 0x18, size: 0x8, def value: None
 ::System::Uri*  ___proxy;

/// @brief Field use_connect, offset: 0x20, size: 0x1, def value: None
 bool  ___use_connect;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__ServicePointManager__SPKey, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Net::__ServicePointManager__SPKey, ___uri) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::__ServicePointManager__SPKey, ___proxy) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::__ServicePointManager__SPKey, ___use_connect) == 0x20, "Offset mismatch!");

} // namespace end def System::Net
// Type: System.Net::ServicePointManager
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// CS Name: ::System.Net::ServicePointManager*
class CORDL_TYPE ServicePointManager : public ::System::Object {
public:
// Declarations
using SPKey = ::System::Net::__ServicePointManager__SPKey;

/// @brief Field _checkCRL, offset 0xffffffff, size 0x1 
static __declspec(property(get=getStaticF__checkCRL, put=setStaticF__checkCRL)) bool  _checkCRL;

/// @brief Field _securityProtocol, offset 0xffffffff, size 0x4 
static __declspec(property(get=getStaticF__securityProtocol, put=setStaticF__securityProtocol)) ::System::Net::SecurityProtocolType  _securityProtocol;

/// @brief Field defaultConnectionLimit, offset 0xffffffff, size 0x4 
static __declspec(property(get=getStaticF_defaultConnectionLimit, put=setStaticF_defaultConnectionLimit)) int32_t  defaultConnectionLimit;

/// @brief Field dnsRefreshTimeout, offset 0xffffffff, size 0x4 
static __declspec(property(get=getStaticF_dnsRefreshTimeout, put=setStaticF_dnsRefreshTimeout)) int32_t  dnsRefreshTimeout;

/// @brief Field expectContinue, offset 0xffffffff, size 0x1 
static __declspec(property(get=getStaticF_expectContinue, put=setStaticF_expectContinue)) bool  expectContinue;

/// @brief Field maxServicePointIdleTime, offset 0xffffffff, size 0x4 
static __declspec(property(get=getStaticF_maxServicePointIdleTime, put=setStaticF_maxServicePointIdleTime)) int32_t  maxServicePointIdleTime;

/// @brief Field maxServicePoints, offset 0xffffffff, size 0x4 
static __declspec(property(get=getStaticF_maxServicePoints, put=setStaticF_maxServicePoints)) int32_t  maxServicePoints;

/// @brief Field policy, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_policy, put=setStaticF_policy)) ::System::Net::ICertificatePolicy*  policy;

/// @brief Field server_cert_cb, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_server_cert_cb, put=setStaticF_server_cert_cb)) ::System::Net::ServerCertValidationCallback*  server_cert_cb;

/// @brief Field servicePoints, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_servicePoints, put=setStaticF_servicePoints)) ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Net::__ServicePointManager__SPKey*,::System::Net::ServicePoint*>*  servicePoints;

/// @brief Field tcp_keepalive, offset 0xffffffff, size 0x1 
static __declspec(property(get=getStaticF_tcp_keepalive, put=setStaticF_tcp_keepalive)) bool  tcp_keepalive;

/// @brief Field tcp_keepalive_interval, offset 0xffffffff, size 0x4 
static __declspec(property(get=getStaticF_tcp_keepalive_interval, put=setStaticF_tcp_keepalive_interval)) int32_t  tcp_keepalive_interval;

/// @brief Field tcp_keepalive_time, offset 0xffffffff, size 0x4 
static __declspec(property(get=getStaticF_tcp_keepalive_time, put=setStaticF_tcp_keepalive_time)) int32_t  tcp_keepalive_time;

/// @brief Field useNagle, offset 0xffffffff, size 0x1 
static __declspec(property(get=getStaticF_useNagle, put=setStaticF_useNagle)) bool  useNagle;

/// @brief Method CloseConnectionGroup, addr 0x4344308, size 0x404, virtual false, abstract: false, final false
static inline void CloseConnectionGroup(::StringW  connectionGroupName) ;

/// @brief Method FindServicePoint, addr 0x433821c, size 0x674, virtual false, abstract: false, final false
static inline ::System::Net::ServicePoint* FindServicePoint(::System::Uri*  address, ::System::Net::IWebProxy*  proxy) ;

/// @brief Method GetLegacyCertificatePolicy, addr 0x434408c, size 0x58, virtual false, abstract: false, final false
static inline ::System::Net::ICertificatePolicy* GetLegacyCertificatePolicy() ;

/// @brief Method RemoveServicePoint, addr 0x434470c, size 0x98, virtual false, abstract: false, final false
static inline void RemoveServicePoint(::System::Net::ServicePoint*  sp) ;

static inline bool getStaticF__checkCRL() ;

static inline ::System::Net::SecurityProtocolType getStaticF__securityProtocol() ;

static inline int32_t getStaticF_defaultConnectionLimit() ;

static inline int32_t getStaticF_dnsRefreshTimeout() ;

static inline bool getStaticF_expectContinue() ;

static inline int32_t getStaticF_maxServicePointIdleTime() ;

static inline int32_t getStaticF_maxServicePoints() ;

static inline ::System::Net::ICertificatePolicy* getStaticF_policy() ;

static inline ::System::Net::ServerCertValidationCallback* getStaticF_server_cert_cb() ;

static inline ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Net::__ServicePointManager__SPKey*,::System::Net::ServicePoint*>* getStaticF_servicePoints() ;

static inline bool getStaticF_tcp_keepalive() ;

static inline int32_t getStaticF_tcp_keepalive_interval() ;

static inline int32_t getStaticF_tcp_keepalive_time() ;

static inline bool getStaticF_useNagle() ;

/// @brief Method get_CheckCertificateRevocationList, addr 0x43440e4, size 0x58, virtual false, abstract: false, final false
static inline bool get_CheckCertificateRevocationList() ;

/// @brief Method get_DnsRefreshTimeout, addr 0x434413c, size 0x58, virtual false, abstract: false, final false
static inline int32_t get_DnsRefreshTimeout() ;

/// @brief Method get_SecurityProtocol, addr 0x4344194, size 0x58, virtual false, abstract: false, final false
static inline ::System::Net::SecurityProtocolType get_SecurityProtocol() ;

/// @brief Method get_ServerCertValidationCallback, addr 0x43441ec, size 0x58, virtual false, abstract: false, final false
static inline ::System::Net::ServerCertValidationCallback* get_ServerCertValidationCallback() ;

/// @brief Method get_ServerCertificateValidationCallback, addr 0x4344244, size 0x88, virtual false, abstract: false, final false
static inline ::System::Net::Security::RemoteCertificateValidationCallback* get_ServerCertificateValidationCallback() ;

static inline void setStaticF__checkCRL(bool  value) ;

static inline void setStaticF__securityProtocol(::System::Net::SecurityProtocolType  value) ;

static inline void setStaticF_defaultConnectionLimit(int32_t  value) ;

static inline void setStaticF_dnsRefreshTimeout(int32_t  value) ;

static inline void setStaticF_expectContinue(bool  value) ;

static inline void setStaticF_maxServicePointIdleTime(int32_t  value) ;

static inline void setStaticF_maxServicePoints(int32_t  value) ;

static inline void setStaticF_policy(::System::Net::ICertificatePolicy*  value) ;

static inline void setStaticF_server_cert_cb(::System::Net::ServerCertValidationCallback*  value) ;

static inline void setStaticF_servicePoints(::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Net::__ServicePointManager__SPKey*,::System::Net::ServicePoint*>*  value) ;

static inline void setStaticF_tcp_keepalive(bool  value) ;

static inline void setStaticF_tcp_keepalive_interval(int32_t  value) ;

static inline void setStaticF_tcp_keepalive_time(int32_t  value) ;

static inline void setStaticF_useNagle(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ServicePointManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ServicePointManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ServicePointManager(ServicePointManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ServicePointManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ServicePointManager(ServicePointManager const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::ServicePointManager, 0x10>, "Size mismatch!");

} // namespace end def System::Net
NEED_NO_BOX(::System::Net::ServicePointManager);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::ServicePointManager*, "System.Net", "ServicePointManager");
NEED_NO_BOX(::System::Net::__ServicePointManager__SPKey);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__ServicePointManager__SPKey*, "System.Net", "ServicePointManager/SPKey");
