#pragma once
// IWYU pragma private; include "System/Collections/Stack.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Stack)
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class __Stack__StackDebugView;
}
namespace System::Collections {
class __Stack__StackEnumerator;
}
namespace System {
class Array;
}
namespace System {
class ICloneable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Collections {
class Stack;
}
namespace System::Collections {
class __Stack__StackDebugView;
}
namespace System::Collections {
class __Stack__StackEnumerator;
}
// Write type traits
MARK_REF_PTR_T(::System::Collections::Stack);
MARK_REF_PTR_T(::System::Collections::__Stack__StackDebugView);
MARK_REF_PTR_T(::System::Collections::__Stack__StackEnumerator);
// Type: ::StackEnumerator
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections {
// Is value type: false
// CS Name: ::Stack::StackEnumerator*
class CORDL_TYPE __Stack__StackEnumerator : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Current)) ::System::Object*  Current;

/// @brief Field _currentElement, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentElement, put=__cordl_internal_set__currentElement)) ::System::Object*  _currentElement;

/// @brief Field _index, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__index, put=__cordl_internal_set__index)) int32_t  _index;

/// @brief Field _stack, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__stack, put=__cordl_internal_set__stack)) ::System::Collections::Stack*  _stack;

/// @brief Field _version, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__version, put=__cordl_internal_set__version)) int32_t  _version;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::ICloneable"
constexpr operator  ::System::ICloneable*() noexcept;

/// @brief Method Clone, addr 0x3d2f69c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* Clone() ;

/// @brief Method MoveNext, addr 0x3d2f6a4, size 0x108, virtual true, abstract: false, final false
inline bool MoveNext() ;

static inline ::System::Collections::__Stack__StackEnumerator* New_ctor(::System::Collections::Stack*  stack) ;

/// @brief Method Reset, addr 0x3d2f838, size 0x7c, virtual true, abstract: false, final false
inline void Reset() ;

constexpr ::System::Object*& __cordl_internal_get__currentElement() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__currentElement() const;

constexpr int32_t const& __cordl_internal_get__index() const;

constexpr int32_t& __cordl_internal_get__index() ;

constexpr ::System::Collections::Stack*& __cordl_internal_get__stack() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Stack*> const& __cordl_internal_get__stack() const;

constexpr int32_t const& __cordl_internal_get__version() const;

constexpr int32_t& __cordl_internal_get__version() ;

constexpr void __cordl_internal_set__currentElement(::System::Object*  value) ;

constexpr void __cordl_internal_set__index(int32_t  value) ;

constexpr void __cordl_internal_set__stack(::System::Collections::Stack*  value) ;

constexpr void __cordl_internal_set__version(int32_t  value) ;

/// @brief Method .ctor, addr 0x3d2f440, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Stack*  stack) ;

/// @brief Method get_Current, addr 0x3d2f7ac, size 0x8c, virtual true, abstract: false, final false
inline ::System::Object* get_Current() ;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __Stack__StackEnumerator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__Stack__StackEnumerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Stack__StackEnumerator(__Stack__StackEnumerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Stack__StackEnumerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Stack__StackEnumerator(__Stack__StackEnumerator const& ) = delete;

/// @brief Field _stack, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Stack*  ____stack;

/// @brief Field _index, offset: 0x18, size: 0x4, def value: None
 int32_t  ____index;

/// @brief Field _version, offset: 0x1c, size: 0x4, def value: None
 int32_t  ____version;

/// @brief Field _currentElement, offset: 0x20, size: 0x8, def value: None
 ::System::Object*  ____currentElement;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::__Stack__StackEnumerator, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Collections::__Stack__StackEnumerator, ____stack) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Collections::__Stack__StackEnumerator, ____index) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Collections::__Stack__StackEnumerator, ____version) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Collections::__Stack__StackEnumerator, ____currentElement) == 0x20, "Offset mismatch!");

} // namespace end def System::Collections
// Type: ::StackDebugView
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections {
// Is value type: false
// CS Name: ::Stack::StackDebugView*
class CORDL_TYPE __Stack__StackDebugView : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr __Stack__StackDebugView() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__Stack__StackDebugView", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Stack__StackDebugView(__Stack__StackDebugView && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Stack__StackDebugView", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Stack__StackDebugView(__Stack__StackDebugView const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::__Stack__StackDebugView, 0x10>, "Size mismatch!");

} // namespace end def System::Collections
// Type: System.Collections::Stack
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections {
// Is value type: false
// CS Name: ::System.Collections::Stack*
class CORDL_TYPE Stack : public ::System::Object {
public:
// Declarations
using StackDebugView = ::System::Collections::__Stack__StackDebugView;

using StackEnumerator = ::System::Collections::__Stack__StackEnumerator;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_IsSynchronized)) bool  IsSynchronized;

 __declspec(property(get=get_SyncRoot)) ::System::Object*  SyncRoot;

