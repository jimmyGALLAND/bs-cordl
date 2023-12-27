#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InputControlAttribute)
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Layouts {
class InputControlAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Layouts::InputControlAttribute);
// Type: UnityEngine.InputSystem.Layouts::InputControlAttribute
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 168, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Layouts {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10170))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6594))
// CS Name: ::UnityEngine.InputSystem.Layouts::InputControlAttribute*
class CORDL_TYPE InputControlAttribute : public ::UnityEngine::PropertyAttribute {
public:
  // Declarations
  /// @brief Field <layout>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__layout_k__BackingField, put = __set__layout_k__BackingField))::StringW _layout_k__BackingField;

  /// @brief Field <variants>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__variants_k__BackingField, put = __set__variants_k__BackingField))::StringW _variants_k__BackingField;

  /// @brief Field <name>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __get__name_k__BackingField, put = __set__name_k__BackingField))::StringW _name_k__BackingField;

  /// @brief Field <format>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __get__format_k__BackingField, put = __set__format_k__BackingField))::StringW _format_k__BackingField;

  /// @brief Field <usage>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __get__usage_k__BackingField, put = __set__usage_k__BackingField))::StringW _usage_k__BackingField;

  /// @brief Field <usages>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __get__usages_k__BackingField, put = __set__usages_k__BackingField))::ArrayW<::StringW, ::Array<::StringW>*> _usages_k__BackingField;

  /// @brief Field <parameters>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __get__parameters_k__BackingField, put = __set__parameters_k__BackingField))::StringW _parameters_k__BackingField;

  /// @brief Field <processors>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __get__processors_k__BackingField, put = __set__processors_k__BackingField))::StringW _processors_k__BackingField;

  /// @brief Field <alias>k__BackingField, offset 0x50, size 0x8
  __declspec(property(get = __get__alias_k__BackingField, put = __set__alias_k__BackingField))::StringW _alias_k__BackingField;

  /// @brief Field <aliases>k__BackingField, offset 0x58, size 0x8
  __declspec(property(get = __get__aliases_k__BackingField, put = __set__aliases_k__BackingField))::ArrayW<::StringW, ::Array<::StringW>*> _aliases_k__BackingField;

  /// @brief Field <useStateFrom>k__BackingField, offset 0x60, size 0x8
  __declspec(property(get = __get__useStateFrom_k__BackingField, put = __set__useStateFrom_k__BackingField))::StringW _useStateFrom_k__BackingField;

  /// @brief Field <bit>k__BackingField, offset 0x68, size 0x4
  __declspec(property(get = __get__bit_k__BackingField, put = __set__bit_k__BackingField)) uint32_t _bit_k__BackingField;

  /// @brief Field <offset>k__BackingField, offset 0x6c, size 0x4
  __declspec(property(get = __get__offset_k__BackingField, put = __set__offset_k__BackingField)) uint32_t _offset_k__BackingField;

  /// @brief Field <sizeInBits>k__BackingField, offset 0x70, size 0x4
  __declspec(property(get = __get__sizeInBits_k__BackingField, put = __set__sizeInBits_k__BackingField)) uint32_t _sizeInBits_k__BackingField;

  /// @brief Field <arraySize>k__BackingField, offset 0x74, size 0x4
  __declspec(property(get = __get__arraySize_k__BackingField, put = __set__arraySize_k__BackingField)) int32_t _arraySize_k__BackingField;

  /// @brief Field <displayName>k__BackingField, offset 0x78, size 0x8
  __declspec(property(get = __get__displayName_k__BackingField, put = __set__displayName_k__BackingField))::StringW _displayName_k__BackingField;

  /// @brief Field <shortDisplayName>k__BackingField, offset 0x80, size 0x8
  __declspec(property(get = __get__shortDisplayName_k__BackingField, put = __set__shortDisplayName_k__BackingField))::StringW _shortDisplayName_k__BackingField;

  /// @brief Field <noisy>k__BackingField, offset 0x88, size 0x1
  __declspec(property(get = __get__noisy_k__BackingField, put = __set__noisy_k__BackingField)) bool _noisy_k__BackingField;

  /// @brief Field <synthetic>k__BackingField, offset 0x89, size 0x1
  __declspec(property(get = __get__synthetic_k__BackingField, put = __set__synthetic_k__BackingField)) bool _synthetic_k__BackingField;

