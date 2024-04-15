#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/AppFlow/Initialization/zzzz__AddressablesAsyncInstaller_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ColorSchemesAsyncInstaller)
namespace BGLib::AppFlow::Initialization {
class __AsyncInstaller__IInstallerRegistry;
}
namespace Environments::Definitions {
class __ColorSchemesAsyncInstaller____c;
}
namespace GlobalNamespace {
class ColorSchemeSO;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace Environments::Definitions {
class ColorSchemesAsyncInstaller;
}
namespace Environments::Definitions {
class __ColorSchemesAsyncInstaller____c;
}
// Write type traits
MARK_REF_PTR_T(::Environments::Definitions::ColorSchemesAsyncInstaller);
MARK_REF_PTR_T(::Environments::Definitions::__ColorSchemesAsyncInstaller____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Environments::Definitions {
// Is value type: false
// CS Name: ::ColorSchemesAsyncInstaller::<>c*
class CORDL_TYPE __ColorSchemesAsyncInstaller____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Environments::Definitions::__ColorSchemesAsyncInstaller____c* __9;

  /// @brief Field <>9__3_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__3_0, put = setStaticF___9__3_0))::System::Func_2<::UnityW<::GlobalNamespace::ColorSchemeSO>, int32_t>* __9__3_0;

  static inline ::Environments::Definitions::__ColorSchemesAsyncInstaller____c* New_ctor();

  /// @brief Method <LoadResourcesBeforeInstall>b__3_0, addr 0x140dca4, size 0x18, virtual false, abstract: false, final false
  inline int32_t _LoadResourcesBeforeInstall_b__3_0(::GlobalNamespace::ColorSchemeSO* colorScheme);

  /// @brief Method .ctor, addr 0x140dc9c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Environments::Definitions::__ColorSchemesAsyncInstaller____c* getStaticF___9();

  static inline ::System::Func_2<::UnityW<::GlobalNamespace::ColorSchemeSO>, int32_t>* getStaticF___9__3_0();

  static inline void setStaticF___9(::Environments::Definitions::__ColorSchemesAsyncInstaller____c* value);

  static inline void setStaticF___9__3_0(::System::Func_2<::UnityW<::GlobalNamespace::ColorSchemeSO>, int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ColorSchemesAsyncInstaller____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ColorSchemesAsyncInstaller____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ColorSchemesAsyncInstaller____c(__ColorSchemesAsyncInstaller____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ColorSchemesAsyncInstaller____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ColorSchemesAsyncInstaller____c(__ColorSchemesAsyncInstaller____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Environments::Definitions::__ColorSchemesAsyncInstaller____c, 0x10>, "Size mismatch!");

} // namespace Environments::Definitions
// Type: Environments.Definitions::ColorSchemesAsyncInstaller
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Environments::Definitions {
// Is value type: false
// CS Name: ::Environments.Definitions::ColorSchemesAsyncInstaller*
class CORDL_TYPE ColorSchemesAsyncInstaller : public ::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<::UnityW<::GlobalNamespace::ColorSchemeSO>> {
public:
  // Declarations
  using __c = ::Environments::Definitions::__ColorSchemesAsyncInstaller____c;

  /// @brief Field _colorSchemes, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__colorSchemes,
                      put = __cordl_internal_set__colorSchemes))::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ColorSchemeSO>>* _colorSchemes;

  __declspec(property(get = get_assetLabelRuntimeKey))::StringW assetLabelRuntimeKey;

  /// @brief Method InstallBindings, addr 0x140daf4, size 0xb4, virtual true, abstract: false, final false
  inline void InstallBindings();

  /// @brief Method LoadResourcesBeforeInstall, addr 0x140d9cc, size 0x128, virtual true, abstract: false, final false
  inline void LoadResourcesBeforeInstall(::System::Collections::Generic::IList_1<::UnityW<::GlobalNamespace::ColorSchemeSO>>* colorSchemes,
                                         ::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry* registry);

  static inline ::Environments::Definitions::ColorSchemesAsyncInstaller* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ColorSchemeSO>>*& __cordl_internal_get__colorSchemes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ColorSchemeSO>>*> const& __cordl_internal_get__colorSchemes() const;

  constexpr void __cordl_internal_set__colorSchemes(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ColorSchemeSO>>* value);

  /// @brief Method .ctor, addr 0x140dba8, size 0x90, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_assetLabelRuntimeKey, addr 0x140d98c, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_assetLabelRuntimeKey();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorSchemesAsyncInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorSchemesAsyncInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorSchemesAsyncInstaller(ColorSchemesAsyncInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorSchemesAsyncInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorSchemesAsyncInstaller(ColorSchemesAsyncInstaller const&) = delete;

  /// @brief Field _colorSchemes, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ColorSchemeSO>>* ____colorSchemes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Environments::Definitions::ColorSchemesAsyncInstaller, 0x48>, "Size mismatch!");

static_assert(offsetof(::Environments::Definitions::ColorSchemesAsyncInstaller, ____colorSchemes) == 0x40, "Offset mismatch!");

} // namespace Environments::Definitions
NEED_NO_BOX(::Environments::Definitions::ColorSchemesAsyncInstaller);
DEFINE_IL2CPP_ARG_TYPE(::Environments::Definitions::ColorSchemesAsyncInstaller*, "Environments.Definitions", "ColorSchemesAsyncInstaller");
NEED_NO_BOX(::Environments::Definitions::__ColorSchemesAsyncInstaller____c);
DEFINE_IL2CPP_ARG_TYPE(::Environments::Definitions::__ColorSchemesAsyncInstaller____c*, "Environments.Definitions", "ColorSchemesAsyncInstaller/<>c");
