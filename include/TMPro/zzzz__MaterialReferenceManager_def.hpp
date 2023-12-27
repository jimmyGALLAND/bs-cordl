#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MaterialReferenceManager)
namespace TMPro {
class TMP_FontAsset;
}
namespace TMPro {
class TMP_SpriteAsset;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace UnityEngine {
class Material;
}
namespace TMPro {
class TMP_ColorGradient;
}
// Forward declare root types
namespace TMPro {
class MaterialReferenceManager;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::MaterialReferenceManager);
// Type: TMPro::MaterialReferenceManager
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12302))
// CS Name: ::TMPro::MaterialReferenceManager*
class CORDL_TYPE MaterialReferenceManager : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_FontMaterialReferenceLookup, offset 0x10, size 0x8
  __declspec(property(get = __get_m_FontMaterialReferenceLookup,
                      put = __set_m_FontMaterialReferenceLookup))::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Material*>* m_FontMaterialReferenceLookup;

  /// @brief Field m_FontAssetReferenceLookup, offset 0x18, size 0x8
  __declspec(property(get = __get_m_FontAssetReferenceLookup,
                      put = __set_m_FontAssetReferenceLookup))::System::Collections::Generic::Dictionary_2<int32_t, ::TMPro::TMP_FontAsset*>* m_FontAssetReferenceLookup;

  /// @brief Field m_SpriteAssetReferenceLookup, offset 0x20, size 0x8
  __declspec(property(get = __get_m_SpriteAssetReferenceLookup,
                      put = __set_m_SpriteAssetReferenceLookup))::System::Collections::Generic::Dictionary_2<int32_t, ::TMPro::TMP_SpriteAsset*>* m_SpriteAssetReferenceLookup;

  /// @brief Field m_ColorGradientReferenceLookup, offset 0x28, size 0x8
  __declspec(property(get = __get_m_ColorGradientReferenceLookup,
                      put = __set_m_ColorGradientReferenceLookup))::System::Collections::Generic::Dictionary_2<int32_t, ::TMPro::TMP_ColorGradient*>* m_ColorGradientReferenceLookup;

  /// @brief Field s_Instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Instance, put = setStaticF_s_Instance))::TMPro::MaterialReferenceManager* s_Instance;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Material*>*& __get_m_FontMaterialReferenceLookup();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Material*>*> const& __get_m_FontMaterialReferenceLookup() const;

  constexpr void __set_m_FontMaterialReferenceLookup(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Material*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::TMPro::TMP_FontAsset*>*& __get_m_FontAssetReferenceLookup();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::TMPro::TMP_FontAsset*>*> const& __get_m_FontAssetReferenceLookup() const;

  constexpr void __set_m_FontAssetReferenceLookup(::System::Collections::Generic::Dictionary_2<int32_t, ::TMPro::TMP_FontAsset*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::TMPro::TMP_SpriteAsset*>*& __get_m_SpriteAssetReferenceLookup();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::TMPro::TMP_SpriteAsset*>*> const& __get_m_SpriteAssetReferenceLookup() const;

  constexpr void __set_m_SpriteAssetReferenceLookup(::System::Collections::Generic::Dictionary_2<int32_t, ::TMPro::TMP_SpriteAsset*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::TMPro::TMP_ColorGradient*>*& __get_m_ColorGradientReferenceLookup();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::TMPro::TMP_ColorGradient*>*> const& __get_m_ColorGradientReferenceLookup() const;

  constexpr void __set_m_ColorGradientReferenceLookup(::System::Collections::Generic::Dictionary_2<int32_t, ::TMPro::TMP_ColorGradient*>* value);

  static inline void setStaticF_s_Instance(::TMPro::MaterialReferenceManager* value);

  static inline ::TMPro::MaterialReferenceManager* getStaticF_s_Instance();

  /// @brief Method get_instance addr 0x2bef3b8 size 0x7c virtual false final false
  static inline ::TMPro::MaterialReferenceManager* get_instance();

  /// @brief Method AddFontAsset addr 0x2bef57c size 0x20 virtual false final false
  static inline void AddFontAsset(::TMPro::TMP_FontAsset* fontAsset);

  /// @brief Method AddFontAssetInternal addr 0x2bef59c size 0xc4 virtual false final false
  inline void AddFontAssetInternal(::TMPro::TMP_FontAsset* fontAsset);

  /// @brief Method AddSpriteAsset addr 0x2bef660 size 0x20 virtual false final false
  static inline void AddSpriteAsset(::TMPro::TMP_SpriteAsset* spriteAsset);

  /// @brief Method AddSpriteAssetInternal addr 0x2bef680 size 0xc4 virtual false final false
  inline void AddSpriteAssetInternal(::TMPro::TMP_SpriteAsset* spriteAsset);

  /// @brief Method AddSpriteAsset addr 0x2bef744 size 0x30 virtual false final false
  static inline void AddSpriteAsset(int32_t hashCode, ::TMPro::TMP_SpriteAsset* spriteAsset);

  /// @brief Method AddSpriteAssetInternal addr 0x2bef774 size 0xd4 virtual false final false
  inline void AddSpriteAssetInternal(int32_t hashCode, ::TMPro::TMP_SpriteAsset* spriteAsset);

  /// @brief Method AddFontMaterial addr 0x2bef848 size 0x30 virtual false final false
  static inline void AddFontMaterial(int32_t hashCode, ::UnityEngine::Material* material);

  /// @brief Method AddFontMaterialInternal addr 0x2bef878 size 0x68 virtual false final false
  inline void AddFontMaterialInternal(int32_t hashCode, ::UnityEngine::Material* material);

  /// @brief Method AddColorGradientPreset addr 0x2bef8e0 size 0x30 virtual false final false
  static inline void AddColorGradientPreset(int32_t hashCode, ::TMPro::TMP_ColorGradient* spriteAsset);

  /// @brief Method AddColorGradientPreset_Internal addr 0x2bef910 size 0xa4 virtual false final false
  inline void AddColorGradientPreset_Internal(int32_t hashCode, ::TMPro::TMP_ColorGradient* spriteAsset);

  /// @brief Method Contains addr 0x2bef9b4 size 0x5c virtual false final false
  inline bool Contains(::TMPro::TMP_FontAsset* font);

  /// @brief Method Contains addr 0x2befa10 size 0x5c virtual false final false
  inline bool Contains(::TMPro::TMP_SpriteAsset* sprite);

  /// @brief Method TryGetFontAsset addr 0x2befa6c size 0x30 virtual false final false
  static inline bool TryGetFontAsset(int32_t hashCode, ByRef<::TMPro::TMP_FontAsset*> fontAsset);

  /// @brief Method TryGetFontAssetInternal addr 0x2befa9c size 0x6c virtual false final false
  inline bool TryGetFontAssetInternal(int32_t hashCode, ByRef<::TMPro::TMP_FontAsset*> fontAsset);

  /// @brief Method TryGetSpriteAsset addr 0x2befb08 size 0x30 virtual false final false
  static inline bool TryGetSpriteAsset(int32_t hashCode, ByRef<::TMPro::TMP_SpriteAsset*> spriteAsset);

  /// @brief Method TryGetSpriteAssetInternal addr 0x2befb38 size 0x6c virtual false final false
  inline bool TryGetSpriteAssetInternal(int32_t hashCode, ByRef<::TMPro::TMP_SpriteAsset*> spriteAsset);

  /// @brief Method TryGetColorGradientPreset addr 0x2befba4 size 0x30 virtual false final false
  static inline bool TryGetColorGradientPreset(int32_t hashCode, ByRef<::TMPro::TMP_ColorGradient*> gradientPreset);

  /// @brief Method TryGetColorGradientPresetInternal addr 0x2befbd4 size 0x6c virtual false final false
  inline bool TryGetColorGradientPresetInternal(int32_t hashCode, ByRef<::TMPro::TMP_ColorGradient*> gradientPreset);

  /// @brief Method TryGetMaterial addr 0x2befc40 size 0x30 virtual false final false
  static inline bool TryGetMaterial(int32_t hashCode, ByRef<::UnityEngine::Material*> material);

  /// @brief Method TryGetMaterialInternal addr 0x2befc70 size 0x6c virtual false final false
  inline bool TryGetMaterialInternal(int32_t hashCode, ByRef<::UnityEngine::Material*> material);

  static inline ::TMPro::MaterialReferenceManager* New_ctor();

  /// @brief Method .ctor addr 0x2bef434 size 0x148 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MaterialReferenceManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MaterialReferenceManager(MaterialReferenceManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MaterialReferenceManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MaterialReferenceManager(MaterialReferenceManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MaterialReferenceManager();

public:
  /// @brief Field m_FontMaterialReferenceLookup, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Material*>* ___m_FontMaterialReferenceLookup;

  /// @brief Field m_FontAssetReferenceLookup, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::TMPro::TMP_FontAsset*>* ___m_FontAssetReferenceLookup;

  /// @brief Field m_SpriteAssetReferenceLookup, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::TMPro::TMP_SpriteAsset*>* ___m_SpriteAssetReferenceLookup;

  /// @brief Field m_ColorGradientReferenceLookup, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::TMPro::TMP_ColorGradient*>* ___m_ColorGradientReferenceLookup;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::MaterialReferenceManager, 0x30>, "Size mismatch!");

} // namespace TMPro
NEED_NO_BOX(::TMPro::MaterialReferenceManager);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::MaterialReferenceManager*, "TMPro", "MaterialReferenceManager");