  /// @brief Field <dontReset>k__BackingField, offset 0x8a, size 0x1
  __declspec(property(get = __get__dontReset_k__BackingField, put = __set__dontReset_k__BackingField)) bool _dontReset_k__BackingField;

  /// @brief Field <defaultState>k__BackingField, offset 0x90, size 0x8
  __declspec(property(get = __get__defaultState_k__BackingField, put = __set__defaultState_k__BackingField))::System::Object* _defaultState_k__BackingField;

  /// @brief Field <minValue>k__BackingField, offset 0x98, size 0x8
  __declspec(property(get = __get__minValue_k__BackingField, put = __set__minValue_k__BackingField))::System::Object* _minValue_k__BackingField;

  /// @brief Field <maxValue>k__BackingField, offset 0xa0, size 0x8
  __declspec(property(get = __get__maxValue_k__BackingField, put = __set__maxValue_k__BackingField))::System::Object* _maxValue_k__BackingField;

  __declspec(property(get = get_layout, put = set_layout))::StringW layout;

  __declspec(property(get = get_variants, put = set_variants))::StringW variants;

  __declspec(property(get = get_name, put = set_name))::StringW name;

  __declspec(property(get = get_format, put = set_format))::StringW format;

  __declspec(property(get = get_usage, put = set_usage))::StringW usage;

  __declspec(property(get = get_usages, put = set_usages))::ArrayW<::StringW, ::Array<::StringW>*> usages;

  __declspec(property(get = get_parameters, put = set_parameters))::StringW parameters;

  __declspec(property(get = get_processors, put = set_processors))::StringW processors;

  __declspec(property(get = get_alias, put = set_alias))::StringW alias;

  __declspec(property(get = get_aliases, put = set_aliases))::ArrayW<::StringW, ::Array<::StringW>*> aliases;

  __declspec(property(get = get_useStateFrom, put = set_useStateFrom))::StringW useStateFrom;

  __declspec(property(get = get_bit, put = set_bit)) uint32_t bit;

  __declspec(property(get = get_offset, put = set_offset)) uint32_t offset;

  __declspec(property(get = get_sizeInBits, put = set_sizeInBits)) uint32_t sizeInBits;

  __declspec(property(get = get_arraySize, put = set_arraySize)) int32_t arraySize;

  __declspec(property(get = get_displayName, put = set_displayName))::StringW displayName;

  __declspec(property(get = get_shortDisplayName, put = set_shortDisplayName))::StringW shortDisplayName;

  __declspec(property(get = get_noisy, put = set_noisy)) bool noisy;

  __declspec(property(get = get_synthetic, put = set_synthetic)) bool synthetic;

  __declspec(property(get = get_dontReset, put = set_dontReset)) bool dontReset;

  __declspec(property(get = get_defaultState, put = set_defaultState))::System::Object* defaultState;

  __declspec(property(get = get_minValue, put = set_minValue))::System::Object* minValue;

  __declspec(property(get = get_maxValue, put = set_maxValue))::System::Object* maxValue;

  constexpr ::StringW& __get__layout_k__BackingField();

  constexpr ::StringW const& __get__layout_k__BackingField() const;

  constexpr void __set__layout_k__BackingField(::StringW value);

  constexpr ::StringW& __get__variants_k__BackingField();

  constexpr ::StringW const& __get__variants_k__BackingField() const;

  constexpr void __set__variants_k__BackingField(::StringW value);

  constexpr ::StringW& __get__name_k__BackingField();

  constexpr ::StringW const& __get__name_k__BackingField() const;

  constexpr void __set__name_k__BackingField(::StringW value);

  constexpr ::StringW& __get__format_k__BackingField();

  constexpr ::StringW const& __get__format_k__BackingField() const;

  constexpr void __set__format_k__BackingField(::StringW value);

  constexpr ::StringW& __get__usage_k__BackingField();

  constexpr ::StringW const& __get__usage_k__BackingField() const;

