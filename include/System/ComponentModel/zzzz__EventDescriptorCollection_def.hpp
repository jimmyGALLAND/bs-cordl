#pragma once
// IWYU pragma private; include "System/ComponentModel/EventDescriptorCollection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EventDescriptorCollection)
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IComparer;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IList;
}
namespace System::ComponentModel {
class EventDescriptor;
}
namespace System::ComponentModel {
class __EventDescriptorCollection__ArraySubsetEnumerator;
}
namespace System {
class Array;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class EventDescriptorCollection;
}
namespace System::ComponentModel {
class __EventDescriptorCollection__ArraySubsetEnumerator;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::EventDescriptorCollection);
MARK_REF_PTR_T(::System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator);
// Type: ::ArraySubsetEnumerator
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::EventDescriptorCollection::ArraySubsetEnumerator*
class CORDL_TYPE __EventDescriptorCollection__ArraySubsetEnumerator : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Current)) ::System::Object*  Current;

/// @brief Field _array, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__array, put=__cordl_internal_set__array)) ::System::Array*  _array;

/// @brief Field _current, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__current, put=__cordl_internal_set__current)) int32_t  _current;

/// @brief Field _total, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__total, put=__cordl_internal_set__total)) int32_t  _total;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Method MoveNext, addr 0x43c1540, size 0x24, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator* New_ctor(::System::Array*  array, int32_t  count) ;

/// @brief Method Reset, addr 0x43c1564, size 0xc, virtual true, abstract: false, final true
inline void Reset() ;

constexpr ::System::Array*& __cordl_internal_get__array() ;

constexpr ::cordl_internals::to_const_pointer<::System::Array*> const& __cordl_internal_get__array() const;

constexpr int32_t const& __cordl_internal_get__current() const;

constexpr int32_t& __cordl_internal_get__current() ;

constexpr int32_t const& __cordl_internal_get__total() const;

constexpr int32_t& __cordl_internal_get__total() ;

constexpr void __cordl_internal_set__array(::System::Array*  value) ;

constexpr void __cordl_internal_set__current(int32_t  value) ;

constexpr void __cordl_internal_set__total(int32_t  value) ;

/// @brief Method .ctor, addr 0x43c0fd4, size 0x34, virtual false, abstract: false, final false
inline void _ctor(::System::Array*  array, int32_t  count) ;

/// @brief Method get_Current, addr 0x43c1570, size 0x5c, virtual true, abstract: false, final true
inline ::System::Object* get_Current() ;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __EventDescriptorCollection__ArraySubsetEnumerator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__EventDescriptorCollection__ArraySubsetEnumerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__EventDescriptorCollection__ArraySubsetEnumerator(__EventDescriptorCollection__ArraySubsetEnumerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__EventDescriptorCollection__ArraySubsetEnumerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__EventDescriptorCollection__ArraySubsetEnumerator(__EventDescriptorCollection__ArraySubsetEnumerator const& ) = delete;

/// @brief Field _array, offset: 0x10, size: 0x8, def value: None
 ::System::Array*  ____array;

/// @brief Field _total, offset: 0x18, size: 0x4, def value: None
 int32_t  ____total;

/// @brief Field _current, offset: 0x1c, size: 0x4, def value: None
 int32_t  ____current;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator, ____array) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator, ____total) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator, ____current) == 0x1c, "Offset mismatch!");

} // namespace end def System::ComponentModel
// Type: System.ComponentModel::EventDescriptorCollection
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::EventDescriptorCollection*
class CORDL_TYPE EventDescriptorCollection : public ::System::Object {
public:
// Declarations
using ArraySubsetEnumerator = ::System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator;

 __declspec(property(get=get_Count, put=set_Count)) int32_t  Count;

/// @brief Field Empty, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_Empty, put=setStaticF_Empty)) ::System::ComponentModel::EventDescriptorCollection*  Empty;

 __declspec(property(get=get_Item)) ::System::ComponentModel::EventDescriptor*  Item[];

 __declspec(property(get=get_Item)) ::System::ComponentModel::EventDescriptor*  Item[];

