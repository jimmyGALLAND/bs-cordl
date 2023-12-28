#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__VisualElementAsset_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(TemplateAsset)
namespace UnityEngine::UIElements {
struct __VisualTreeAsset__SlotUsageEntry;
}
namespace UnityEngine::UIElements {
struct __TemplateAsset__AttributeOverride;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class TemplateAsset;
}
namespace UnityEngine::UIElements {
struct __TemplateAsset__AttributeOverride;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::TemplateAsset);
MARK_VAL_T(::UnityEngine::UIElements::__TemplateAsset__AttributeOverride);
// Type: ::AttributeOverride
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7000))
// CS Name: ::TemplateAsset::AttributeOverride
struct CORDL_TYPE __TemplateAsset__AttributeOverride {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "m_ElementName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_AttributeName", ty: "::StringW", modifiers: "", def_value: None },
  // CppParam { name: "m_Value", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr __TemplateAsset__AttributeOverride(::StringW m_ElementName, ::StringW m_AttributeName, ::StringW m_Value) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TemplateAsset__AttributeOverride();

  /// @brief Field m_ElementName, offset: 0x0, size: 0x8, def value: None
  ::StringW m_ElementName;

  /// @brief Field m_AttributeName, offset: 0x8, size: 0x8, def value: None
  ::StringW m_AttributeName;

  /// @brief Field m_Value, offset: 0x10, size: 0x8, def value: None
  ::StringW m_Value;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__TemplateAsset__AttributeOverride, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::TemplateAsset
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7013))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7001))
// CS Name: ::UnityEngine.UIElements::TemplateAsset*
class CORDL_TYPE TemplateAsset : public ::UnityEngine::UIElements::VisualElementAsset {
public:
  // Declarations
  using AttributeOverride = ::UnityEngine::UIElements::__TemplateAsset__AttributeOverride;

  /// @brief Field m_TemplateAlias, offset 0x60, size 0x8
  __declspec(property(get = __get_m_TemplateAlias, put = __set_m_TemplateAlias))::StringW m_TemplateAlias;

  /// @brief Field m_AttributeOverrides, offset 0x68, size 0x8
  __declspec(property(get = __get_m_AttributeOverrides,
                      put = __set_m_AttributeOverrides))::System::Collections::Generic::List_1<::UnityEngine::UIElements::__TemplateAsset__AttributeOverride>* m_AttributeOverrides;

  /// @brief Field m_SlotUsages, offset 0x70, size 0x8
  __declspec(property(get = __get_m_SlotUsages, put = __set_m_SlotUsages))::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__SlotUsageEntry>* m_SlotUsages;

  __declspec(property(get = get_attributeOverrides))::System::Collections::Generic::List_1<::UnityEngine::UIElements::__TemplateAsset__AttributeOverride>* attributeOverrides;

  __declspec(property(get = get_slotUsages))::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__SlotUsageEntry>* slotUsages;

  constexpr ::StringW& __get_m_TemplateAlias();

  constexpr ::StringW const& __get_m_TemplateAlias() const;

  constexpr void __set_m_TemplateAlias(::StringW value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__TemplateAsset__AttributeOverride>*& __get_m_AttributeOverrides();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__TemplateAsset__AttributeOverride>*> const& __get_m_AttributeOverrides() const;

  constexpr void __set_m_AttributeOverrides(::System::Collections::Generic::List_1<::UnityEngine::UIElements::__TemplateAsset__AttributeOverride>* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__SlotUsageEntry>*& __get_m_SlotUsages();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__SlotUsageEntry>*> const& __get_m_SlotUsages() const;

  constexpr void __set_m_SlotUsages(::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__SlotUsageEntry>* value);

  /// @brief Method get_attributeOverrides addr 0x2e0ff1c size 0x80 virtual false final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__TemplateAsset__AttributeOverride>* get_attributeOverrides();

  /// @brief Method get_slotUsages addr 0x2e0ff9c size 0x8 virtual false final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__SlotUsageEntry>* get_slotUsages();

  // Ctor Parameters [CppParam { name: "", ty: "TemplateAsset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TemplateAsset(TemplateAsset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TemplateAsset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TemplateAsset(TemplateAsset const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TemplateAsset();

public:
  /// @brief Field m_TemplateAlias, offset: 0x60, size: 0x8, def value: None
  ::StringW ___m_TemplateAlias;

  /// @brief Field m_AttributeOverrides, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__TemplateAsset__AttributeOverride>* ___m_AttributeOverrides;

  /// @brief Field m_SlotUsages, offset: 0x70, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__SlotUsageEntry>* ___m_SlotUsages;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TemplateAsset, 0x78>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::TemplateAsset);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TemplateAsset*, "UnityEngine.UIElements", "TemplateAsset");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__TemplateAsset__AttributeOverride, "UnityEngine.UIElements", "TemplateAsset/AttributeOverride");