  constexpr void __set__usage_k__BackingField(::StringW value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get__usages_k__BackingField();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get__usages_k__BackingField() const;

  constexpr void __set__usages_k__BackingField(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::StringW& __get__parameters_k__BackingField();

  constexpr ::StringW const& __get__parameters_k__BackingField() const;

  constexpr void __set__parameters_k__BackingField(::StringW value);

  constexpr ::StringW& __get__processors_k__BackingField();

  constexpr ::StringW const& __get__processors_k__BackingField() const;

  constexpr void __set__processors_k__BackingField(::StringW value);

  constexpr ::StringW& __get__alias_k__BackingField();

  constexpr ::StringW const& __get__alias_k__BackingField() const;

  constexpr void __set__alias_k__BackingField(::StringW value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get__aliases_k__BackingField();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get__aliases_k__BackingField() const;

  constexpr void __set__aliases_k__BackingField(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::StringW& __get__useStateFrom_k__BackingField();

  constexpr ::StringW const& __get__useStateFrom_k__BackingField() const;

  constexpr void __set__useStateFrom_k__BackingField(::StringW value);

  constexpr uint32_t& __get__bit_k__BackingField();

  constexpr uint32_t const& __get__bit_k__BackingField() const;

  constexpr void __set__bit_k__BackingField(uint32_t value);

  constexpr uint32_t& __get__offset_k__BackingField();

  constexpr uint32_t const& __get__offset_k__BackingField() const;

  constexpr void __set__offset_k__BackingField(uint32_t value);

  constexpr uint32_t& __get__sizeInBits_k__BackingField();

  constexpr uint32_t const& __get__sizeInBits_k__BackingField() const;

  constexpr void __set__sizeInBits_k__BackingField(uint32_t value);

  constexpr int32_t& __get__arraySize_k__BackingField();

  constexpr int32_t const& __get__arraySize_k__BackingField() const;

  constexpr void __set__arraySize_k__BackingField(int32_t value);

  constexpr ::StringW& __get__displayName_k__BackingField();

  constexpr ::StringW const& __get__displayName_k__BackingField() const;

  constexpr void __set__displayName_k__BackingField(::StringW value);

  constexpr ::StringW& __get__shortDisplayName_k__BackingField();

  constexpr ::StringW const& __get__shortDisplayName_k__BackingField() const;

  constexpr void __set__shortDisplayName_k__BackingField(::StringW value);

  constexpr bool& __get__noisy_k__BackingField();

  constexpr bool const& __get__noisy_k__BackingField() const;

  constexpr void __set__noisy_k__BackingField(bool value);

  constexpr bool& __get__synthetic_k__BackingField();

  constexpr bool const& __get__synthetic_k__BackingField() const;

  constexpr void __set__synthetic_k__BackingField(bool value);

  constexpr bool& __get__dontReset_k__BackingField();

  constexpr bool const& __get__dontReset_k__BackingField() const;

  constexpr void __set__dontReset_k__BackingField(bool value);

  constexpr ::System::Object*& __get__defaultState_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get__defaultState_k__BackingField() const;

  constexpr void __set__defaultState_k__BackingField(::System::Object* value);

  constexpr ::System::Object*& __get__minValue_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get__minValue_k__BackingField() const;

  constexpr void __set__minValue_k__BackingField(::System::Object* value);

  constexpr ::System::Object*& __get__maxValue_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get__maxValue_k__BackingField() const;

  constexpr void __set__maxValue_k__BackingField(::System::Object* value);

  /// @brief Method get_layout addr 0x2afa128 size 0x8 virtual false final false
  inline ::StringW get_layout();

  /// @brief Method set_layout addr 0x2afa130 size 0x8 virtual false final false
  inline void set_layout(::StringW value);

  /// @brief Method get_variants addr 0x2afa138 size 0x8 virtual false final false
  inline ::StringW get_variants();

  /// @brief Method set_variants addr 0x2afa140 size 0x8 virtual false final false
  inline void set_variants(::StringW value);

  /// @brief Method get_name addr 0x2afa148 size 0x8 virtual false final false
  inline ::StringW get_name();

  /// @brief Method set_name addr 0x2afa150 size 0x8 virtual false final false
  inline void set_name(::StringW value);

  /// @brief Method get_format addr 0x2afa158 size 0x8 virtual false final false
  inline ::StringW get_format();

  /// @brief Method set_format addr 0x2afa160 size 0x8 virtual false final false
  inline void set_format(::StringW value);

  /// @brief Method get_usage addr 0x2afa168 size 0x8 virtual false final false
  inline ::StringW get_usage();

  /// @brief Method set_usage addr 0x2afa170 size 0x8 virtual false final false
  inline void set_usage(::StringW value);

  /// @brief Method get_usages addr 0x2afa178 size 0x8 virtual false final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_usages();

  /// @brief Method set_usages addr 0x2afa180 size 0x8 virtual false final false
  inline void set_usages(::ArrayW<::StringW, ::Array<::StringW>*> value);

  /// @brief Method get_parameters addr 0x2afa188 size 0x8 virtual false final false
  inline ::StringW get_parameters();

  /// @brief Method set_parameters addr 0x2afa190 size 0x8 virtual false final false
  inline void set_parameters(::StringW value);

  /// @brief Method get_processors addr 0x2afa198 size 0x8 virtual false final false
  inline ::StringW get_processors();

  /// @brief Method set_processors addr 0x2afa1a0 size 0x8 virtual false final false
  inline void set_processors(::StringW value);

  /// @brief Method get_alias addr 0x2afa1a8 size 0x8 virtual false final false
  inline ::StringW get_alias();

  /// @brief Method set_alias addr 0x2afa1b0 size 0x8 virtual false final false
  inline void set_alias(::StringW value);

  /// @brief Method get_aliases addr 0x2afa1b8 size 0x8 virtual false final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_aliases();

  /// @brief Method set_aliases addr 0x2afa1c0 size 0x8 virtual false final false
  inline void set_aliases(::ArrayW<::StringW, ::Array<::StringW>*> value);

  /// @brief Method get_useStateFrom addr 0x2afa1c8 size 0x8 virtual false final false
  inline ::StringW get_useStateFrom();

  /// @brief Method set_useStateFrom addr 0x2afa1d0 size 0x8 virtual false final false
  inline void set_useStateFrom(::StringW value);

  /// @brief Method get_bit addr 0x2afa1d8 size 0x8 virtual false final false
  inline uint32_t get_bit();

  /// @brief Method set_bit addr 0x2afa1e0 size 0x8 virtual false final false
  inline void set_bit(uint32_t value);

  /// @brief Method get_offset addr 0x2afa1e8 size 0x8 virtual false final false
  inline uint32_t get_offset();

  /// @brief Method set_offset addr 0x2afa1f0 size 0x8 virtual false final false
  inline void set_offset(uint32_t value);

  /// @brief Method get_sizeInBits addr 0x2afa1f8 size 0x8 virtual false final false
  inline uint32_t get_sizeInBits();

  /// @brief Method set_sizeInBits addr 0x2afa200 size 0x8 virtual false final false
  inline void set_sizeInBits(uint32_t value);

  /// @brief Method get_arraySize addr 0x2afa208 size 0x8 virtual false final false
  inline int32_t get_arraySize();

  /// @brief Method set_arraySize addr 0x2afa210 size 0x8 virtual false final false
  inline void set_arraySize(int32_t value);

  /// @brief Method get_displayName addr 0x2afa218 size 0x8 virtual false final false
  inline ::StringW get_displayName();

  /// @brief Method set_displayName addr 0x2afa220 size 0x8 virtual false final false
  inline void set_displayName(::StringW value);

  /// @brief Method get_shortDisplayName addr 0x2afa228 size 0x8 virtual false final false
  inline ::StringW get_shortDisplayName();

  /// @brief Method set_shortDisplayName addr 0x2afa230 size 0x8 virtual false final false
  inline void set_shortDisplayName(::StringW value);

  /// @brief Method get_noisy addr 0x2afa238 size 0x8 virtual false final false
  inline bool get_noisy();

  /// @brief Method set_noisy addr 0x2afa240 size 0xc virtual false final false
  inline void set_noisy(bool value);

  /// @brief Method get_synthetic addr 0x2afa24c size 0x8 virtual false final false
  inline bool get_synthetic();

  /// @brief Method set_synthetic addr 0x2afa254 size 0xc virtual false final false
  inline void set_synthetic(bool value);

  /// @brief Method get_dontReset addr 0x2afa260 size 0x8 virtual false final false
  inline bool get_dontReset();

  /// @brief Method set_dontReset addr 0x2afa268 size 0xc virtual false final false
  inline void set_dontReset(bool value);

  /// @brief Method get_defaultState addr 0x2afa274 size 0x8 virtual false final false
  inline ::System::Object* get_defaultState();

  /// @brief Method set_defaultState addr 0x2afa27c size 0x8 virtual false final false
  inline void set_defaultState(::System::Object* value);

  /// @brief Method get_minValue addr 0x2afa284 size 0x8 virtual false final false
  inline ::System::Object* get_minValue();

  /// @brief Method set_minValue addr 0x2afa28c size 0x8 virtual false final false
  inline void set_minValue(::System::Object* value);

  /// @brief Method get_maxValue addr 0x2afa294 size 0x8 virtual false final false
  inline ::System::Object* get_maxValue();

  /// @brief Method set_maxValue addr 0x2afa29c size 0x8 virtual false final false
  inline void set_maxValue(::System::Object* value);

  static inline ::UnityEngine::InputSystem::Layouts::InputControlAttribute* New_ctor();

  /// @brief Method .ctor addr 0x2afa2a4 size 0x10 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "InputControlAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputControlAttribute(InputControlAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputControlAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputControlAttribute(InputControlAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputControlAttribute();

public:
  /// @brief Field <layout>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____layout_k__BackingField;

  /// @brief Field <variants>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____variants_k__BackingField;

  /// @brief Field <name>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____name_k__BackingField;

  /// @brief Field <format>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::StringW ____format_k__BackingField;

  /// @brief Field <usage>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::StringW ____usage_k__BackingField;

  /// @brief Field <usages>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____usages_k__BackingField;

  /// @brief Field <parameters>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::StringW ____parameters_k__BackingField;

  /// @brief Field <processors>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::StringW ____processors_k__BackingField;

  /// @brief Field <alias>k__BackingField, offset: 0x50, size: 0x8, def value: None
  ::StringW ____alias_k__BackingField;

  /// @brief Field <aliases>k__BackingField, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____aliases_k__BackingField;

  /// @brief Field <useStateFrom>k__BackingField, offset: 0x60, size: 0x8, def value: None
  ::StringW ____useStateFrom_k__BackingField;

  /// @brief Field <bit>k__BackingField, offset: 0x68, size: 0x4, def value: None
  uint32_t ____bit_k__BackingField;

  /// @brief Field <offset>k__BackingField, offset: 0x6c, size: 0x4, def value: None
  uint32_t ____offset_k__BackingField;

  /// @brief Field <sizeInBits>k__BackingField, offset: 0x70, size: 0x4, def value: None
  uint32_t ____sizeInBits_k__BackingField;

  /// @brief Field <arraySize>k__BackingField, offset: 0x74, size: 0x4, def value: None
  int32_t ____arraySize_k__BackingField;

  /// @brief Field <displayName>k__BackingField, offset: 0x78, size: 0x8, def value: None
  ::StringW ____displayName_k__BackingField;

  /// @brief Field <shortDisplayName>k__BackingField, offset: 0x80, size: 0x8, def value: None
  ::StringW ____shortDisplayName_k__BackingField;

  /// @brief Field <noisy>k__BackingField, offset: 0x88, size: 0x1, def value: None
  bool ____noisy_k__BackingField;

  /// @brief Field <synthetic>k__BackingField, offset: 0x89, size: 0x1, def value: None
  bool ____synthetic_k__BackingField;

  /// @brief Field <dontReset>k__BackingField, offset: 0x8a, size: 0x1, def value: None
  bool ____dontReset_k__BackingField;

  /// @brief Field <defaultState>k__BackingField, offset: 0x90, size: 0x8, def value: None
  ::System::Object* ____defaultState_k__BackingField;

  /// @brief Field <minValue>k__BackingField, offset: 0x98, size: 0x8, def value: None
  ::System::Object* ____minValue_k__BackingField;

  /// @brief Field <maxValue>k__BackingField, offset: 0xa0, size: 0x8, def value: None
  ::System::Object* ____maxValue_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Layouts::InputControlAttribute, 0xa8>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Layouts
NEED_NO_BOX(::UnityEngine::InputSystem::Layouts::InputControlAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Layouts::InputControlAttribute*, "UnityEngine.InputSystem.Layouts", "InputControlAttribute");
