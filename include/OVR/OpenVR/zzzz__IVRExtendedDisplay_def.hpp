#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IVRExtendedDisplay)
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
namespace OVR::OpenVR {
struct EVREye;
}
namespace OVR::OpenVR {
class __IVRExtendedDisplay___GetDXGIOutputInfo;
}
namespace OVR::OpenVR {
class __IVRExtendedDisplay___GetWindowBounds;
}
namespace OVR::OpenVR {
class __IVRExtendedDisplay___GetEyeOutputViewport;
}
// Forward declare root types
namespace OVR::OpenVR {
class __IVRExtendedDisplay___GetDXGIOutputInfo;
}
namespace OVR::OpenVR {
class __IVRExtendedDisplay___GetEyeOutputViewport;
}
namespace OVR::OpenVR {
class __IVRExtendedDisplay___GetWindowBounds;
}
namespace OVR::OpenVR {
struct IVRExtendedDisplay;
}
// Write type traits
MARK_REF_PTR_T(::OVR::OpenVR::__IVRExtendedDisplay___GetDXGIOutputInfo);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRExtendedDisplay___GetEyeOutputViewport);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRExtendedDisplay___GetWindowBounds);
MARK_VAL_T(::OVR::OpenVR::IVRExtendedDisplay);
// Type: ::_GetWindowBounds
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8265))
// CS Name: ::IVRExtendedDisplay::_GetWindowBounds*
class CORDL_TYPE __IVRExtendedDisplay___GetWindowBounds : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRExtendedDisplay___GetWindowBounds* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x27d4cc4 size 0xd8 virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x27d4d9c size 0x14 virtual true final false
  inline void Invoke(ByRef<int32_t> pnX, ByRef<int32_t> pnY, ByRef<uint32_t> pnWidth, ByRef<uint32_t> pnHeight);

  /// @brief Method BeginInvoke addr 0x27d4db0 size 0xf8 virtual true final false
  inline ::System::IAsyncResult* BeginInvoke(ByRef<int32_t> pnX, ByRef<int32_t> pnY, ByRef<uint32_t> pnWidth, ByRef<uint32_t> pnHeight, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke addr 0x27d4ea8 size 0x28 virtual true final false
  inline void EndInvoke(ByRef<int32_t> pnX, ByRef<int32_t> pnY, ByRef<uint32_t> pnWidth, ByRef<uint32_t> pnHeight, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRExtendedDisplay___GetWindowBounds", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRExtendedDisplay___GetWindowBounds(__IVRExtendedDisplay___GetWindowBounds&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRExtendedDisplay___GetWindowBounds", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRExtendedDisplay___GetWindowBounds(__IVRExtendedDisplay___GetWindowBounds const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRExtendedDisplay___GetWindowBounds();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRExtendedDisplay___GetWindowBounds, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetEyeOutputViewport
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8266))
// CS Name: ::IVRExtendedDisplay::_GetEyeOutputViewport*
class CORDL_TYPE __IVRExtendedDisplay___GetEyeOutputViewport : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRExtendedDisplay___GetEyeOutputViewport* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x27d4ed0 size 0xc4 virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x27d4f94 size 0x14 virtual true final false
  inline void Invoke(::OVR::OpenVR::EVREye eEye, ByRef<uint32_t> pnX, ByRef<uint32_t> pnY, ByRef<uint32_t> pnWidth, ByRef<uint32_t> pnHeight);

  /// @brief Method BeginInvoke addr 0x27d4fa8 size 0x110 virtual true final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::EVREye eEye, ByRef<uint32_t> pnX, ByRef<uint32_t> pnY, ByRef<uint32_t> pnWidth, ByRef<uint32_t> pnHeight, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke addr 0x27d50b8 size 0x28 virtual true final false
  inline void EndInvoke(ByRef<uint32_t> pnX, ByRef<uint32_t> pnY, ByRef<uint32_t> pnWidth, ByRef<uint32_t> pnHeight, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRExtendedDisplay___GetEyeOutputViewport", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRExtendedDisplay___GetEyeOutputViewport(__IVRExtendedDisplay___GetEyeOutputViewport&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRExtendedDisplay___GetEyeOutputViewport", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRExtendedDisplay___GetEyeOutputViewport(__IVRExtendedDisplay___GetEyeOutputViewport const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRExtendedDisplay___GetEyeOutputViewport();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRExtendedDisplay___GetEyeOutputViewport, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetDXGIOutputInfo
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8267))
// CS Name: ::IVRExtendedDisplay::_GetDXGIOutputInfo*
class CORDL_TYPE __IVRExtendedDisplay___GetDXGIOutputInfo : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRExtendedDisplay___GetDXGIOutputInfo* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x27d50e0 size 0xd8 virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x27d51b8 size 0x14 virtual true final false
  inline void Invoke(ByRef<int32_t> pnAdapterIndex, ByRef<int32_t> pnAdapterOutputIndex);

  /// @brief Method BeginInvoke addr 0x27d51cc size 0xa4 virtual true final false
  inline ::System::IAsyncResult* BeginInvoke(ByRef<int32_t> pnAdapterIndex, ByRef<int32_t> pnAdapterOutputIndex, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke addr 0x27d5270 size 0x24 virtual true final false
  inline void EndInvoke(ByRef<int32_t> pnAdapterIndex, ByRef<int32_t> pnAdapterOutputIndex, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRExtendedDisplay___GetDXGIOutputInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRExtendedDisplay___GetDXGIOutputInfo(__IVRExtendedDisplay___GetDXGIOutputInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRExtendedDisplay___GetDXGIOutputInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRExtendedDisplay___GetDXGIOutputInfo(__IVRExtendedDisplay___GetDXGIOutputInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRExtendedDisplay___GetDXGIOutputInfo();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRExtendedDisplay___GetDXGIOutputInfo, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: OVR.OpenVR::IVRExtendedDisplay
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8268))
// CS Name: ::OVR.OpenVR::IVRExtendedDisplay
struct CORDL_TYPE IVRExtendedDisplay {
public:
  // Declarations
  using _GetDXGIOutputInfo = ::OVR::OpenVR::__IVRExtendedDisplay___GetDXGIOutputInfo;

  using _GetEyeOutputViewport = ::OVR::OpenVR::__IVRExtendedDisplay___GetEyeOutputViewport;

  using _GetWindowBounds = ::OVR::OpenVR::__IVRExtendedDisplay___GetWindowBounds;

  // Ctor Parameters [CppParam { name: "GetWindowBounds", ty: "::OVR::OpenVR::__IVRExtendedDisplay___GetWindowBounds*", modifiers: "", def_value: None }, CppParam { name: "GetEyeOutputViewport", ty:
  // "::OVR::OpenVR::__IVRExtendedDisplay___GetEyeOutputViewport*", modifiers: "", def_value: None }, CppParam { name: "GetDXGIOutputInfo", ty:
  // "::OVR::OpenVR::__IVRExtendedDisplay___GetDXGIOutputInfo*", modifiers: "", def_value: None }]
  constexpr IVRExtendedDisplay(::OVR::OpenVR::__IVRExtendedDisplay___GetWindowBounds* GetWindowBounds, ::OVR::OpenVR::__IVRExtendedDisplay___GetEyeOutputViewport* GetEyeOutputViewport,
                               ::OVR::OpenVR::__IVRExtendedDisplay___GetDXGIOutputInfo* GetDXGIOutputInfo) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRExtendedDisplay();

  /// @brief Field GetWindowBounds, offset: 0x0, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRExtendedDisplay___GetWindowBounds* GetWindowBounds;

  /// @brief Field GetEyeOutputViewport, offset: 0x8, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRExtendedDisplay___GetEyeOutputViewport* GetEyeOutputViewport;

  /// @brief Field GetDXGIOutputInfo, offset: 0x10, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRExtendedDisplay___GetDXGIOutputInfo* GetDXGIOutputInfo;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRExtendedDisplay, 0x18>, "Size mismatch!");

} // namespace OVR::OpenVR
NEED_NO_BOX(::OVR::OpenVR::__IVRExtendedDisplay___GetDXGIOutputInfo);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRExtendedDisplay___GetDXGIOutputInfo*, "OVR.OpenVR", "IVRExtendedDisplay/_GetDXGIOutputInfo");
NEED_NO_BOX(::OVR::OpenVR::__IVRExtendedDisplay___GetEyeOutputViewport);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRExtendedDisplay___GetEyeOutputViewport*, "OVR.OpenVR", "IVRExtendedDisplay/_GetEyeOutputViewport");
NEED_NO_BOX(::OVR::OpenVR::__IVRExtendedDisplay___GetWindowBounds);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRExtendedDisplay___GetWindowBounds*, "OVR.OpenVR", "IVRExtendedDisplay/_GetWindowBounds");
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRExtendedDisplay, "OVR.OpenVR", "IVRExtendedDisplay");
