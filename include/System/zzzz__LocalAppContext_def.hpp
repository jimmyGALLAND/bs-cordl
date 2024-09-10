#pragma once
// IWYU pragma private; include "System/LocalAppContext.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LocalAppContext)
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
class Object;
}
namespace System {
class __LocalAppContext____c;
}
// Forward declare root types
namespace System {
class LocalAppContext;
}
namespace System {
class __LocalAppContext____c;
}
// Write type traits
MARK_REF_PTR_T(::System::LocalAppContext);
MARK_REF_PTR_T(::System::__LocalAppContext____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::LocalAppContext::<>c*
class CORDL_TYPE __LocalAppContext____c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::System::__LocalAppContext____c*  __9;

/// @brief Field <>9__6_0, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF___9__6_0, put=setStaticF___9__6_0)) ::System::Func_1<bool>*  __9__6_0;

static inline ::System::__LocalAppContext____c* New_ctor() ;

/// @brief Method .ctor, addr 0x40a415c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method <get_DisableCaching>b__6_0, addr 0x40a4164, size 0x78, virtual false, abstract: false, final false
inline bool _get_DisableCaching_b__6_0() ;

static inline ::System::__LocalAppContext____c* getStaticF___9() ;

static inline ::System::Func_1<bool>* getStaticF___9__6_0() ;

static inline void setStaticF___9(::System::__LocalAppContext____c*  value) ;

static inline void setStaticF___9__6_0(::System::Func_1<bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __LocalAppContext____c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__LocalAppContext____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__LocalAppContext____c(__LocalAppContext____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__LocalAppContext____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__LocalAppContext____c(__LocalAppContext____c const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__LocalAppContext____c, 0x10>, "Size mismatch!");

} // namespace end def System
// Type: System::LocalAppContext
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::System::LocalAppContext*
class CORDL_TYPE LocalAppContext : public ::System::Object {
public:
// Declarations
using __c = ::System::__LocalAppContext____c;

/// @brief Field s_disableCaching, offset 0xffffffff, size 0x1 
static __declspec(property(get=getStaticF_s_disableCaching, put=setStaticF_s_disableCaching)) bool  s_disableCaching;

/// @brief Field s_isDisableCachingInitialized, offset 0xffffffff, size 0x1 
static __declspec(property(get=getStaticF_s_isDisableCachingInitialized, put=setStaticF_s_isDisableCachingInitialized)) bool  s_isDisableCachingInitialized;

/// @brief Field s_syncObject, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_s_syncObject, put=setStaticF_s_syncObject)) ::System::Object*  s_syncObject;

/// @brief Method GetCachedSwitchValue, addr 0x40a3f3c, size 0x20, virtual false, abstract: false, final false
static inline bool GetCachedSwitchValue(::StringW  switchName, ByRef<int32_t>  switchValue) ;

/// @brief Method GetCachedSwitchValueInternal, addr 0x40a3f5c, size 0x94, virtual false, abstract: false, final false
static inline bool GetCachedSwitchValueInternal(::StringW  switchName, ByRef<int32_t>  switchValue) ;

static inline bool getStaticF_s_disableCaching() ;

static inline bool getStaticF_s_isDisableCachingInitialized() ;

static inline ::System::Object* getStaticF_s_syncObject() ;

/// @brief Method get_DisableCaching, addr 0x40a3ff0, size 0x110, virtual false, abstract: false, final false
static inline bool get_DisableCaching() ;

static inline void setStaticF_s_disableCaching(bool  value) ;

static inline void setStaticF_s_isDisableCachingInitialized(bool  value) ;

static inline void setStaticF_s_syncObject(::System::Object*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalAppContext() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalAppContext", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalAppContext(LocalAppContext && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalAppContext", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalAppContext(LocalAppContext const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::LocalAppContext, 0x10>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::LocalAppContext);
DEFINE_IL2CPP_ARG_TYPE(::System::LocalAppContext*, "System", "LocalAppContext");
NEED_NO_BOX(::System::__LocalAppContext____c);
DEFINE_IL2CPP_ARG_TYPE(::System::__LocalAppContext____c*, "System", "LocalAppContext/<>c");
