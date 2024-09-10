#pragma once
// IWYU pragma private; include "UnityEngine/AndroidJavaObject.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AndroidJavaObject)
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AndroidJavaClass;
}
namespace UnityEngine {
class AndroidJavaProxy;
}
namespace UnityEngine {
class AndroidJavaRunnable;
}
namespace UnityEngine {
class GlobalJavaObjectRef;
}
// Forward declare root types
namespace UnityEngine {
class AndroidJavaObject;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AndroidJavaObject);
// Type: UnityEngine::AndroidJavaObject
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::AndroidJavaObject*
class CORDL_TYPE AndroidJavaObject : public ::System::Object {
public:
// Declarations
/// @brief Field enableDebugPrints, offset 0xffffffff, size 0x1 
static __declspec(property(get=getStaticF_enableDebugPrints, put=setStaticF_enableDebugPrints)) bool  enableDebugPrints;

/// @brief Field m_jclass, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_jclass, put=__cordl_internal_set_m_jclass)) ::UnityEngine::GlobalJavaObjectRef*  m_jclass;

/// @brief Field m_jobject, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_jobject, put=__cordl_internal_set_m_jobject)) ::UnityEngine::GlobalJavaObjectRef*  m_jobject;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method AndroidJavaClassDeleteLocalRef, addr 0x47b75c0, size 0xbc, virtual false, abstract: false, final false
static inline ::UnityEngine::AndroidJavaClass* AndroidJavaClassDeleteLocalRef(::System::IntPtr  jclass) ;

/// @brief Method AndroidJavaObjectDeleteLocalRef, addr 0x47b610c, size 0xbc, virtual false, abstract: false, final false
static inline ::UnityEngine::AndroidJavaObject* AndroidJavaObjectDeleteLocalRef(::System::IntPtr  jobject) ;

/// @brief Method Call, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename ReturnType>
inline ReturnType Call(::System::IntPtr  methodID, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method Call, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename ReturnType,typename T>
inline ReturnType Call(::System::IntPtr  methodID, ::ArrayW<T,::Array<T>*>  args) ;

/// @brief Method Call, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename ReturnType>
inline ReturnType Call(::StringW  methodName, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method Call, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename ReturnType,typename T>
inline ReturnType Call(::StringW  methodName, ::ArrayW<T,::Array<T>*>  args) ;

/// @brief Method Call, addr 0x47b6bdc, size 0x4, virtual false, abstract: false, final false
inline void Call(::System::IntPtr  methodID, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method Call, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void Call(::System::IntPtr  methodID, ::ArrayW<T,::Array<T>*>  args) ;

/// @brief Method Call, addr 0x47b6b78, size 0x4, virtual false, abstract: false, final false
inline void Call(::StringW  methodName, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method Call, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void Call(::StringW  methodName, ::ArrayW<T,::Array<T>*>  args) ;

/// @brief Method CallStatic, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename ReturnType>
inline ReturnType CallStatic(::System::IntPtr  methodID, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method CallStatic, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename ReturnType,typename T>
inline ReturnType CallStatic(::System::IntPtr  methodID, ::ArrayW<T,::Array<T>*>  args) ;

/// @brief Method CallStatic, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename ReturnType>
inline ReturnType CallStatic(::StringW  methodName, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method CallStatic, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename ReturnType,typename T>
inline ReturnType CallStatic(::StringW  methodName, ::ArrayW<T,::Array<T>*>  args) ;

/// @brief Method CallStatic, addr 0x47b6dd8, size 0x4, virtual false, abstract: false, final false
inline void CallStatic(::System::IntPtr  methodID, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method CallStatic, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void CallStatic(::System::IntPtr  methodID, ::ArrayW<T,::Array<T>*>  args) ;

/// @brief Method CallStatic, addr 0x47b6d74, size 0x4, virtual false, abstract: false, final false
inline void CallStatic(::StringW  methodName, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method CallStatic, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void CallStatic(::StringW  methodName, ::ArrayW<T,::Array<T>*>  args) ;

/// @brief Method CloneReference, addr 0x47b6fc0, size 0x14c, virtual false, abstract: false, final false
inline ::UnityEngine::AndroidJavaObject* CloneReference() ;

/// @brief Method DebugPrint, addr 0x47b7258, size 0x298, virtual false, abstract: false, final false
inline void DebugPrint(::StringW  call, ::StringW  methodName, ::StringW  signature, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method DebugPrint, addr 0x47b71d0, size 0x88, virtual false, abstract: false, final false
inline void DebugPrint(::StringW  msg) ;

/// @brief Method Dispose, addr 0x47b5fa8, size 0x6c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x47b7590, size 0x30, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x47b74f0, size 0xa0, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method FromJavaArrayDeleteLocalRef, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename ReturnType>
static inline ReturnType FromJavaArrayDeleteLocalRef(::System::IntPtr  jobject) ;

/// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename FieldType>
inline FieldType Get(::System::IntPtr  fieldID) ;

/// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename FieldType>
inline FieldType Get(::StringW  fieldName) ;

/// @brief Method GetRawClass, addr 0x47b6f88, size 0x1c, virtual false, abstract: false, final false
inline ::System::IntPtr GetRawClass() ;

/// @brief Method GetRawObject, addr 0x47b61c8, size 0x18, virtual false, abstract: false, final false
inline ::System::IntPtr GetRawObject() ;

/// @brief Method GetStatic, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename FieldType>
inline FieldType GetStatic(::System::IntPtr  fieldID) ;

/// @brief Method GetStatic, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename FieldType>
inline FieldType GetStatic(::StringW  fieldName) ;

static inline ::UnityEngine::AndroidJavaObject* New_ctor() ;

static inline ::UnityEngine::AndroidJavaObject* New_ctor(::StringW  className, ::ArrayW<::StringW,::Array<::StringW>*>  args) ;

static inline ::UnityEngine::AndroidJavaObject* New_ctor(::StringW  className, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

static inline ::UnityEngine::AndroidJavaObject* New_ctor(::StringW  className, ::ArrayW<::UnityEngine::AndroidJavaClass*,::Array<::UnityEngine::AndroidJavaClass*>*>  args) ;

static inline ::UnityEngine::AndroidJavaObject* New_ctor(::StringW  className, ::ArrayW<::UnityEngine::AndroidJavaObject*,::Array<::UnityEngine::AndroidJavaObject*>*>  args) ;

static inline ::UnityEngine::AndroidJavaObject* New_ctor(::StringW  className, ::ArrayW<::UnityEngine::AndroidJavaProxy*,::Array<::UnityEngine::AndroidJavaProxy*>*>  args) ;

static inline ::UnityEngine::AndroidJavaObject* New_ctor(::StringW  className, ::ArrayW<::UnityEngine::AndroidJavaRunnable*,::Array<::UnityEngine::AndroidJavaRunnable*>*>  args) ;

static inline ::UnityEngine::AndroidJavaObject* New_ctor(::System::IntPtr  clazz, ::System::IntPtr  constructorID, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

static inline ::UnityEngine::AndroidJavaObject* New_ctor(::System::IntPtr  jobject) ;

/// @brief Method Set, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename FieldType>
inline void Set(::System::IntPtr  fieldID, FieldType  val) ;

/// @brief Method Set, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename FieldType>
inline void Set(::StringW  fieldName, FieldType  val) ;

/// @brief Method SetStatic, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename FieldType>
inline void SetStatic(::System::IntPtr  fieldID, FieldType  val) ;

/// @brief Method SetStatic, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename FieldType>
inline void SetStatic(::StringW  fieldName, FieldType  val) ;

/// @brief Method _AndroidJavaObject, addr 0x47b651c, size 0xf0, virtual false, abstract: false, final false
inline void _AndroidJavaObject(::StringW  className, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method _AndroidJavaObject, addr 0x47b699c, size 0x1dc, virtual false, abstract: false, final false
inline void _AndroidJavaObject(::System::IntPtr  constructorID, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method _Call, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename ReturnType>
inline ReturnType _Call(::System::IntPtr  methodID, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method _Call, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename ReturnType>
inline ReturnType _Call(::StringW  methodName, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method _Call, addr 0x47b6be0, size 0x194, virtual false, abstract: false, final false
inline void _Call(::System::IntPtr  methodID, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method _Call, addr 0x47b6b7c, size 0x60, virtual false, abstract: false, final false
inline void _Call(::StringW  methodName, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method _CallStatic, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename ReturnType>
inline ReturnType _CallStatic(::System::IntPtr  methodID, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method _CallStatic, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename ReturnType>
inline ReturnType _CallStatic(::StringW  methodName, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method _CallStatic, addr 0x47b6ddc, size 0x194, virtual false, abstract: false, final false
inline void _CallStatic(::System::IntPtr  methodID, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method _CallStatic, addr 0x47b6d78, size 0x60, virtual false, abstract: false, final false
inline void _CallStatic(::StringW  methodName, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method _Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename FieldType>
inline FieldType _Get(::System::IntPtr  fieldID) ;

/// @brief Method _Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename FieldType>
inline FieldType _Get(::StringW  fieldName) ;

/// @brief Method _GetRawClass, addr 0x47b6fa4, size 0x1c, virtual false, abstract: false, final false
inline ::System::IntPtr _GetRawClass() ;

/// @brief Method _GetRawObject, addr 0x47b6f70, size 0x18, virtual false, abstract: false, final false
inline ::System::IntPtr _GetRawObject() ;

/// @brief Method _GetStatic, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename FieldType>
inline FieldType _GetStatic(::System::IntPtr  fieldID) ;

/// @brief Method _GetStatic, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename FieldType>
inline FieldType _GetStatic(::StringW  fieldName) ;

/// @brief Method _Set, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename FieldType>
inline void _Set(::System::IntPtr  fieldID, FieldType  val) ;

/// @brief Method _Set, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename FieldType>
inline void _Set(::StringW  fieldName, FieldType  val) ;

/// @brief Method _SetStatic, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename FieldType>
inline void _SetStatic(::System::IntPtr  fieldID, FieldType  val) ;

/// @brief Method _SetStatic, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename FieldType>
inline void _SetStatic(::StringW  fieldName, FieldType  val) ;

constexpr ::UnityEngine::GlobalJavaObjectRef*& __cordl_internal_get_m_jclass() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GlobalJavaObjectRef*> const& __cordl_internal_get_m_jclass() const;

constexpr ::UnityEngine::GlobalJavaObjectRef*& __cordl_internal_get_m_jobject() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GlobalJavaObjectRef*> const& __cordl_internal_get_m_jobject() const;

constexpr void __cordl_internal_set_m_jclass(::UnityEngine::GlobalJavaObjectRef*  value) ;

constexpr void __cordl_internal_set_m_jobject(::UnityEngine::GlobalJavaObjectRef*  value) ;

/// @brief Method .ctor, addr 0x47b6514, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x47b6460, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::StringW  className, ::ArrayW<::StringW,::Array<::StringW>*>  args) ;

/// @brief Method .ctor, addr 0x47b68dc, size 0x34, virtual false, abstract: false, final false
inline void _ctor(::StringW  className, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method .ctor, addr 0x47b66c0, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::StringW  className, ::ArrayW<::UnityEngine::AndroidJavaClass*,::Array<::UnityEngine::AndroidJavaClass*>*>  args) ;

/// @brief Method .ctor, addr 0x47b660c, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::StringW  className, ::ArrayW<::UnityEngine::AndroidJavaObject*,::Array<::UnityEngine::AndroidJavaObject*>*>  args) ;

/// @brief Method .ctor, addr 0x47b6774, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::StringW  className, ::ArrayW<::UnityEngine::AndroidJavaProxy*,::Array<::UnityEngine::AndroidJavaProxy*>*>  args) ;

/// @brief Method .ctor, addr 0x47b6828, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::StringW  className, ::ArrayW<::UnityEngine::AndroidJavaRunnable*,::Array<::UnityEngine::AndroidJavaRunnable*>*>  args) ;

/// @brief Method .ctor, addr 0x47b6910, size 0x8c, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  clazz, ::System::IntPtr  constructorID, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method .ctor, addr 0x47b6014, size 0xf8, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  jobject) ;

static inline bool getStaticF_enableDebugPrints() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

static inline void setStaticF_enableDebugPrints(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AndroidJavaObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AndroidJavaObject", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AndroidJavaObject(AndroidJavaObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AndroidJavaObject", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AndroidJavaObject(AndroidJavaObject const& ) = delete;

/// @brief Field m_jobject, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::GlobalJavaObjectRef*  ___m_jobject;

/// @brief Field m_jclass, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::GlobalJavaObjectRef*  ___m_jclass;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AndroidJavaObject, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::AndroidJavaObject, ___m_jobject) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AndroidJavaObject, ___m_jclass) == 0x18, "Offset mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::AndroidJavaObject);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AndroidJavaObject*, "UnityEngine", "AndroidJavaObject");
