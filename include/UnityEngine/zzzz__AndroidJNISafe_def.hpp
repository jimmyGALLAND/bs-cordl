#pragma once
// IWYU pragma private; include "UnityEngine/AndroidJNISafe.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AndroidJNISafe)
namespace System {
struct IntPtr;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace UnityEngine {
struct jvalue;
}
// Forward declare root types
namespace UnityEngine {
class AndroidJNISafe;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AndroidJNISafe);
// Type: UnityEngine::AndroidJNISafe
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::AndroidJNISafe*
class CORDL_TYPE AndroidJNISafe : public ::System::Object {
public:
// Declarations
/// @brief Method CallBooleanMethod, addr 0x47ab138, size 0x78, virtual false, abstract: false, final false
static inline bool CallBooleanMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallCharMethod, addr 0x47ab034, size 0x78, virtual false, abstract: false, final false
static inline char16_t CallCharMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallDoubleMethod, addr 0x47aaf28, size 0x84, virtual false, abstract: false, final false
static inline double_t CallDoubleMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallFloatMethod, addr 0x47aae1c, size 0x84, virtual false, abstract: false, final false
static inline float_t CallFloatMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallIntMethod, addr 0x47aac1c, size 0x78, virtual false, abstract: false, final false
static inline int32_t CallIntMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallLongMethod, addr 0x47aad1c, size 0x78, virtual false, abstract: false, final false
static inline int64_t CallLongMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallObjectMethod, addr 0x47b27bc, size 0x68, virtual false, abstract: false, final false
static inline ::System::IntPtr CallObjectMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args) ;

/// @brief Method CallObjectMethod, addr 0x47b2824, size 0x78, virtual false, abstract: false, final false
static inline ::System::IntPtr CallObjectMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallSByteMethod, addr 0x47aaa1c, size 0x78, virtual false, abstract: false, final false
static inline int8_t CallSByteMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallShortMethod, addr 0x47aab1c, size 0x78, virtual false, abstract: false, final false
static inline int16_t CallShortMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallStaticBooleanMethod, addr 0x47b1854, size 0x78, virtual false, abstract: false, final false
static inline bool CallStaticBooleanMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallStaticCharMethod, addr 0x47b156c, size 0x78, virtual false, abstract: false, final false
static inline char16_t CallStaticCharMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallStaticDoubleMethod, addr 0x47b15e4, size 0x84, virtual false, abstract: false, final false
static inline double_t CallStaticDoubleMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallStaticFloatMethod, addr 0x47b1668, size 0x84, virtual false, abstract: false, final false
static inline float_t CallStaticFloatMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallStaticIntMethod, addr 0x47b18cc, size 0x78, virtual false, abstract: false, final false
static inline int32_t CallStaticIntMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallStaticLongMethod, addr 0x47b16ec, size 0x78, virtual false, abstract: false, final false
static inline int64_t CallStaticLongMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallStaticObjectMethod, addr 0x47b1424, size 0x68, virtual false, abstract: false, final false
static inline ::System::IntPtr CallStaticObjectMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args) ;

/// @brief Method CallStaticObjectMethod, addr 0x47aa3e8, size 0x78, virtual false, abstract: false, final false
static inline ::System::IntPtr CallStaticObjectMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallStaticSByteMethod, addr 0x47b17dc, size 0x78, virtual false, abstract: false, final false
static inline int8_t CallStaticSByteMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallStaticShortMethod, addr 0x47b1764, size 0x78, virtual false, abstract: false, final false
static inline int16_t CallStaticShortMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallStaticStringMethod, addr 0x47b148c, size 0x68, virtual false, abstract: false, final false
static inline ::StringW CallStaticStringMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args) ;

/// @brief Method CallStaticStringMethod, addr 0x47b14f4, size 0x78, virtual false, abstract: false, final false
static inline ::StringW CallStaticStringMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallStaticVoidMethod, addr 0x47b1344, size 0x68, virtual false, abstract: false, final false
static inline void CallStaticVoidMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args) ;

/// @brief Method CallStaticVoidMethod, addr 0x47b13ac, size 0x78, virtual false, abstract: false, final false
static inline void CallStaticVoidMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallStringMethod, addr 0x47b289c, size 0x78, virtual false, abstract: false, final false
static inline ::StringW CallStringMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallVoidMethod, addr 0x47b2744, size 0x78, virtual false, abstract: false, final false
static inline void CallVoidMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CheckException, addr 0x47afd2c, size 0x2d4, virtual false, abstract: false, final false
static inline void CheckException() ;

