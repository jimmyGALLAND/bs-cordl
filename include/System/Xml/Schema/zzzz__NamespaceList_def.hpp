#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__NamespaceList_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NamespaceList)
namespace System::Collections {
class Hashtable;
}
namespace System::Collections {
class ICollection;
}
namespace System::Xml::Schema {
struct __NamespaceList__ListType;
}
namespace System::Xml {
class XmlQualifiedName;
}
// Forward declare root types
namespace System::Xml::Schema {
struct __NamespaceList__ListType;
}
namespace System::Xml::Schema {
class NamespaceList;
}
// Write type traits
MARK_VAL_T(::System::Xml::Schema::__NamespaceList__ListType);
MARK_REF_PTR_T(::System::Xml::Schema::NamespaceList);
// Type: ::ListType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: true
// CS Name: ::NamespaceList::ListType
struct CORDL_TYPE __NamespaceList__ListType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____NamespaceList__ListType_Unwrapped
  enum struct ____NamespaceList__ListType_Unwrapped : int32_t {
    __E_Any = static_cast<int32_t>(0x0),
    __E_Other = static_cast<int32_t>(0x1),
    __E_Set = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____NamespaceList__ListType_Unwrapped() const noexcept {
    return static_cast<____NamespaceList__ListType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __NamespaceList__ListType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __NamespaceList__ListType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Any value: static_cast<int32_t>(0x0)
  static ::System::Xml::Schema::__NamespaceList__ListType const Any;

  /// @brief Field Other value: static_cast<int32_t>(0x1)
  static ::System::Xml::Schema::__NamespaceList__ListType const Other;

  /// @brief Field Set value: static_cast<int32_t>(0x2)
  static ::System::Xml::Schema::__NamespaceList__ListType const Set;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::__NamespaceList__ListType, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::__NamespaceList__ListType, value__) == 0x0, "Offset mismatch!");

} // namespace System::Xml::Schema
// Type: System.Xml.Schema::NamespaceList
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::NamespaceList*
class CORDL_TYPE NamespaceList : public ::System::Object {
public:
  // Declarations
  using ListType = ::System::Xml::Schema::__NamespaceList__ListType;

  __declspec(property(get = get_Enumerate))::System::Collections::ICollection* Enumerate;

  __declspec(property(get = get_Excluded))::StringW Excluded;

  __declspec(property(get = get_Type))::System::Xml::Schema::__NamespaceList__ListType Type;

  /// @brief Field set, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_set, put = __cordl_internal_set_set))::System::Collections::Hashtable* set;

  /// @brief Field targetNamespace, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_targetNamespace, put = __cordl_internal_set_targetNamespace))::StringW targetNamespace;

  /// @brief Field type, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type))::System::Xml::Schema::__NamespaceList__ListType type;

  /// @brief Method Allows, addr 0x2cc0994, size 0x84, virtual true, abstract: false, final false
  inline bool Allows(::StringW ns);

  /// @brief Method Allows, addr 0x2cc0a18, size 0x20, virtual false, abstract: false, final false
  inline bool Allows(::System::Xml::XmlQualifiedName* qname);

  /// @brief Method Clone, addr 0x2cc07f0, size 0x128, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::NamespaceList* Clone();

  /// @brief Method CompareSetToOther, addr 0x2cc1878, size 0x128, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::NamespaceList* CompareSetToOther(::System::Xml::Schema::NamespaceList* other);

  /// @brief Method Intersection, addr 0x2cc19a0, size 0x534, virtual false, abstract: false, final false
  static inline ::System::Xml::Schema::NamespaceList* Intersection(::System::Xml::Schema::NamespaceList* o1, ::System::Xml::Schema::NamespaceList* o2, bool v1Compat);

  /// @brief Method IsSubset, addr 0x2cc0f00, size 0x3ec, virtual false, abstract: false, final false
  static inline bool IsSubset(::System::Xml::Schema::NamespaceList* sub, ::System::Xml::Schema::NamespaceList* super);

  static inline ::System::Xml::Schema::NamespaceList* New_ctor();

  static inline ::System::Xml::Schema::NamespaceList* New_ctor(::StringW namespaces, ::StringW targetNamespace);

  /// @brief Method RemoveNamespace, addr 0x2cc1ed4, size 0x60, virtual false, abstract: false, final false
  inline void RemoveNamespace(::StringW tns);

  /// @brief Method ToString, addr 0x2cc0a38, size 0x4c8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method Union, addr 0x2cc12ec, size 0x58c, virtual false, abstract: false, final false
  static inline ::System::Xml::Schema::NamespaceList* Union(::System::Xml::Schema::NamespaceList* o1, ::System::Xml::Schema::NamespaceList* o2, bool v1Compat);

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_set();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __cordl_internal_get_set() const;

  constexpr ::StringW const& __cordl_internal_get_targetNamespace() const;

  constexpr ::StringW& __cordl_internal_get_targetNamespace();

  constexpr ::System::Xml::Schema::__NamespaceList__ListType const& __cordl_internal_get_type() const;

  constexpr ::System::Xml::Schema::__NamespaceList__ListType& __cordl_internal_get_type();

  constexpr void __cordl_internal_set_set(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set_targetNamespace(::StringW value);

  constexpr void __cordl_internal_set_type(::System::Xml::Schema::__NamespaceList__ListType value);

  /// @brief Method .ctor, addr 0x2cc0548, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2cc0550, size 0x2a0, virtual false, abstract: false, final false
  inline void _ctor(::StringW namespaces, ::StringW targetNamespace);

  /// @brief Method get_Enumerate, addr 0x2cc0928, size 0x6c, virtual false, abstract: false, final false
  inline ::System::Collections::ICollection* get_Enumerate();

  /// @brief Method get_Excluded, addr 0x2cc0920, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Excluded();

  /// @brief Method get_Type, addr 0x2cc0918, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::__NamespaceList__ListType get_Type();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NamespaceList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NamespaceList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NamespaceList(NamespaceList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NamespaceList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NamespaceList(NamespaceList const&) = delete;

  /// @brief Field type, offset: 0x10, size: 0x4, def value: None
  ::System::Xml::Schema::__NamespaceList__ListType ___type;

  /// @brief Field set, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___set;

  /// @brief Field targetNamespace, offset: 0x20, size: 0x8, def value: None
  ::StringW ___targetNamespace;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::NamespaceList, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::NamespaceList, ___type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::NamespaceList, ___set) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::NamespaceList, ___targetNamespace) == 0x20, "Offset mismatch!");

} // namespace System::Xml::Schema
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::__NamespaceList__ListType, "System.Xml.Schema", "NamespaceList/ListType");
NEED_NO_BOX(::System::Xml::Schema::NamespaceList);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::NamespaceList*, "System.Xml.Schema", "NamespaceList");
