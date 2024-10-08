#pragma once
// IWYU pragma private; include "OVR/OpenVR/IVRSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IVRSettings)
namespace OVR::OpenVR {
struct EVRSettingsError;
}
namespace OVR::OpenVR {
class __IVRSettings___GetBool;
}
namespace OVR::OpenVR {
class __IVRSettings___GetFloat;
}
namespace OVR::OpenVR {
class __IVRSettings___GetInt32;
}
namespace OVR::OpenVR {
class __IVRSettings___GetSettingsErrorNameFromEnum;
}
namespace OVR::OpenVR {
class __IVRSettings___GetString;
}
namespace OVR::OpenVR {
class __IVRSettings___RemoveKeyInSection;
}
namespace OVR::OpenVR {
class __IVRSettings___RemoveSection;
}
namespace OVR::OpenVR {
class __IVRSettings___SetBool;
}
namespace OVR::OpenVR {
class __IVRSettings___SetFloat;
}
namespace OVR::OpenVR {
class __IVRSettings___SetInt32;
}
namespace OVR::OpenVR {
class __IVRSettings___SetString;
}
namespace OVR::OpenVR {
class __IVRSettings___Sync;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace OVR::OpenVR {
class __IVRSettings___GetBool;
}
namespace OVR::OpenVR {
class __IVRSettings___GetFloat;
}
namespace OVR::OpenVR {
class __IVRSettings___GetInt32;
}
namespace OVR::OpenVR {
class __IVRSettings___GetSettingsErrorNameFromEnum;
}
namespace OVR::OpenVR {
class __IVRSettings___GetString;
}
namespace OVR::OpenVR {
class __IVRSettings___RemoveKeyInSection;
}
namespace OVR::OpenVR {
class __IVRSettings___RemoveSection;
}
namespace OVR::OpenVR {
class __IVRSettings___SetBool;
}
namespace OVR::OpenVR {
class __IVRSettings___SetFloat;
}
namespace OVR::OpenVR {
class __IVRSettings___SetInt32;
}
namespace OVR::OpenVR {
class __IVRSettings___SetString;
}
namespace OVR::OpenVR {
class __IVRSettings___Sync;
}
namespace OVR::OpenVR {
struct IVRSettings;
}
// Write type traits
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSettings___GetBool);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSettings___GetFloat);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSettings___GetInt32);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSettings___GetSettingsErrorNameFromEnum);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSettings___GetString);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSettings___RemoveKeyInSection);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSettings___RemoveSection);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSettings___SetBool);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSettings___SetFloat);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSettings___SetInt32);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSettings___SetString);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSettings___Sync);
MARK_VAL_T(::OVR::OpenVR::IVRSettings);
// Type: ::_GetSettingsErrorNameFromEnum
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRSettings::_GetSettingsErrorNameFromEnum*
class CORDL_TYPE __IVRSettings___GetSettingsErrorNameFromEnum : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x3fdb4a0, size 0x84, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::EVRSettingsError  eError, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x3fdb524, size 0x28, virtual true, abstract: false, final false
inline ::System::IntPtr EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x3fdb48c, size 0x14, virtual true, abstract: false, final false
inline ::System::IntPtr Invoke(::OVR::OpenVR::EVRSettingsError  eError) ;

