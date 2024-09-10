#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/SortColumnDescriptions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlObjectFactory_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlObjectTraits_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SortColumnDescriptions)
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Action;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class SortColumnDescription;
}
namespace UnityEngine::UIElements {
template<typename T>
class UxmlObjectListAttributeDescription_1;
}
namespace UnityEngine::UIElements {
template<typename T>
class __SortColumnDescriptions__UxmlObjectFactory_1;
}
namespace UnityEngine::UIElements {
template<typename T>
class __SortColumnDescriptions__UxmlObjectTraits_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class SortColumnDescriptions;
}
namespace UnityEngine::UIElements {
template<typename T>
class __SortColumnDescriptions__UxmlObjectFactory_1;
}
namespace UnityEngine::UIElements {
template<typename T>
class __SortColumnDescriptions__UxmlObjectTraits_1;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::SortColumnDescriptions);
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::__SortColumnDescriptions__UxmlObjectFactory_1);
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::__SortColumnDescriptions__UxmlObjectTraits_1);
// Type: ::UxmlObjectFactory`1
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// cpp template
template<typename T>
// Is value type: false
// CS Name: ::SortColumnDescriptions::UxmlObjectFactory`1<T>*
class CORDL_TYPE __SortColumnDescriptions__UxmlObjectFactory_1 : public ::UnityEngine::UIElements::UxmlObjectFactory_2<T,::UnityEngine::UIElements::__SortColumnDescriptions__UxmlObjectTraits_1<T>*> {
public:
// Declarations
static inline ::UnityEngine::UIElements::__SortColumnDescriptions__UxmlObjectFactory_1<T>* New_ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __SortColumnDescriptions__UxmlObjectFactory_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__SortColumnDescriptions__UxmlObjectFactory_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__SortColumnDescriptions__UxmlObjectFactory_1(__SortColumnDescriptions__UxmlObjectFactory_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__SortColumnDescriptions__UxmlObjectFactory_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__SortColumnDescriptions__UxmlObjectFactory_1(__SortColumnDescriptions__UxmlObjectFactory_1 const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::UxmlObjectTraits`1
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// cpp template
template<typename T>
// Is value type: false
// CS Name: ::SortColumnDescriptions::UxmlObjectTraits`1<T>*
class CORDL_TYPE __SortColumnDescriptions__UxmlObjectTraits_1 : public ::UnityEngine::UIElements::UxmlObjectTraits_1<T> {
public:
// Declarations
/// @brief Field m_SortColumnDescriptions, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SortColumnDescriptions, put=__cordl_internal_set_m_SortColumnDescriptions)) ::UnityEngine::UIElements::UxmlObjectListAttributeDescription_1<::UnityEngine::UIElements::SortColumnDescription*>*  m_SortColumnDescriptions;

/// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Init(ByRef<T>  obj, ::UnityEngine::UIElements::IUxmlAttributes*  bag, ::UnityEngine::UIElements::CreationContext  cc) ;

static inline ::UnityEngine::UIElements::__SortColumnDescriptions__UxmlObjectTraits_1<T>* New_ctor() ;

constexpr ::UnityEngine::UIElements::UxmlObjectListAttributeDescription_1<::UnityEngine::UIElements::SortColumnDescription*>*& __cordl_internal_get_m_SortColumnDescriptions() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlObjectListAttributeDescription_1<::UnityEngine::UIElements::SortColumnDescription*>*> const& __cordl_internal_get_m_SortColumnDescriptions() const;

constexpr void __cordl_internal_set_m_SortColumnDescriptions(::UnityEngine::UIElements::UxmlObjectListAttributeDescription_1<::UnityEngine::UIElements::SortColumnDescription*>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __SortColumnDescriptions__UxmlObjectTraits_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__SortColumnDescriptions__UxmlObjectTraits_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__SortColumnDescriptions__UxmlObjectTraits_1(__SortColumnDescriptions__UxmlObjectTraits_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__SortColumnDescriptions__UxmlObjectTraits_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__SortColumnDescriptions__UxmlObjectTraits_1(__SortColumnDescriptions__UxmlObjectTraits_1 const& ) = delete;

/// @brief Field m_SortColumnDescriptions, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::UIElements::UxmlObjectListAttributeDescription_1<::UnityEngine::UIElements::SortColumnDescription*>*  ___m_SortColumnDescriptions;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::SortColumnDescriptions
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::SortColumnDescriptions*
class CORDL_TYPE SortColumnDescriptions : public ::System::Object {
public:
// Declarations
template<typename T>
using UxmlObjectFactory_1 = ::UnityEngine::UIElements::__SortColumnDescriptions__UxmlObjectFactory_1<T>;

template<typename T>
using UxmlObjectTraits_1 = ::UnityEngine::UIElements::__SortColumnDescriptions__UxmlObjectTraits_1<T>;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

/// @brief Field changed, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_changed, put=__cordl_internal_set_changed)) ::System::Action*  changed;

/// @brief Field m_Descriptions, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Descriptions, put=__cordl_internal_set_m_Descriptions)) ::System::Collections::Generic::IList_1<::UnityEngine::UIElements::SortColumnDescription*>*  m_Descriptions;

/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::UnityEngine::UIElements::SortColumnDescription*>"
constexpr operator  ::System::Collections::Generic::ICollection_1<::UnityEngine::UIElements::SortColumnDescription*>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::SortColumnDescription*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::SortColumnDescription*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Method Add, addr 0x496ad38, size 0xb4, virtual true, abstract: false, final true
inline void Add(::UnityEngine::UIElements::SortColumnDescription*  item) ;

/// @brief Method Clear, addr 0x49695a0, size 0x140, virtual true, abstract: false, final true
inline void Clear() ;

/// @brief Method Contains, addr 0x496b120, size 0xac, virtual true, abstract: false, final true
inline bool Contains(::UnityEngine::UIElements::SortColumnDescription*  item) ;

/// @brief Method CopyTo, addr 0x496b1cc, size 0xbc, virtual true, abstract: false, final true
inline void CopyTo(::ArrayW<::UnityEngine::UIElements::SortColumnDescription*,::Array<::UnityEngine::UIElements::SortColumnDescription*>*>  array, int32_t  arrayIndex) ;

/// @brief Method GetEnumerator, addr 0x496ac94, size 0xa0, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::SortColumnDescription*>* GetEnumerator() ;

/// @brief Method Insert, addr 0x496adec, size 0x1bc, virtual false, abstract: false, final false
inline void Insert(int32_t  index, ::UnityEngine::UIElements::SortColumnDescription*  desc) ;

static inline ::UnityEngine::UIElements::SortColumnDescriptions* New_ctor() ;

/// @brief Method OnDescriptionChanged, addr 0x496b288, size 0x1c, virtual false, abstract: false, final false
inline void OnDescriptionChanged(::UnityEngine::UIElements::SortColumnDescription*  desc) ;

/// @brief Method Remove, addr 0x496afa8, size 0x178, virtual true, abstract: false, final true
inline bool Remove(::UnityEngine::UIElements::SortColumnDescription*  desc) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x496ad34, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

constexpr ::System::Action*& __cordl_internal_get_changed() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_changed() const;

constexpr ::System::Collections::Generic::IList_1<::UnityEngine::UIElements::SortColumnDescription*>*& __cordl_internal_get_m_Descriptions() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IList_1<::UnityEngine::UIElements::SortColumnDescription*>*> const& __cordl_internal_get_m_Descriptions() const;

constexpr void __cordl_internal_set_changed(::System::Action*  value) ;

constexpr void __cordl_internal_set_m_Descriptions(::System::Collections::Generic::IList_1<::UnityEngine::UIElements::SortColumnDescription*>*  value) ;

/// @brief Method .ctor, addr 0x49698e8, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_changed, addr 0x496ab5c, size 0x9c, virtual false, abstract: false, final false
inline void add_changed(::System::Action*  value) ;

/// @brief Method get_Count, addr 0x496b2a4, size 0xa0, virtual true, abstract: false, final true
inline int32_t get_Count() ;

/// @brief Method get_IsReadOnly, addr 0x496b344, size 0xa4, virtual true, abstract: false, final true
inline bool get_IsReadOnly() ;

/// @brief Convert to "::System::Collections::Generic::ICollection_1<::UnityEngine::UIElements::SortColumnDescription*>"
constexpr ::System::Collections::Generic::ICollection_1<::UnityEngine::UIElements::SortColumnDescription*>* i___System__Collections__Generic__ICollection_1___UnityEngine__UIElements__SortColumnDescription__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::SortColumnDescription*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::SortColumnDescription*>* i___System__Collections__Generic__IEnumerable_1___UnityEngine__UIElements__SortColumnDescription__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Method remove_changed, addr 0x496abf8, size 0x9c, virtual false, abstract: false, final false
inline void remove_changed(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SortColumnDescriptions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SortColumnDescriptions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SortColumnDescriptions(SortColumnDescriptions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SortColumnDescriptions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SortColumnDescriptions(SortColumnDescriptions const& ) = delete;

/// @brief Field m_Descriptions, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::IList_1<::UnityEngine::UIElements::SortColumnDescription*>*  ___m_Descriptions;

/// @brief Field changed, offset: 0x18, size: 0x8, def value: None
 ::System::Action*  ___changed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::SortColumnDescriptions, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::SortColumnDescriptions, ___m_Descriptions) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::SortColumnDescriptions, ___changed) == 0x18, "Offset mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::SortColumnDescriptions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::SortColumnDescriptions*, "UnityEngine.UIElements", "SortColumnDescriptions");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::__SortColumnDescriptions__UxmlObjectFactory_1, "UnityEngine.UIElements", "SortColumnDescriptions/UxmlObjectFactory`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::__SortColumnDescriptions__UxmlObjectTraits_1, "UnityEngine.UIElements", "SortColumnDescriptions/UxmlObjectTraits`1");