 __declspec(property(get=System_Collections_ICollection_get_Count)) int32_t  System_Collections_ICollection_Count;

 __declspec(property(get=System_Collections_ICollection_get_IsSynchronized)) bool  System_Collections_ICollection_IsSynchronized;

 __declspec(property(get=System_Collections_ICollection_get_SyncRoot)) ::System::Object*  System_Collections_ICollection_SyncRoot;

 __declspec(property(get=System_Collections_IList_get_IsFixedSize)) bool  System_Collections_IList_IsFixedSize;

 __declspec(property(get=System_Collections_IList_get_IsReadOnly)) bool  System_Collections_IList_IsReadOnly;

 __declspec(property(get=System_Collections_IList_get_Item, put=System_Collections_IList_set_Item)) ::System::Object*  System_Collections_IList_Item[];

/// @brief Field <Count>k__BackingField, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__Count_k__BackingField, put=__cordl_internal_set__Count_k__BackingField)) int32_t  _Count_k__BackingField;

/// @brief Field _comparer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__comparer, put=__cordl_internal_set__comparer)) ::System::Collections::IComparer*  _comparer;

/// @brief Field _events, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__events, put=__cordl_internal_set__events)) ::ArrayW<::System::ComponentModel::EventDescriptor*,::Array<::System::ComponentModel::EventDescriptor*>*>  _events;

/// @brief Field _eventsOwned, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__eventsOwned, put=__cordl_internal_set__eventsOwned)) bool  _eventsOwned;

/// @brief Field _namedSort, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__namedSort, put=__cordl_internal_set__namedSort)) ::ArrayW<::StringW,::Array<::StringW>*>  _namedSort;

/// @brief Field _needSort, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get__needSort, put=__cordl_internal_set__needSort)) bool  _needSort;

/// @brief Field _readOnly, offset 0x2a, size 0x1 
 __declspec(property(get=__cordl_internal_get__readOnly, put=__cordl_internal_set__readOnly)) bool  _readOnly;

/// @brief Convert operator to "::System::Collections::ICollection"
constexpr operator  ::System::Collections::ICollection*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IList"
constexpr operator  ::System::Collections::IList*() noexcept;

/// @brief Method Add, addr 0x43c0700, size 0xc8, virtual false, abstract: false, final false
inline int32_t Add(::System::ComponentModel::EventDescriptor*  value) ;

/// @brief Method Clear, addr 0x43c08c8, size 0x4c, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Contains, addr 0x43c0914, size 0x18, virtual false, abstract: false, final false
inline bool Contains(::System::ComponentModel::EventDescriptor*  value) ;

/// @brief Method EnsureEventsOwned, addr 0x43c0640, size 0xac, virtual false, abstract: false, final false
inline void EnsureEventsOwned() ;

/// @brief Method EnsureSize, addr 0x43c07c8, size 0x100, virtual false, abstract: false, final false
inline void EnsureSize(int32_t  sizeNeeded) ;

/// @brief Method Find, addr 0x43c0c30, size 0x114, virtual true, abstract: false, final false
inline ::System::ComponentModel::EventDescriptor* Find(::StringW  name, bool  ignoreCase) ;

/// @brief Method GetEnumerator, addr 0x43c0f40, size 0x94, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* GetEnumerator() ;

/// @brief Method IndexOf, addr 0x43c092c, size 0x60, virtual false, abstract: false, final false
inline int32_t IndexOf(::System::ComponentModel::EventDescriptor*  value) ;

/// @brief Method Insert, addr 0x43c0d44, size 0xe8, virtual false, abstract: false, final false
inline void Insert(int32_t  index, ::System::ComponentModel::EventDescriptor*  value) ;

/// @brief Method InternalSort, addr 0x43c09c8, size 0x268, virtual false, abstract: false, final false
inline void InternalSort(::ArrayW<::StringW,::Array<::StringW>*>  names) ;

/// @brief Method InternalSort, addr 0x43c1008, size 0x78, virtual false, abstract: false, final false
inline void InternalSort(::System::Collections::IComparer*  sorter) ;

static inline ::System::ComponentModel::EventDescriptorCollection* New_ctor(::ArrayW<::System::ComponentModel::EventDescriptor*,::Array<::System::ComponentModel::EventDescriptor*>*>  events) ;

static inline ::System::ComponentModel::EventDescriptorCollection* New_ctor(::ArrayW<::System::ComponentModel::EventDescriptor*,::Array<::System::ComponentModel::EventDescriptor*>*>  events, bool  readOnly) ;

/// @brief Method Remove, addr 0x43c0e2c, size 0x68, virtual false, abstract: false, final false
inline void Remove(::System::ComponentModel::EventDescriptor*  value) ;

/// @brief Method RemoveAt, addr 0x43c0e94, size 0xac, virtual false, abstract: false, final false
inline void RemoveAt(int32_t  index) ;

/// @brief Method System.Collections.ICollection.CopyTo, addr 0x43c098c, size 0x3c, virtual true, abstract: false, final true
inline void System_Collections_ICollection_CopyTo(::System::Array*  array, int32_t  index) ;

/// @brief Method System.Collections.ICollection.get_Count, addr 0x43c1090, size 0x8, virtual true, abstract: false, final true
inline int32_t System_Collections_ICollection_get_Count() ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized, addr 0x43c1080, size 0x8, virtual true, abstract: false, final true
inline bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot, addr 0x43c1088, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x43c1098, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.IList.Add, addr 0x43c1214, size 0x84, virtual true, abstract: false, final true
inline int32_t System_Collections_IList_Add(::System::Object*  value) ;

/// @brief Method System.Collections.IList.Clear, addr 0x43c1328, size 0x4, virtual true, abstract: false, final true
inline void System_Collections_IList_Clear() ;

/// @brief Method System.Collections.IList.Contains, addr 0x43c1298, size 0x90, virtual true, abstract: false, final true
inline bool System_Collections_IList_Contains(::System::Object*  value) ;

/// @brief Method System.Collections.IList.IndexOf, addr 0x43c132c, size 0x84, virtual true, abstract: false, final true
inline int32_t System_Collections_IList_IndexOf(::System::Object*  value) ;

/// @brief Method System.Collections.IList.Insert, addr 0x43c13b0, size 0x94, virtual true, abstract: false, final true
inline void System_Collections_IList_Insert(int32_t  index, ::System::Object*  value) ;

/// @brief Method System.Collections.IList.Remove, addr 0x43c1444, size 0x84, virtual true, abstract: false, final true
inline void System_Collections_IList_Remove(::System::Object*  value) ;

/// @brief Method System.Collections.IList.RemoveAt, addr 0x43c14c8, size 0x4, virtual true, abstract: false, final true
inline void System_Collections_IList_RemoveAt(int32_t  index) ;

/// @brief Method System.Collections.IList.get_IsFixedSize, addr 0x43c14d4, size 0x8, virtual true, abstract: false, final true
inline bool System_Collections_IList_get_IsFixedSize() ;

/// @brief Method System.Collections.IList.get_IsReadOnly, addr 0x43c14cc, size 0x8, virtual true, abstract: false, final true
inline bool System_Collections_IList_get_IsReadOnly() ;

/// @brief Method System.Collections.IList.get_Item, addr 0x43c109c, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IList_get_Item(int32_t  index) ;

/// @brief Method System.Collections.IList.set_Item, addr 0x43c10ac, size 0x168, virtual true, abstract: false, final true
inline void System_Collections_IList_set_Item(int32_t  index, ::System::Object*  value) ;

constexpr int32_t const& __cordl_internal_get__Count_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Count_k__BackingField() ;

constexpr ::System::Collections::IComparer*& __cordl_internal_get__comparer() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::IComparer*> const& __cordl_internal_get__comparer() const;

constexpr ::ArrayW<::System::ComponentModel::EventDescriptor*,::Array<::System::ComponentModel::EventDescriptor*>*> const& __cordl_internal_get__events() const;

constexpr ::ArrayW<::System::ComponentModel::EventDescriptor*,::Array<::System::ComponentModel::EventDescriptor*>*>& __cordl_internal_get__events() ;

constexpr bool const& __cordl_internal_get__eventsOwned() const;

constexpr bool& __cordl_internal_get__eventsOwned() ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& __cordl_internal_get__namedSort() const;

constexpr ::ArrayW<::StringW,::Array<::StringW>*>& __cordl_internal_get__namedSort() ;

constexpr bool const& __cordl_internal_get__needSort() const;

constexpr bool& __cordl_internal_get__needSort() ;

constexpr bool const& __cordl_internal_get__readOnly() const;

constexpr bool& __cordl_internal_get__readOnly() ;

constexpr void __cordl_internal_set__Count_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__comparer(::System::Collections::IComparer*  value) ;

constexpr void __cordl_internal_set__events(::ArrayW<::System::ComponentModel::EventDescriptor*,::Array<::System::ComponentModel::EventDescriptor*>*>  value) ;

constexpr void __cordl_internal_set__eventsOwned(bool  value) ;

constexpr void __cordl_internal_set__namedSort(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

constexpr void __cordl_internal_set__needSort(bool  value) ;

constexpr void __cordl_internal_set__readOnly(bool  value) ;

/// @brief Method .ctor, addr 0x43c04c8, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<::System::ComponentModel::EventDescriptor*,::Array<::System::ComponentModel::EventDescriptor*>*>  events) ;

/// @brief Method .ctor, addr 0x43c0588, size 0x24, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<::System::ComponentModel::EventDescriptor*,::Array<::System::ComponentModel::EventDescriptor*>*>  events, bool  readOnly) ;

static inline ::System::ComponentModel::EventDescriptorCollection* getStaticF_Empty() ;

/// @brief Method get_Count, addr 0x43c05ac, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_Item, addr 0x43c05bc, size 0x84, virtual true, abstract: false, final false
inline ::System::ComponentModel::EventDescriptor* get_Item(int32_t  index) ;

/// @brief Method get_Item, addr 0x43c06ec, size 0x14, virtual true, abstract: false, final false
inline ::System::ComponentModel::EventDescriptor* get_Item(::StringW  name) ;

/// @brief Convert to "::System::Collections::ICollection"
constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IList"
constexpr ::System::Collections::IList* i___System__Collections__IList() noexcept;

static inline void setStaticF_Empty(::System::ComponentModel::EventDescriptorCollection*  value) ;

/// @brief Method set_Count, addr 0x43c05b4, size 0x8, virtual false, abstract: false, final false
inline void set_Count(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EventDescriptorCollection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EventDescriptorCollection", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EventDescriptorCollection(EventDescriptorCollection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EventDescriptorCollection", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EventDescriptorCollection(EventDescriptorCollection const& ) = delete;

/// @brief Field _events, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::System::ComponentModel::EventDescriptor*,::Array<::System::ComponentModel::EventDescriptor*>*>  ____events;

/// @brief Field _namedSort, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::StringW,::Array<::StringW>*>  ____namedSort;

/// @brief Field _comparer, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::IComparer*  ____comparer;

/// @brief Field _eventsOwned, offset: 0x28, size: 0x1, def value: None
 bool  ____eventsOwned;

/// @brief Field _needSort, offset: 0x29, size: 0x1, def value: None
 bool  ____needSort;

/// @brief Field _readOnly, offset: 0x2a, size: 0x1, def value: None
 bool  ____readOnly;

/// @brief Field <Count>k__BackingField, offset: 0x2c, size: 0x4, def value: None
 int32_t  ____Count_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::EventDescriptorCollection, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::EventDescriptorCollection, ____events) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::EventDescriptorCollection, ____namedSort) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::EventDescriptorCollection, ____comparer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::EventDescriptorCollection, ____eventsOwned) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::EventDescriptorCollection, ____needSort) == 0x29, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::EventDescriptorCollection, ____readOnly) == 0x2a, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::EventDescriptorCollection, ____Count_k__BackingField) == 0x2c, "Offset mismatch!");

} // namespace end def System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::EventDescriptorCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::EventDescriptorCollection*, "System.ComponentModel", "EventDescriptorCollection");
NEED_NO_BOX(::System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator*, "System.ComponentModel", "EventDescriptorCollection/ArraySubsetEnumerator");
