#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_Asset)
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace TMPro {
class TMP_Asset;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::TMP_Asset);
// Type: TMPro::TMP_Asset
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10210))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12327))
// CS Name: ::TMPro::TMP_Asset*
class CORDL_TYPE TMP_Asset : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Field m_InstanceID, offset 0x18, size 0x4
  __declspec(property(get = __get_m_InstanceID, put = __set_m_InstanceID)) int32_t m_InstanceID;

  /// @brief Field hashCode, offset 0x1c, size 0x4
  __declspec(property(get = __get_hashCode, put = __set_hashCode)) int32_t hashCode;

  /// @brief Field material, offset 0x20, size 0x8
  __declspec(property(get = __get_material, put = __set_material))::UnityEngine::Material* material;

  /// @brief Field materialHashCode, offset 0x28, size 0x4
  __declspec(property(get = __get_materialHashCode, put = __set_materialHashCode)) int32_t materialHashCode;

  __declspec(property(get = get_instanceID)) int32_t instanceID;

  constexpr int32_t& __get_m_InstanceID();

  constexpr int32_t const& __get_m_InstanceID() const;

  constexpr void __set_m_InstanceID(int32_t value);

  constexpr int32_t& __get_hashCode();

  constexpr int32_t const& __get_hashCode() const;

  constexpr void __set_hashCode(int32_t value);

  constexpr ::UnityEngine::Material*& __get_material();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& __get_material() const;

  constexpr void __set_material(::UnityEngine::Material* value);

  constexpr int32_t& __get_materialHashCode();

  constexpr int32_t const& __get_materialHashCode() const;

  constexpr void __set_materialHashCode(int32_t value);

  /// @brief Method get_instanceID addr 0x2c016b4 size 0x28 virtual false final false
  inline int32_t get_instanceID();

  static inline ::TMPro::TMP_Asset* New_ctor();

  /// @brief Method .ctor addr 0x2c016dc size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TMP_Asset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_Asset(TMP_Asset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_Asset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_Asset(TMP_Asset const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_Asset();

public:
  /// @brief Field m_InstanceID, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_InstanceID;

  /// @brief Field hashCode, offset: 0x1c, size: 0x4, def value: None
  int32_t ___hashCode;

  /// @brief Field material, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Material* ___material;

  /// @brief Field materialHashCode, offset: 0x28, size: 0x4, def value: None
  int32_t ___materialHashCode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_Asset, 0x30>, "Size mismatch!");

} // namespace TMPro
NEED_NO_BOX(::TMPro::TMP_Asset);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_Asset*, "TMPro", "TMP_Asset");