/// @brief Method DeleteLocalRef, addr 0x47b0124, size 0x58, virtual false, abstract: false, final false
static inline void DeleteLocalRef(::System::IntPtr  localref) ;

/// @brief Method DeleteWeakGlobalRef, addr 0x47b00cc, size 0x58, virtual false, abstract: false, final false
static inline void DeleteWeakGlobalRef(::System::IntPtr  globalref) ;

/// @brief Method FindClass, addr 0x47aa290, size 0xa0, virtual false, abstract: false, final false
static inline ::System::IntPtr FindClass(::StringW  name) ;

/// @brief Method FromBooleanArray, addr 0x47b2d74, size 0xa0, virtual false, abstract: false, final false
static inline ::ArrayW<bool,::Array<bool>*> FromBooleanArray(::System::IntPtr  array) ;

/// @brief Method FromByteArray, addr 0x47b2c34, size 0xa0, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> FromByteArray(::System::IntPtr  array) ;

/// @brief Method FromCharArray, addr 0x47b2914, size 0xa0, virtual false, abstract: false, final false
static inline ::ArrayW<char16_t,::Array<char16_t>*> FromCharArray(::System::IntPtr  array) ;

/// @brief Method FromDoubleArray, addr 0x47b29b4, size 0xa0, virtual false, abstract: false, final false
static inline ::ArrayW<double_t,::Array<double_t>*> FromDoubleArray(::System::IntPtr  array) ;

/// @brief Method FromFloatArray, addr 0x47b2a54, size 0xa0, virtual false, abstract: false, final false
static inline ::ArrayW<float_t,::Array<float_t>*> FromFloatArray(::System::IntPtr  array) ;

/// @brief Method FromIntArray, addr 0x47b2e14, size 0xa0, virtual false, abstract: false, final false
static inline ::ArrayW<int32_t,::Array<int32_t>*> FromIntArray(::System::IntPtr  array) ;

/// @brief Method FromLongArray, addr 0x47b2af4, size 0xa0, virtual false, abstract: false, final false
static inline ::ArrayW<int64_t,::Array<int64_t>*> FromLongArray(::System::IntPtr  array) ;

/// @brief Method FromReflectedMethod, addr 0x47b042c, size 0xa0, virtual false, abstract: false, final false
static inline ::System::IntPtr FromReflectedMethod(::System::IntPtr  refMethod) ;

/// @brief Method FromSByteArray, addr 0x47b2cd4, size 0xa0, virtual false, abstract: false, final false
static inline ::ArrayW<int8_t,::Array<int8_t>*> FromSByteArray(::System::IntPtr  array) ;

/// @brief Method FromShortArray, addr 0x47b2b94, size 0xa0, virtual false, abstract: false, final false
static inline ::ArrayW<int16_t,::Array<int16_t>*> FromShortArray(::System::IntPtr  array) ;

/// @brief Method GetArrayLength, addr 0x47b345c, size 0xa0, virtual false, abstract: false, final false
static inline int32_t GetArrayLength(::System::IntPtr  array) ;

/// @brief Method GetBooleanField, addr 0x47b25f4, size 0xa8, virtual false, abstract: false, final false
static inline bool GetBooleanField(::System::IntPtr  obj, ::System::IntPtr  fieldID) ;

/// @brief Method GetCharField, addr 0x47b21ec, size 0xa8, virtual false, abstract: false, final false
static inline char16_t GetCharField(::System::IntPtr  obj, ::System::IntPtr  fieldID) ;

/// @brief Method GetDoubleField, addr 0x47b2294, size 0xb4, virtual false, abstract: false, final false
static inline double_t GetDoubleField(::System::IntPtr  obj, ::System::IntPtr  fieldID) ;

/// @brief Method GetFieldID, addr 0x47b02bc, size 0xb8, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFieldID(::System::IntPtr  clazz, ::StringW  name, ::StringW  sig) ;

/// @brief Method GetFloatField, addr 0x47b2348, size 0xb4, virtual false, abstract: false, final false
static inline float_t GetFloatField(::System::IntPtr  obj, ::System::IntPtr  fieldID) ;

/// @brief Method GetIntField, addr 0x47b269c, size 0xa8, virtual false, abstract: false, final false
static inline int32_t GetIntField(::System::IntPtr  obj, ::System::IntPtr  fieldID) ;