/// @brief Field _array, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__array, put=__cordl_internal_set__array)) ::ArrayW<::System::Object*,::Array<::System::Object*>*>  _array;

/// @brief Field _size, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__size, put=__cordl_internal_set__size)) int32_t  _size;

/// @brief Field _syncRoot, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__syncRoot, put=__cordl_internal_set__syncRoot)) ::System::Object*  _syncRoot;

/// @brief Field _version, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__version, put=__cordl_internal_set__version)) int32_t  _version;

/// @brief Convert operator to "::System::Collections::ICollection"
constexpr operator  ::System::Collections::ICollection*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::ICloneable"
constexpr operator  ::System::ICloneable*() noexcept;

/// @brief Method Clear, addr 0x3d2f080, size 0x30, virtual true, abstract: false, final false
inline void Clear() ;

/// @brief Method Clone, addr 0x3d2f0b0, size 0x90, virtual true, abstract: false, final false
inline ::System::Object* Clone() ;

/// @brief Method CopyTo, addr 0x3d2f140, size 0x2a8, virtual true, abstract: false, final false
inline void CopyTo(::System::Array*  array, int32_t  index) ;

/// @brief Method GetEnumerator, addr 0x3d2f3e8, size 0x58, virtual true, abstract: false, final false
inline ::System::Collections::IEnumerator* GetEnumerator() ;

static inline ::System::Collections::Stack* New_ctor() ;

static inline ::System::Collections::Stack* New_ctor(int32_t  initialCapacity) ;

/// @brief Method Peek, addr 0x3d2f480, size 0x84, virtual true, abstract: false, final false
inline ::System::Object* Peek() ;

/// @brief Method Pop, addr 0x3d2f504, size 0x94, virtual true, abstract: false, final false
inline ::System::Object* Pop() ;

/// @brief Method Push, addr 0x3d2f598, size 0x104, virtual true, abstract: false, final false
inline void Push(::System::Object*  obj) ;

constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*> const& __cordl_internal_get__array() const;

constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*>& __cordl_internal_get__array() ;

constexpr int32_t const& __cordl_internal_get__size() const;

constexpr int32_t& __cordl_internal_get__size() ;

constexpr ::System::Object*& __cordl_internal_get__syncRoot() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__syncRoot() const;

constexpr int32_t const& __cordl_internal_get__version() const;

constexpr int32_t& __cordl_internal_get__version() ;

constexpr void __cordl_internal_set__array(::ArrayW<::System::Object*,::Array<::System::Object*>*>  value) ;

constexpr void __cordl_internal_set__size(int32_t  value) ;

constexpr void __cordl_internal_set__syncRoot(::System::Object*  value) ;

constexpr void __cordl_internal_set__version(int32_t  value) ;

/// @brief Method .ctor, addr 0x3d2eedc, size 0x5c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x3d2ef38, size 0xc8, virtual false, abstract: false, final false
inline void _ctor(int32_t  initialCapacity) ;

/// @brief Method get_Count, addr 0x3d2f000, size 0x8, virtual true, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_IsSynchronized, addr 0x3d2f008, size 0x8, virtual true, abstract: false, final false
inline bool get_IsSynchronized() ;

/// @brief Method get_SyncRoot, addr 0x3d2f010, size 0x70, virtual true, abstract: false, final false
inline ::System::Object* get_SyncRoot() ;

/// @brief Convert to "::System::Collections::ICollection"
constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Stack() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Stack", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Stack(Stack && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Stack", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Stack(Stack const& ) = delete;

/// @brief Field _array, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::System::Object*,::Array<::System::Object*>*>  ____array;

/// @brief Field _size, offset: 0x18, size: 0x4, def value: None
 int32_t  ____size;

/// @brief Field _version, offset: 0x1c, size: 0x4, def value: None
 int32_t  ____version;

/// @brief Field _syncRoot, offset: 0x20, size: 0x8, def value: None
 ::System::Object*  ____syncRoot;

/// @brief Field _defaultCapacity offset 0xffffffff size 0x4
static constexpr int32_t  _defaultCapacity{static_cast<int32_t>(0xa)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::Stack, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Collections::Stack, ____array) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Stack, ____size) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Stack, ____version) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Stack, ____syncRoot) == 0x20, "Offset mismatch!");

} // namespace end def System::Collections
NEED_NO_BOX(::System::Collections::Stack);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Stack*, "System.Collections", "Stack");
NEED_NO_BOX(::System::Collections::__Stack__StackDebugView);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::__Stack__StackDebugView*, "System.Collections", "Stack/StackDebugView");
NEED_NO_BOX(::System::Collections::__Stack__StackEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::__Stack__StackEnumerator*, "System.Collections", "Stack/StackEnumerator");