static inline ::OVR::OpenVR::__IVRSettings___GetSettingsErrorNameFromEnum* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x3fdb400, size 0x8c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __IVRSettings___GetSettingsErrorNameFromEnum() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__IVRSettings___GetSettingsErrorNameFromEnum", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRSettings___GetSettingsErrorNameFromEnum(__IVRSettings___GetSettingsErrorNameFromEnum && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRSettings___GetSettingsErrorNameFromEnum", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRSettings___GetSettingsErrorNameFromEnum(__IVRSettings___GetSettingsErrorNameFromEnum const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSettings___GetSettingsErrorNameFromEnum, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_Sync
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRSettings::_Sync*
class CORDL_TYPE __IVRSettings___Sync : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x3fdb5f0, size 0xc0, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(bool  bForce, ByRef<::OVR::OpenVR::EVRSettingsError>  peError, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x3fdb6b0, size 0x2c, virtual true, abstract: false, final false
inline bool EndInvoke(ByRef<::OVR::OpenVR::EVRSettingsError>  peError, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x3fdb5d8, size 0x18, virtual true, abstract: false, final false
inline bool Invoke(bool  bForce, ByRef<::OVR::OpenVR::EVRSettingsError>  peError) ;

static inline ::OVR::OpenVR::__IVRSettings___Sync* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x3fdb54c, size 0x8c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __IVRSettings___Sync() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__IVRSettings___Sync", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRSettings___Sync(__IVRSettings___Sync && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRSettings___Sync", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRSettings___Sync(__IVRSettings___Sync const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSettings___Sync, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_SetBool
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRSettings::_SetBool*
class CORDL_TYPE __IVRSettings___SetBool : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x3fdb794, size 0xd4, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  pchSection, ::StringW  pchSettingsKey, bool  bValue, ByRef<::OVR::OpenVR::EVRSettingsError>  peError, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x3fdb868, size 0x1c, virtual true, abstract: false, final false
inline void EndInvoke(ByRef<::OVR::OpenVR::EVRSettingsError>  peError, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x3fdb77c, size 0x18, virtual true, abstract: false, final false
inline void Invoke(::StringW  pchSection, ::StringW  pchSettingsKey, bool  bValue, ByRef<::OVR::OpenVR::EVRSettingsError>  peError) ;

static inline ::OVR::OpenVR::__IVRSettings___SetBool* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x3fdb6dc, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __IVRSettings___SetBool() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__IVRSettings___SetBool", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRSettings___SetBool(__IVRSettings___SetBool && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRSettings___SetBool", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRSettings___SetBool(__IVRSettings___SetBool const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSettings___SetBool, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_SetInt32
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRSettings::_SetInt32*
class CORDL_TYPE __IVRSettings___SetInt32 : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x3fdb938, size 0xd0, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  pchSection, ::StringW  pchSettingsKey, int32_t  nValue, ByRef<::OVR::OpenVR::EVRSettingsError>  peError, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x3fdba08, size 0x1c, virtual true, abstract: false, final false
inline void EndInvoke(ByRef<::OVR::OpenVR::EVRSettingsError>  peError, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x3fdb924, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::StringW  pchSection, ::StringW  pchSettingsKey, int32_t  nValue, ByRef<::OVR::OpenVR::EVRSettingsError>  peError) ;

static inline ::OVR::OpenVR::__IVRSettings___SetInt32* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x3fdb884, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __IVRSettings___SetInt32() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__IVRSettings___SetInt32", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRSettings___SetInt32(__IVRSettings___SetInt32 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRSettings___SetInt32", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRSettings___SetInt32(__IVRSettings___SetInt32 const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSettings___SetInt32, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_SetFloat
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRSettings::_SetFloat*
class CORDL_TYPE __IVRSettings___SetFloat : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x3fdbad8, size 0xd0, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  pchSection, ::StringW  pchSettingsKey, float_t  flValue, ByRef<::OVR::OpenVR::EVRSettingsError>  peError, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x3fdbba8, size 0x1c, virtual true, abstract: false, final false
inline void EndInvoke(ByRef<::OVR::OpenVR::EVRSettingsError>  peError, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x3fdbac4, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::StringW  pchSection, ::StringW  pchSettingsKey, float_t  flValue, ByRef<::OVR::OpenVR::EVRSettingsError>  peError) ;

static inline ::OVR::OpenVR::__IVRSettings___SetFloat* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x3fdba24, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __IVRSettings___SetFloat() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__IVRSettings___SetFloat", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRSettings___SetFloat(__IVRSettings___SetFloat && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRSettings___SetFloat", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRSettings___SetFloat(__IVRSettings___SetFloat const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSettings___SetFloat, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_SetString
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRSettings::_SetString*
class CORDL_TYPE __IVRSettings___SetString : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x3fdbc78, size 0xa8, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  pchSection, ::StringW  pchSettingsKey, ::StringW  pchValue, ByRef<::OVR::OpenVR::EVRSettingsError>  peError, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x3fdbd20, size 0x1c, virtual true, abstract: false, final false
inline void EndInvoke(ByRef<::OVR::OpenVR::EVRSettingsError>  peError, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x3fdbc64, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::StringW  pchSection, ::StringW  pchSettingsKey, ::StringW  pchValue, ByRef<::OVR::OpenVR::EVRSettingsError>  peError) ;

static inline ::OVR::OpenVR::__IVRSettings___SetString* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x3fdbbc4, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __IVRSettings___SetString() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__IVRSettings___SetString", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRSettings___SetString(__IVRSettings___SetString && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRSettings___SetString", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRSettings___SetString(__IVRSettings___SetString const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSettings___SetString, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_GetBool
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRSettings::_GetBool*
class CORDL_TYPE __IVRSettings___GetBool : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x3fdbdf0, size 0xa0, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  pchSection, ::StringW  pchSettingsKey, ByRef<::OVR::OpenVR::EVRSettingsError>  peError, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x3fdbe90, size 0x2c, virtual true, abstract: false, final false
inline bool EndInvoke(ByRef<::OVR::OpenVR::EVRSettingsError>  peError, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x3fdbddc, size 0x14, virtual true, abstract: false, final false
inline bool Invoke(::StringW  pchSection, ::StringW  pchSettingsKey, ByRef<::OVR::OpenVR::EVRSettingsError>  peError) ;

static inline ::OVR::OpenVR::__IVRSettings___GetBool* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x3fdbd3c, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __IVRSettings___GetBool() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__IVRSettings___GetBool", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRSettings___GetBool(__IVRSettings___GetBool && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRSettings___GetBool", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRSettings___GetBool(__IVRSettings___GetBool const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSettings___GetBool, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_GetInt32
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRSettings::_GetInt32*
class CORDL_TYPE __IVRSettings___GetInt32 : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x3fdbf70, size 0xa0, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  pchSection, ::StringW  pchSettingsKey, ByRef<::OVR::OpenVR::EVRSettingsError>  peError, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x3fdc010, size 0x2c, virtual true, abstract: false, final false
inline int32_t EndInvoke(ByRef<::OVR::OpenVR::EVRSettingsError>  peError, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x3fdbf5c, size 0x14, virtual true, abstract: false, final false
inline int32_t Invoke(::StringW  pchSection, ::StringW  pchSettingsKey, ByRef<::OVR::OpenVR::EVRSettingsError>  peError) ;

static inline ::OVR::OpenVR::__IVRSettings___GetInt32* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x3fdbebc, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __IVRSettings___GetInt32() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__IVRSettings___GetInt32", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRSettings___GetInt32(__IVRSettings___GetInt32 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRSettings___GetInt32", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRSettings___GetInt32(__IVRSettings___GetInt32 const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSettings___GetInt32, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_GetFloat
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRSettings::_GetFloat*
class CORDL_TYPE __IVRSettings___GetFloat : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x3fdc0f0, size 0xa0, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  pchSection, ::StringW  pchSettingsKey, ByRef<::OVR::OpenVR::EVRSettingsError>  peError, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x3fdc190, size 0x2c, virtual true, abstract: false, final false
inline float_t EndInvoke(ByRef<::OVR::OpenVR::EVRSettingsError>  peError, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x3fdc0dc, size 0x14, virtual true, abstract: false, final false
inline float_t Invoke(::StringW  pchSection, ::StringW  pchSettingsKey, ByRef<::OVR::OpenVR::EVRSettingsError>  peError) ;

static inline ::OVR::OpenVR::__IVRSettings___GetFloat* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x3fdc03c, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __IVRSettings___GetFloat() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__IVRSettings___GetFloat", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRSettings___GetFloat(__IVRSettings___GetFloat && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRSettings___GetFloat", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRSettings___GetFloat(__IVRSettings___GetFloat const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSettings___GetFloat, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_GetString
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRSettings::_GetString*
class CORDL_TYPE __IVRSettings___GetString : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x3fdc270, size 0xdc, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  pchSection, ::StringW  pchSettingsKey, ::System::Text::StringBuilder*  pchValue, uint32_t  unValueLen, ByRef<::OVR::OpenVR::EVRSettingsError>  peError, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x3fdc34c, size 0x1c, virtual true, abstract: false, final false
inline void EndInvoke(ByRef<::OVR::OpenVR::EVRSettingsError>  peError, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x3fdc25c, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::StringW  pchSection, ::StringW  pchSettingsKey, ::System::Text::StringBuilder*  pchValue, uint32_t  unValueLen, ByRef<::OVR::OpenVR::EVRSettingsError>  peError) ;

static inline ::OVR::OpenVR::__IVRSettings___GetString* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x3fdc1bc, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __IVRSettings___GetString() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__IVRSettings___GetString", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRSettings___GetString(__IVRSettings___GetString && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRSettings___GetString", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRSettings___GetString(__IVRSettings___GetString const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSettings___GetString, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_RemoveSection
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRSettings::_RemoveSection*
class CORDL_TYPE __IVRSettings___RemoveSection : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x3fdc41c, size 0x94, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  pchSection, ByRef<::OVR::OpenVR::EVRSettingsError>  peError, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x3fdc4b0, size 0x1c, virtual true, abstract: false, final false
inline void EndInvoke(ByRef<::OVR::OpenVR::EVRSettingsError>  peError, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x3fdc408, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::StringW  pchSection, ByRef<::OVR::OpenVR::EVRSettingsError>  peError) ;

static inline ::OVR::OpenVR::__IVRSettings___RemoveSection* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x3fdc368, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __IVRSettings___RemoveSection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__IVRSettings___RemoveSection", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRSettings___RemoveSection(__IVRSettings___RemoveSection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRSettings___RemoveSection", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRSettings___RemoveSection(__IVRSettings___RemoveSection const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSettings___RemoveSection, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_RemoveKeyInSection
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRSettings::_RemoveKeyInSection*
class CORDL_TYPE __IVRSettings___RemoveKeyInSection : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x3fdc580, size 0xa0, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  pchSection, ::StringW  pchSettingsKey, ByRef<::OVR::OpenVR::EVRSettingsError>  peError, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x3fdc620, size 0x1c, virtual true, abstract: false, final false
inline void EndInvoke(ByRef<::OVR::OpenVR::EVRSettingsError>  peError, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x3fdc56c, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::StringW  pchSection, ::StringW  pchSettingsKey, ByRef<::OVR::OpenVR::EVRSettingsError>  peError) ;

static inline ::OVR::OpenVR::__IVRSettings___RemoveKeyInSection* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x3fdc4cc, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __IVRSettings___RemoveKeyInSection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__IVRSettings___RemoveKeyInSection", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRSettings___RemoveKeyInSection(__IVRSettings___RemoveKeyInSection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRSettings___RemoveKeyInSection", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRSettings___RemoveKeyInSection(__IVRSettings___RemoveKeyInSection const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSettings___RemoveKeyInSection, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: OVR.OpenVR::IVRSettings
// SizeInfo { instance_size: 96, native_size: 96, calculated_instance_size: 96, calculated_native_size: 112, minimum_alignment: 8, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// CS Name: ::OVR.OpenVR::IVRSettings
struct CORDL_TYPE IVRSettings {
public:
// Declarations
using _GetBool = ::OVR::OpenVR::__IVRSettings___GetBool;

using _GetFloat = ::OVR::OpenVR::__IVRSettings___GetFloat;

using _GetInt32 = ::OVR::OpenVR::__IVRSettings___GetInt32;

using _GetSettingsErrorNameFromEnum = ::OVR::OpenVR::__IVRSettings___GetSettingsErrorNameFromEnum;

using _GetString = ::OVR::OpenVR::__IVRSettings___GetString;

using _RemoveKeyInSection = ::OVR::OpenVR::__IVRSettings___RemoveKeyInSection;

using _RemoveSection = ::OVR::OpenVR::__IVRSettings___RemoveSection;

using _SetBool = ::OVR::OpenVR::__IVRSettings___SetBool;

using _SetFloat = ::OVR::OpenVR::__IVRSettings___SetFloat;

using _SetInt32 = ::OVR::OpenVR::__IVRSettings___SetInt32;

using _SetString = ::OVR::OpenVR::__IVRSettings___SetString;

using _Sync = ::OVR::OpenVR::__IVRSettings___Sync;

// Ctor Parameters []
// @brief default ctor
constexpr IVRSettings() ;

// Ctor Parameters [CppParam { name: "GetSettingsErrorNameFromEnum", ty: "::OVR::OpenVR::__IVRSettings___GetSettingsErrorNameFromEnum*", modifiers: "", def_value: None }, CppParam { name: "Sync", ty: "::OVR::OpenVR::__IVRSettings___Sync*", modifiers: "", def_value: None }, CppParam { name: "SetBool", ty: "::OVR::OpenVR::__IVRSettings___SetBool*", modifiers: "", def_value: None }, CppParam { name: "SetInt32", ty: "::OVR::OpenVR::__IVRSettings___SetInt32*", modifiers: "", def_value: None }, CppParam { name: "SetFloat", ty: "::OVR::OpenVR::__IVRSettings___SetFloat*", modifiers: "", def_value: None }, CppParam { name: "SetString", ty: "::OVR::OpenVR::__IVRSettings___SetString*", modifiers: "", def_value: None }, CppParam { name: "GetBool", ty: "::OVR::OpenVR::__IVRSettings___GetBool*", modifiers: "", def_value: None }, CppParam { name: "GetInt32", ty: "::OVR::OpenVR::__IVRSettings___GetInt32*", modifiers: "", def_value: None }, CppParam { name: "GetFloat", ty: "::OVR::OpenVR::__IVRSettings___GetFloat*", modifiers: "", def_value: None }, CppParam { name: "GetString", ty: "::OVR::OpenVR::__IVRSettings___GetString*", modifiers: "", def_value: None }, CppParam { name: "RemoveSection", ty: "::OVR::OpenVR::__IVRSettings___RemoveSection*", modifiers: "", def_value: None }, CppParam { name: "RemoveKeyInSection", ty: "::OVR::OpenVR::__IVRSettings___RemoveKeyInSection*", modifiers: "", def_value: None }]
constexpr IVRSettings(::OVR::OpenVR::__IVRSettings___GetSettingsErrorNameFromEnum*  GetSettingsErrorNameFromEnum, ::OVR::OpenVR::__IVRSettings___Sync*  Sync, ::OVR::OpenVR::__IVRSettings___SetBool*  SetBool, ::OVR::OpenVR::__IVRSettings___SetInt32*  SetInt32, ::OVR::OpenVR::__IVRSettings___SetFloat*  SetFloat, ::OVR::OpenVR::__IVRSettings___SetString*  SetString, ::OVR::OpenVR::__IVRSettings___GetBool*  GetBool, ::OVR::OpenVR::__IVRSettings___GetInt32*  GetInt32, ::OVR::OpenVR::__IVRSettings___GetFloat*  GetFloat, ::OVR::OpenVR::__IVRSettings___GetString*  GetString, ::OVR::OpenVR::__IVRSettings___RemoveSection*  RemoveSection, ::OVR::OpenVR::__IVRSettings___RemoveKeyInSection*  RemoveKeyInSection) noexcept;

/// @brief Field GetSettingsErrorNameFromEnum, offset: 0x0, size: 0x8, def value: None
 ::OVR::OpenVR::__IVRSettings___GetSettingsErrorNameFromEnum*  GetSettingsErrorNameFromEnum;

/// @brief Field Sync, offset: 0x8, size: 0x8, def value: None
 ::OVR::OpenVR::__IVRSettings___Sync*  Sync;

/// @brief Field SetBool, offset: 0x10, size: 0x8, def value: None
 ::OVR::OpenVR::__IVRSettings___SetBool*  SetBool;

/// @brief Field SetInt32, offset: 0x18, size: 0x8, def value: None
 ::OVR::OpenVR::__IVRSettings___SetInt32*  SetInt32;

/// @brief Field SetFloat, offset: 0x20, size: 0x8, def value: None
 ::OVR::OpenVR::__IVRSettings___SetFloat*  SetFloat;

/// @brief Field SetString, offset: 0x28, size: 0x8, def value: None
 ::OVR::OpenVR::__IVRSettings___SetString*  SetString;

/// @brief Field GetBool, offset: 0x30, size: 0x8, def value: None
 ::OVR::OpenVR::__IVRSettings___GetBool*  GetBool;

/// @brief Field GetInt32, offset: 0x38, size: 0x8, def value: None
 ::OVR::OpenVR::__IVRSettings___GetInt32*  GetInt32;

/// @brief Field GetFloat, offset: 0x40, size: 0x8, def value: None
 ::OVR::OpenVR::__IVRSettings___GetFloat*  GetFloat;

/// @brief Field GetString, offset: 0x48, size: 0x8, def value: None
 ::OVR::OpenVR::__IVRSettings___GetString*  GetString;

/// @brief Field RemoveSection, offset: 0x50, size: 0x8, def value: None
 ::OVR::OpenVR::__IVRSettings___RemoveSection*  RemoveSection;

/// @brief Field RemoveKeyInSection, offset: 0x58, size: 0x8, def value: None
 ::OVR::OpenVR::__IVRSettings___RemoveKeyInSection*  RemoveKeyInSection;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRSettings, 0x60>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSettings, GetSettingsErrorNameFromEnum) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSettings, Sync) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSettings, SetBool) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSettings, SetInt32) == 0x18, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSettings, SetFloat) == 0x20, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSettings, SetString) == 0x28, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSettings, GetBool) == 0x30, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSettings, GetInt32) == 0x38, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSettings, GetFloat) == 0x40, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSettings, GetString) == 0x48, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSettings, RemoveSection) == 0x50, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSettings, RemoveKeyInSection) == 0x58, "Offset mismatch!");

} // namespace end def OVR::OpenVR
NEED_NO_BOX(::OVR::OpenVR::__IVRSettings___GetBool);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSettings___GetBool*, "OVR.OpenVR", "IVRSettings/_GetBool");
NEED_NO_BOX(::OVR::OpenVR::__IVRSettings___GetFloat);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSettings___GetFloat*, "OVR.OpenVR", "IVRSettings/_GetFloat");
NEED_NO_BOX(::OVR::OpenVR::__IVRSettings___GetInt32);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSettings___GetInt32*, "OVR.OpenVR", "IVRSettings/_GetInt32");
NEED_NO_BOX(::OVR::OpenVR::__IVRSettings___GetSettingsErrorNameFromEnum);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSettings___GetSettingsErrorNameFromEnum*, "OVR.OpenVR", "IVRSettings/_GetSettingsErrorNameFromEnum");
NEED_NO_BOX(::OVR::OpenVR::__IVRSettings___GetString);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSettings___GetString*, "OVR.OpenVR", "IVRSettings/_GetString");
NEED_NO_BOX(::OVR::OpenVR::__IVRSettings___RemoveKeyInSection);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSettings___RemoveKeyInSection*, "OVR.OpenVR", "IVRSettings/_RemoveKeyInSection");
NEED_NO_BOX(::OVR::OpenVR::__IVRSettings___RemoveSection);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSettings___RemoveSection*, "OVR.OpenVR", "IVRSettings/_RemoveSection");
NEED_NO_BOX(::OVR::OpenVR::__IVRSettings___SetBool);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSettings___SetBool*, "OVR.OpenVR", "IVRSettings/_SetBool");
NEED_NO_BOX(::OVR::OpenVR::__IVRSettings___SetFloat);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSettings___SetFloat*, "OVR.OpenVR", "IVRSettings/_SetFloat");
NEED_NO_BOX(::OVR::OpenVR::__IVRSettings___SetInt32);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSettings___SetInt32*, "OVR.OpenVR", "IVRSettings/_SetInt32");
NEED_NO_BOX(::OVR::OpenVR::__IVRSettings___SetString);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSettings___SetString*, "OVR.OpenVR", "IVRSettings/_SetString");
NEED_NO_BOX(::OVR::OpenVR::__IVRSettings___Sync);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSettings___Sync*, "OVR.OpenVR", "IVRSettings/_Sync");
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSettings, "OVR.OpenVR", "IVRSettings");