/// @brief Method GetLongField, addr 0x47b23fc, size 0xa8, virtual false, abstract: false, final false
static inline int64_t GetLongField(::System::IntPtr  obj, ::System::IntPtr  fieldID) ;

/// @brief Method GetMethodID, addr 0x47aa8dc, size 0xb8, virtual false, abstract: false, final false
static inline ::System::IntPtr GetMethodID(::System::IntPtr  obj, ::StringW  name, ::StringW  sig) ;

/// @brief Method GetObjectArrayElement, addr 0x47b33b4, size 0xa8, virtual false, abstract: false, final false
static inline ::System::IntPtr GetObjectArrayElement(::System::IntPtr  array, int32_t  index) ;

/// @brief Method GetObjectClass, addr 0x47aa83c, size 0xa0, virtual false, abstract: false, final false
static inline ::System::IntPtr GetObjectClass(::System::IntPtr  ptr) ;

/// @brief Method GetObjectField, addr 0x47b209c, size 0xa8, virtual false, abstract: false, final false
static inline ::System::IntPtr GetObjectField(::System::IntPtr  obj, ::System::IntPtr  fieldID) ;

/// @brief Method GetSByteField, addr 0x47b254c, size 0xa8, virtual false, abstract: false, final false
static inline int8_t GetSByteField(::System::IntPtr  obj, ::System::IntPtr  fieldID) ;

/// @brief Method GetShortField, addr 0x47b24a4, size 0xa8, virtual false, abstract: false, final false
static inline int16_t GetShortField(::System::IntPtr  obj, ::System::IntPtr  fieldID) ;

/// @brief Method GetStaticBooleanField, addr 0x47b11f4, size 0xa8, virtual false, abstract: false, final false
static inline bool GetStaticBooleanField(::System::IntPtr  clazz, ::System::IntPtr  fieldID) ;

/// @brief Method GetStaticCharField, addr 0x47b0dec, size 0xa8, virtual false, abstract: false, final false
static inline char16_t GetStaticCharField(::System::IntPtr  clazz, ::System::IntPtr  fieldID) ;

/// @brief Method GetStaticDoubleField, addr 0x47b0e94, size 0xb4, virtual false, abstract: false, final false
static inline double_t GetStaticDoubleField(::System::IntPtr  clazz, ::System::IntPtr  fieldID) ;

/// @brief Method GetStaticFieldID, addr 0x47b0374, size 0xb8, virtual false, abstract: false, final false
static inline ::System::IntPtr GetStaticFieldID(::System::IntPtr  clazz, ::StringW  name, ::StringW  sig) ;

/// @brief Method GetStaticFloatField, addr 0x47b0f48, size 0xb4, virtual false, abstract: false, final false
static inline float_t GetStaticFloatField(::System::IntPtr  clazz, ::System::IntPtr  fieldID) ;

/// @brief Method GetStaticIntField, addr 0x47b129c, size 0xa8, virtual false, abstract: false, final false
static inline int32_t GetStaticIntField(::System::IntPtr  clazz, ::System::IntPtr  fieldID) ;

/// @brief Method GetStaticLongField, addr 0x47b0ffc, size 0xa8, virtual false, abstract: false, final false
static inline int64_t GetStaticLongField(::System::IntPtr  clazz, ::System::IntPtr  fieldID) ;

/// @brief Method GetStaticMethodID, addr 0x47aa330, size 0xb8, virtual false, abstract: false, final false
static inline ::System::IntPtr GetStaticMethodID(::System::IntPtr  clazz, ::StringW  name, ::StringW  sig) ;

/// @brief Method GetStaticObjectField, addr 0x47b0c9c, size 0xa8, virtual false, abstract: false, final false
static inline ::System::IntPtr GetStaticObjectField(::System::IntPtr  clazz, ::System::IntPtr  fieldID) ;

/// @brief Method GetStaticSByteField, addr 0x47b114c, size 0xa8, virtual false, abstract: false, final false
static inline int8_t GetStaticSByteField(::System::IntPtr  clazz, ::System::IntPtr  fieldID) ;

/// @brief Method GetStaticShortField, addr 0x47b10a4, size 0xa8, virtual false, abstract: false, final false
static inline int16_t GetStaticShortField(::System::IntPtr  clazz, ::System::IntPtr  fieldID) ;

/// @brief Method GetStaticStringField, addr 0x47b0d44, size 0xa8, virtual false, abstract: false, final false
static inline ::StringW GetStaticStringField(::System::IntPtr  clazz, ::System::IntPtr  fieldID) ;

/// @brief Method GetStringChars, addr 0x47b021c, size 0xa0, virtual false, abstract: false, final false
static inline ::StringW GetStringChars(::System::IntPtr  str) ;

/// @brief Method GetStringField, addr 0x47b2144, size 0xa8, virtual false, abstract: false, final false
static inline ::StringW GetStringField(::System::IntPtr  obj, ::System::IntPtr  fieldID) ;

/// @brief Method NewObject, addr 0x47b04cc, size 0x78, virtual false, abstract: false, final false
static inline ::System::IntPtr NewObject(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method NewString, addr 0x47b017c, size 0xa0, virtual false, abstract: false, final false
static inline ::System::IntPtr NewString(::StringW  chars) ;

/// @brief Method QueueDeleteGlobalRef, addr 0x47b0074, size 0x58, virtual false, abstract: false, final false
static inline void QueueDeleteGlobalRef(::System::IntPtr  globalref) ;

/// @brief Method SetBooleanField, addr 0x47b1f24, size 0xbc, virtual false, abstract: false, final false
static inline void SetBooleanField(::System::IntPtr  obj, ::System::IntPtr  fieldID, bool  val) ;

/// @brief Method SetCharField, addr 0x47b1abc, size 0xbc, virtual false, abstract: false, final false
static inline void SetCharField(::System::IntPtr  obj, ::System::IntPtr  fieldID, char16_t  val) ;

/// @brief Method SetDoubleField, addr 0x47b1b78, size 0xbc, virtual false, abstract: false, final false
static inline void SetDoubleField(::System::IntPtr  obj, ::System::IntPtr  fieldID, double_t  val) ;

/// @brief Method SetFloatField, addr 0x47b1c34, size 0xbc, virtual false, abstract: false, final false
static inline void SetFloatField(::System::IntPtr  obj, ::System::IntPtr  fieldID, float_t  val) ;

/// @brief Method SetIntField, addr 0x47b1fe0, size 0xbc, virtual false, abstract: false, final false
static inline void SetIntField(::System::IntPtr  obj, ::System::IntPtr  fieldID, int32_t  val) ;

/// @brief Method SetLongField, addr 0x47b1cf0, size 0xbc, virtual false, abstract: false, final false
static inline void SetLongField(::System::IntPtr  obj, ::System::IntPtr  fieldID, int64_t  val) ;

/// @brief Method SetObjectField, addr 0x47b1944, size 0xbc, virtual false, abstract: false, final false
static inline void SetObjectField(::System::IntPtr  obj, ::System::IntPtr  fieldID, ::System::IntPtr  val) ;

/// @brief Method SetSByteField, addr 0x47b1e68, size 0xbc, virtual false, abstract: false, final false
static inline void SetSByteField(::System::IntPtr  obj, ::System::IntPtr  fieldID, int8_t  val) ;

/// @brief Method SetShortField, addr 0x47b1dac, size 0xbc, virtual false, abstract: false, final false
static inline void SetShortField(::System::IntPtr  obj, ::System::IntPtr  fieldID, int16_t  val) ;

/// @brief Method SetStaticBooleanField, addr 0x47b0b24, size 0xbc, virtual false, abstract: false, final false
static inline void SetStaticBooleanField(::System::IntPtr  clazz, ::System::IntPtr  fieldID, bool  val) ;

/// @brief Method SetStaticCharField, addr 0x47b06bc, size 0xbc, virtual false, abstract: false, final false
static inline void SetStaticCharField(::System::IntPtr  clazz, ::System::IntPtr  fieldID, char16_t  val) ;

/// @brief Method SetStaticDoubleField, addr 0x47b0778, size 0xbc, virtual false, abstract: false, final false
static inline void SetStaticDoubleField(::System::IntPtr  clazz, ::System::IntPtr  fieldID, double_t  val) ;

/// @brief Method SetStaticFloatField, addr 0x47b0834, size 0xbc, virtual false, abstract: false, final false
static inline void SetStaticFloatField(::System::IntPtr  clazz, ::System::IntPtr  fieldID, float_t  val) ;

/// @brief Method SetStaticIntField, addr 0x47b0be0, size 0xbc, virtual false, abstract: false, final false
static inline void SetStaticIntField(::System::IntPtr  clazz, ::System::IntPtr  fieldID, int32_t  val) ;

/// @brief Method SetStaticLongField, addr 0x47b08f0, size 0xbc, virtual false, abstract: false, final false
static inline void SetStaticLongField(::System::IntPtr  clazz, ::System::IntPtr  fieldID, int64_t  val) ;

/// @brief Method SetStaticObjectField, addr 0x47b0544, size 0xbc, virtual false, abstract: false, final false
static inline void SetStaticObjectField(::System::IntPtr  clazz, ::System::IntPtr  fieldID, ::System::IntPtr  val) ;

/// @brief Method SetStaticSByteField, addr 0x47b0a68, size 0xbc, virtual false, abstract: false, final false
static inline void SetStaticSByteField(::System::IntPtr  clazz, ::System::IntPtr  fieldID, int8_t  val) ;

/// @brief Method SetStaticShortField, addr 0x47b09ac, size 0xbc, virtual false, abstract: false, final false
static inline void SetStaticShortField(::System::IntPtr  clazz, ::System::IntPtr  fieldID, int16_t  val) ;

/// @brief Method SetStaticStringField, addr 0x47b0600, size 0xbc, virtual false, abstract: false, final false
static inline void SetStaticStringField(::System::IntPtr  clazz, ::System::IntPtr  fieldID, ::StringW  val) ;

/// @brief Method SetStringField, addr 0x47b1a00, size 0xbc, virtual false, abstract: false, final false
static inline void SetStringField(::System::IntPtr  obj, ::System::IntPtr  fieldID, ::StringW  val) ;

/// @brief Method ToBooleanArray, addr 0x47b329c, size 0xa0, virtual false, abstract: false, final false
static inline ::System::IntPtr ToBooleanArray(::ArrayW<bool,::Array<bool>*>  array) ;

/// @brief Method ToByteArray, addr 0x47b3184, size 0xa0, virtual false, abstract: false, final false
static inline ::System::IntPtr ToByteArray(::ArrayW<uint8_t,::Array<uint8_t>*>  array) ;

/// @brief Method ToCharArray, addr 0x47b2f2c, size 0x78, virtual false, abstract: false, final false
static inline ::System::IntPtr ToCharArray(::ArrayW<char16_t,::Array<char16_t>*>  array) ;

/// @brief Method ToDoubleArray, addr 0x47b2fa4, size 0x78, virtual false, abstract: false, final false
static inline ::System::IntPtr ToDoubleArray(::ArrayW<double_t,::Array<double_t>*>  array) ;

/// @brief Method ToFloatArray, addr 0x47b301c, size 0x78, virtual false, abstract: false, final false
static inline ::System::IntPtr ToFloatArray(::ArrayW<float_t,::Array<float_t>*>  array) ;

/// @brief Method ToIntArray, addr 0x47b333c, size 0x78, virtual false, abstract: false, final false
static inline ::System::IntPtr ToIntArray(::ArrayW<int32_t,::Array<int32_t>*>  array) ;

/// @brief Method ToLongArray, addr 0x47b3094, size 0x78, virtual false, abstract: false, final false
static inline ::System::IntPtr ToLongArray(::ArrayW<int64_t,::Array<int64_t>*>  array) ;

/// @brief Method ToObjectArray, addr 0x47b2eb4, size 0x78, virtual false, abstract: false, final false
static inline ::System::IntPtr ToObjectArray(::ArrayW<::System::IntPtr,::Array<::System::IntPtr>*>  array, ::System::IntPtr  type) ;

/// @brief Method ToSByteArray, addr 0x47b3224, size 0x78, virtual false, abstract: false, final false
static inline ::System::IntPtr ToSByteArray(::ArrayW<int8_t,::Array<int8_t>*>  array) ;

/// @brief Method ToShortArray, addr 0x47b310c, size 0x78, virtual false, abstract: false, final false
static inline ::System::IntPtr ToShortArray(::ArrayW<int16_t,::Array<int16_t>*>  array) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AndroidJNISafe() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AndroidJNISafe", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AndroidJNISafe(AndroidJNISafe && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AndroidJNISafe", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AndroidJNISafe(AndroidJNISafe const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AndroidJNISafe, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::AndroidJNISafe);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AndroidJNISafe*, "UnityEngine", "AndroidJNISafe");
