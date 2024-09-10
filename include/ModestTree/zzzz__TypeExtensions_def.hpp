#pragma once
// IWYU pragma private; include "ModestTree/TypeExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TypeExtensions)
namespace ModestTree {
class __TypeExtensions___GetParentTypes_d__28;
}
namespace ModestTree {
class __TypeExtensions____c__DisplayClass35_0;
}
namespace ModestTree {
class __TypeExtensions____c__DisplayClass35_1;
}
namespace ModestTree {
class __TypeExtensions____c__DisplayClass39_0;
}
namespace ModestTree {
class __TypeExtensions____c__DisplayClass39_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Reflection {
class ConstructorInfo;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Reflection {
class ParameterInfo;
}
namespace System::Reflection {
class PropertyInfo;
}
namespace System {
class Attribute;
}
namespace System {
class Delegate;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace ModestTree {
class TypeExtensions;
}
namespace ModestTree {
class __TypeExtensions___GetParentTypes_d__28;
}
namespace ModestTree {
class __TypeExtensions____c__DisplayClass35_0;
}
namespace ModestTree {
class __TypeExtensions____c__DisplayClass35_1;
}
namespace ModestTree {
class __TypeExtensions____c__DisplayClass39_0;
}
namespace ModestTree {
class __TypeExtensions____c__DisplayClass39_1;
}
// Write type traits
MARK_REF_PTR_T(::ModestTree::TypeExtensions);
MARK_REF_PTR_T(::ModestTree::__TypeExtensions___GetParentTypes_d__28);
MARK_REF_PTR_T(::ModestTree::__TypeExtensions____c__DisplayClass35_0);
MARK_REF_PTR_T(::ModestTree::__TypeExtensions____c__DisplayClass35_1);
MARK_REF_PTR_T(::ModestTree::__TypeExtensions____c__DisplayClass39_0);
MARK_REF_PTR_T(::ModestTree::__TypeExtensions____c__DisplayClass39_1);
// Type: ::<>c__DisplayClass35_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace ModestTree {
// Is value type: false
// CS Name: ::TypeExtensions::<>c__DisplayClass35_0*
class CORDL_TYPE __TypeExtensions____c__DisplayClass35_0 : public ::System::Object {
public:
// Declarations
/// @brief Field attributeTypes, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_attributeTypes, put=__cordl_internal_set_attributeTypes)) ::ArrayW<::System::Type*,::Array<::System::Type*>*>  attributeTypes;

static inline ::ModestTree::__TypeExtensions____c__DisplayClass35_0* New_ctor() ;

/// @brief Method <AllAttributes>b__0, addr 0x4a5fdd4, size 0xd4, virtual false, abstract: false, final false
inline bool _AllAttributes_b__0(::System::Attribute*  a) ;

constexpr ::ArrayW<::System::Type*,::Array<::System::Type*>*> const& __cordl_internal_get_attributeTypes() const;

constexpr ::ArrayW<::System::Type*,::Array<::System::Type*>*>& __cordl_internal_get_attributeTypes() ;

constexpr void __cordl_internal_set_attributeTypes(::ArrayW<::System::Type*,::Array<::System::Type*>*>  value) ;

/// @brief Method .ctor, addr 0x4a5fad4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __TypeExtensions____c__DisplayClass35_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__TypeExtensions____c__DisplayClass35_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TypeExtensions____c__DisplayClass35_0(__TypeExtensions____c__DisplayClass35_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TypeExtensions____c__DisplayClass35_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TypeExtensions____c__DisplayClass35_0(__TypeExtensions____c__DisplayClass35_0 const& ) = delete;

/// @brief Field attributeTypes, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::System::Type*,::Array<::System::Type*>*>  ___attributeTypes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ModestTree::__TypeExtensions____c__DisplayClass35_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::ModestTree::__TypeExtensions____c__DisplayClass35_0, ___attributeTypes) == 0x10, "Offset mismatch!");

} // namespace end def ModestTree
// Type: ::<>c__DisplayClass35_1
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace ModestTree {
// Is value type: false
// CS Name: ::TypeExtensions::<>c__DisplayClass35_1*
class CORDL_TYPE __TypeExtensions____c__DisplayClass35_1 : public ::System::Object {
public:
// Declarations
/// @brief Field a, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_a, put=__cordl_internal_set_a)) ::System::Attribute*  a;

static inline ::ModestTree::__TypeExtensions____c__DisplayClass35_1* New_ctor() ;

/// @brief Method <AllAttributes>b__1, addr 0x4a5feb0, size 0x78, virtual false, abstract: false, final false
inline bool _AllAttributes_b__1(::System::Type*  x) ;

constexpr ::System::Attribute*& __cordl_internal_get_a() ;

constexpr ::cordl_internals::to_const_pointer<::System::Attribute*> const& __cordl_internal_get_a() const;

constexpr void __cordl_internal_set_a(::System::Attribute*  value) ;

/// @brief Method .ctor, addr 0x4a5fea8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __TypeExtensions____c__DisplayClass35_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__TypeExtensions____c__DisplayClass35_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TypeExtensions____c__DisplayClass35_1(__TypeExtensions____c__DisplayClass35_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TypeExtensions____c__DisplayClass35_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TypeExtensions____c__DisplayClass35_1(__TypeExtensions____c__DisplayClass35_1 const& ) = delete;

/// @brief Field a, offset: 0x10, size: 0x8, def value: None
 ::System::Attribute*  ___a;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ModestTree::__TypeExtensions____c__DisplayClass35_1, 0x18>, "Size mismatch!");

static_assert(offsetof(::ModestTree::__TypeExtensions____c__DisplayClass35_1, ___a) == 0x10, "Offset mismatch!");

} // namespace end def ModestTree
// Type: ::<>c__DisplayClass39_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace ModestTree {
// Is value type: false
// CS Name: ::TypeExtensions::<>c__DisplayClass39_0*
class CORDL_TYPE __TypeExtensions____c__DisplayClass39_0 : public ::System::Object {
public:
// Declarations
/// @brief Field attributeTypes, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_attributeTypes, put=__cordl_internal_set_attributeTypes)) ::ArrayW<::System::Type*,::Array<::System::Type*>*>  attributeTypes;

static inline ::ModestTree::__TypeExtensions____c__DisplayClass39_0* New_ctor() ;

/// @brief Method <AllAttributes>b__0, addr 0x4a5ff28, size 0xd4, virtual false, abstract: false, final false
inline bool _AllAttributes_b__0(::System::Attribute*  a) ;

constexpr ::ArrayW<::System::Type*,::Array<::System::Type*>*> const& __cordl_internal_get_attributeTypes() const;

constexpr ::ArrayW<::System::Type*,::Array<::System::Type*>*>& __cordl_internal_get_attributeTypes() ;

constexpr void __cordl_internal_set_attributeTypes(::ArrayW<::System::Type*,::Array<::System::Type*>*>  value) ;

/// @brief Method .ctor, addr 0x4a5fcb0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __TypeExtensions____c__DisplayClass39_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__TypeExtensions____c__DisplayClass39_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TypeExtensions____c__DisplayClass39_0(__TypeExtensions____c__DisplayClass39_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TypeExtensions____c__DisplayClass39_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TypeExtensions____c__DisplayClass39_0(__TypeExtensions____c__DisplayClass39_0 const& ) = delete;

/// @brief Field attributeTypes, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::System::Type*,::Array<::System::Type*>*>  ___attributeTypes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ModestTree::__TypeExtensions____c__DisplayClass39_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::ModestTree::__TypeExtensions____c__DisplayClass39_0, ___attributeTypes) == 0x10, "Offset mismatch!");

} // namespace end def ModestTree
// Type: ::<>c__DisplayClass39_1
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace ModestTree {
// Is value type: false
// CS Name: ::TypeExtensions::<>c__DisplayClass39_1*
class CORDL_TYPE __TypeExtensions____c__DisplayClass39_1 : public ::System::Object {
public:
// Declarations
/// @brief Field a, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_a, put=__cordl_internal_set_a)) ::System::Attribute*  a;

static inline ::ModestTree::__TypeExtensions____c__DisplayClass39_1* New_ctor() ;

/// @brief Method <AllAttributes>b__1, addr 0x4a60004, size 0x78, virtual false, abstract: false, final false
inline bool _AllAttributes_b__1(::System::Type*  x) ;

constexpr ::System::Attribute*& __cordl_internal_get_a() ;

constexpr ::cordl_internals::to_const_pointer<::System::Attribute*> const& __cordl_internal_get_a() const;

constexpr void __cordl_internal_set_a(::System::Attribute*  value) ;

/// @brief Method .ctor, addr 0x4a5fffc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __TypeExtensions____c__DisplayClass39_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__TypeExtensions____c__DisplayClass39_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TypeExtensions____c__DisplayClass39_1(__TypeExtensions____c__DisplayClass39_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TypeExtensions____c__DisplayClass39_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TypeExtensions____c__DisplayClass39_1(__TypeExtensions____c__DisplayClass39_1 const& ) = delete;

/// @brief Field a, offset: 0x10, size: 0x8, def value: None
 ::System::Attribute*  ___a;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ModestTree::__TypeExtensions____c__DisplayClass39_1, 0x18>, "Size mismatch!");

static_assert(offsetof(::ModestTree::__TypeExtensions____c__DisplayClass39_1, ___a) == 0x10, "Offset mismatch!");

} // namespace end def ModestTree
// Type: ::<GetParentTypes>d__28
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, packing: None, specified_packing: None }
namespace ModestTree {
// Is value type: false
// CS Name: ::TypeExtensions::<GetParentTypes>d__28*
class CORDL_TYPE __TypeExtensions___GetParentTypes_d__28 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Type__get_Current)) ::System::Type*  System_Collections_Generic_IEnumerator_System_Type__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Type*  __2__current;

/// @brief Field <>3__type, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___3__type, put=__cordl_internal_set___3__type)) ::System::Type*  __3__type;

/// @brief Field <>7__wrap1, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get___7__wrap1, put=__cordl_internal_set___7__wrap1)) ::System::Collections::Generic::IEnumerator_1<::System::Type*>*  __7__wrap1;

/// @brief Field <>l__initialThreadId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field type, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_type, put=__cordl_internal_set_type)) ::System::Type*  type;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Type*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::Type*>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Type*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Type*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x4a60098, size 0x4e0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::ModestTree::__TypeExtensions___GetParentTypes_d__28* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator, addr 0x4a60670, size 0x9c, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::System::Type*>* System_Collections_Generic_IEnumerable_System_Type__GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Type>.get_Current, addr 0x4a60628, size 0x8, virtual true, abstract: false, final true
inline ::System::Type* System_Collections_Generic_IEnumerator_System_Type__get_Current() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x4a6070c, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x4a60630, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x4a60668, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x4a6007c, size 0x1c, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Type*& __cordl_internal_get___2__current() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get___2__current() const;

constexpr ::System::Type*& __cordl_internal_get___3__type() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get___3__type() const;

constexpr ::System::Collections::Generic::IEnumerator_1<::System::Type*>*& __cordl_internal_get___7__wrap1() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::System::Type*>*> const& __cordl_internal_get___7__wrap1() const;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr ::System::Type*& __cordl_internal_get_type() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_type() const;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Type*  value) ;

constexpr void __cordl_internal_set___3__type(::System::Type*  value) ;

constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::System::Type*>*  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

constexpr void __cordl_internal_set_type(::System::Type*  value) ;

/// @brief Method <>m__Finally1, addr 0x4a60578, size 0xb0, virtual false, abstract: false, final false
inline void __m__Finally1() ;

/// @brief Method .ctor, addr 0x4a5f75c, size 0x34, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Type*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Type*>* i___System__Collections__Generic__IEnumerable_1___System__Type__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Type*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Type*>* i___System__Collections__Generic__IEnumerator_1___System__Type__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __TypeExtensions___GetParentTypes_d__28() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__TypeExtensions___GetParentTypes_d__28", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TypeExtensions___GetParentTypes_d__28(__TypeExtensions___GetParentTypes_d__28 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TypeExtensions___GetParentTypes_d__28", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TypeExtensions___GetParentTypes_d__28(__TypeExtensions___GetParentTypes_d__28 const& ) = delete;

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Type*  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field type, offset: 0x28, size: 0x8, def value: None
 ::System::Type*  ___type;

/// @brief Field <>3__type, offset: 0x30, size: 0x8, def value: None
 ::System::Type*  _____3__type;

/// @brief Field <>7__wrap1, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<::System::Type*>*  _____7__wrap1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ModestTree::__TypeExtensions___GetParentTypes_d__28, 0x40>, "Size mismatch!");

static_assert(offsetof(::ModestTree::__TypeExtensions___GetParentTypes_d__28, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ModestTree::__TypeExtensions___GetParentTypes_d__28, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ModestTree::__TypeExtensions___GetParentTypes_d__28, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::ModestTree::__TypeExtensions___GetParentTypes_d__28, ___type) == 0x28, "Offset mismatch!");

static_assert(offsetof(::ModestTree::__TypeExtensions___GetParentTypes_d__28, _____3__type) == 0x30, "Offset mismatch!");

static_assert(offsetof(::ModestTree::__TypeExtensions___GetParentTypes_d__28, _____7__wrap1) == 0x38, "Offset mismatch!");

} // namespace end def ModestTree
// Type: ModestTree::TypeExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace ModestTree {
// Is value type: false
// CS Name: ::ModestTree::TypeExtensions*
class CORDL_TYPE TypeExtensions : public ::System::Object {
public:
// Declarations
using _GetParentTypes_d__28 = ::ModestTree::__TypeExtensions___GetParentTypes_d__28;

using __c__DisplayClass35_0 = ::ModestTree::__TypeExtensions____c__DisplayClass35_0;

using __c__DisplayClass35_1 = ::ModestTree::__TypeExtensions____c__DisplayClass35_1;

using __c__DisplayClass39_0 = ::ModestTree::__TypeExtensions____c__DisplayClass39_0;

using __c__DisplayClass39_1 = ::ModestTree::__TypeExtensions____c__DisplayClass39_1;

/// @brief Field _interfaces, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF__interfaces, put=setStaticF__interfaces)) ::System::Collections::Generic::Dictionary_2<::System::Type*,::ArrayW<::System::Type*,::Array<::System::Type*>*>>*  _interfaces;

/// @brief Field _isClosedGenericType, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF__isClosedGenericType, put=setStaticF__isClosedGenericType)) ::System::Collections::Generic::Dictionary_2<::System::Type*,bool>*  _isClosedGenericType;

/// @brief Field _isOpenGenericType, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF__isOpenGenericType, put=setStaticF__isOpenGenericType)) ::System::Collections::Generic::Dictionary_2<::System::Type*,bool>*  _isOpenGenericType;

/// @brief Field _isValueType, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF__isValueType, put=setStaticF__isValueType)) ::System::Collections::Generic::Dictionary_2<::System::Type*,bool>*  _isValueType;

/// @brief Method AllAttributes, addr 0x4a5f980, size 0x154, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::System::Attribute*>* AllAttributes(::System::Reflection::MemberInfo*  provider, ::ArrayW<::System::Type*,::Array<::System::Type*>*>  attributeTypes) ;

/// @brief Method AllAttributes, addr 0x4a5fb5c, size 0x154, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::System::Attribute*>* AllAttributes(::System::Reflection::ParameterInfo*  provider, ::ArrayW<::System::Type*,::Array<::System::Type*>*>  attributeTypes) ;

/// @brief Method AllAttributes, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Collections::Generic::IEnumerable_1<T>* AllAttributes(::System::Reflection::MemberInfo*  provider) ;

/// @brief Method AllAttributes, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Collections::Generic::IEnumerable_1<T>* AllAttributes(::System::Reflection::ParameterInfo*  provider) ;

/// @brief Method BaseType, addr 0x4a5f3e0, size 0x20, virtual false, abstract: false, final false
static inline ::System::Type* BaseType(::System::Type*  type) ;

/// @brief Method Constructors, addr 0x4a5f4e4, size 0x24, virtual false, abstract: false, final false
static inline ::ArrayW<::System::Reflection::ConstructorInfo*,::Array<::System::Reflection::ConstructorInfo*>*> Constructors(::System::Type*  type) ;

/// @brief Method ContainsGenericParameters, addr 0x4a5f468, size 0x20, virtual false, abstract: false, final false
static inline bool ContainsGenericParameters(::System::Type*  type) ;

/// @brief Method DeclaredInstanceFields, addr 0x4a5f3bc, size 0x24, virtual false, abstract: false, final false
static inline ::ArrayW<::System::Reflection::FieldInfo*,::Array<::System::Reflection::FieldInfo*>*> DeclaredInstanceFields(::System::Type*  type) ;

/// @brief Method DeclaredInstanceMethods, addr 0x4a5f374, size 0x24, virtual false, abstract: false, final false
static inline ::ArrayW<::System::Reflection::MethodInfo*,::Array<::System::Reflection::MethodInfo*>*> DeclaredInstanceMethods(::System::Type*  type) ;

/// @brief Method DeclaredInstanceProperties, addr 0x4a5f398, size 0x24, virtual false, abstract: false, final false
static inline ::ArrayW<::System::Reflection::PropertyInfo*,::Array<::System::Reflection::PropertyInfo*>*> DeclaredInstanceProperties(::System::Type*  type) ;

/// @brief Method DerivesFrom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool DerivesFrom(::System::Type*  a) ;

/// @brief Method DerivesFrom, addr 0x4a5d618, size 0xb0, virtual false, abstract: false, final false
static inline bool DerivesFrom(::System::Type*  a, ::System::Type*  b) ;

/// @brief Method DerivesFromOrEqual, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool DerivesFromOrEqual(::System::Type*  a) ;

/// @brief Method DerivesFromOrEqual, addr 0x4a5d87c, size 0xa0, virtual false, abstract: false, final false
static inline bool DerivesFromOrEqual(::System::Type*  a, ::System::Type*  b) ;

/// @brief Method GenericArguments, addr 0x4a5f4c4, size 0x20, virtual false, abstract: false, final false
static inline ::ArrayW<::System::Type*,::Array<::System::Type*>*> GenericArguments(::System::Type*  type) ;

/// @brief Method GetAttribute, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T GetAttribute(::System::Reflection::MemberInfo*  provider) ;

/// @brief Method GetDefaultValue, addr 0x4a5f508, size 0x74, virtual false, abstract: false, final false
static inline ::System::Object* GetDefaultValue(::System::Type*  type) ;

/// @brief Method GetParentTypes, addr 0x4a5f6ec, size 0x70, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* GetParentTypes(::System::Type*  type) ;

/// @brief Method HasAttribute, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool HasAttribute(::System::Reflection::MemberInfo*  provider) ;

/// @brief Method HasAttribute, addr 0x4a5f900, size 0x80, virtual false, abstract: false, final false
static inline bool HasAttribute(::System::Reflection::MemberInfo*  provider, ::ArrayW<::System::Type*,::Array<::System::Type*>*>  attributeTypes) ;

/// @brief Method HasAttribute, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool HasAttribute(::System::Reflection::ParameterInfo*  provider) ;

/// @brief Method HasAttribute, addr 0x4a5fadc, size 0x80, virtual false, abstract: false, final false
static inline bool HasAttribute(::System::Reflection::ParameterInfo*  provider, ::ArrayW<::System::Type*,::Array<::System::Type*>*>  attributeTypes) ;

/// @brief Method Interfaces, addr 0x4a5f158, size 0x100, virtual false, abstract: false, final false
static inline ::ArrayW<::System::Type*,::Array<::System::Type*>*> Interfaces(::System::Type*  type) ;

/// @brief Method IsAbstract, addr 0x4a5f488, size 0x14, virtual false, abstract: false, final false
static inline bool IsAbstract(::System::Type*  type) ;

/// @brief Method IsAssignableToGenericType, addr 0x4a5ef80, size 0x1d8, virtual false, abstract: false, final false
static inline bool IsAssignableToGenericType(::System::Type*  givenType, ::System::Type*  genericType) ;

/// @brief Method IsClosedGenericType, addr 0x4a5f57c, size 0x170, virtual false, abstract: false, final false
static inline bool IsClosedGenericType(::System::Type*  type) ;

/// @brief Method IsEnum, addr 0x4a5f258, size 0x20, virtual false, abstract: false, final false
static inline bool IsEnum(::System::Type*  type) ;

/// @brief Method IsGenericType, addr 0x4a5f400, size 0x20, virtual false, abstract: false, final false
static inline bool IsGenericType(::System::Type*  type) ;

/// @brief Method IsGenericTypeDefinition, addr 0x4a5f420, size 0x20, virtual false, abstract: false, final false
static inline bool IsGenericTypeDefinition(::System::Type*  type) ;

/// @brief Method IsInterface, addr 0x4a5f454, size 0x14, virtual false, abstract: false, final false
static inline bool IsInterface(::System::Type*  type) ;

/// @brief Method IsOpenGenericType, addr 0x4a5f790, size 0x170, virtual false, abstract: false, final false
static inline bool IsOpenGenericType(::System::Type*  type) ;

/// @brief Method IsPrimitive, addr 0x4a5f440, size 0x14, virtual false, abstract: false, final false
static inline bool IsPrimitive(::System::Type*  type) ;

/// @brief Method IsSealed, addr 0x4a5f49c, size 0x14, virtual false, abstract: false, final false
static inline bool IsSealed(::System::Type*  type) ;

/// @brief Method IsValueType, addr 0x4a5f278, size 0xfc, virtual false, abstract: false, final false
static inline bool IsValueType(::System::Type*  type) ;

/// @brief Method Method, addr 0x4a5f4b0, size 0x14, virtual false, abstract: false, final false
static inline ::System::Reflection::MethodInfo* Method(::System::Delegate*  del) ;

/// @brief Method TryGetAttribute, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T TryGetAttribute(::System::Reflection::MemberInfo*  provider) ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::ArrayW<::System::Type*,::Array<::System::Type*>*>>* getStaticF__interfaces() ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Type*,bool>* getStaticF__isClosedGenericType() ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Type*,bool>* getStaticF__isOpenGenericType() ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Type*,bool>* getStaticF__isValueType() ;

static inline void setStaticF__interfaces(::System::Collections::Generic::Dictionary_2<::System::Type*,::ArrayW<::System::Type*,::Array<::System::Type*>*>>*  value) ;

static inline void setStaticF__isClosedGenericType(::System::Collections::Generic::Dictionary_2<::System::Type*,bool>*  value) ;

static inline void setStaticF__isOpenGenericType(::System::Collections::Generic::Dictionary_2<::System::Type*,bool>*  value) ;

static inline void setStaticF__isValueType(::System::Collections::Generic::Dictionary_2<::System::Type*,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TypeExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TypeExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TypeExtensions(TypeExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TypeExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TypeExtensions(TypeExtensions const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ModestTree::TypeExtensions, 0x10>, "Size mismatch!");

} // namespace end def ModestTree
NEED_NO_BOX(::ModestTree::TypeExtensions);
DEFINE_IL2CPP_ARG_TYPE(::ModestTree::TypeExtensions*, "ModestTree", "TypeExtensions");
NEED_NO_BOX(::ModestTree::__TypeExtensions___GetParentTypes_d__28);
DEFINE_IL2CPP_ARG_TYPE(::ModestTree::__TypeExtensions___GetParentTypes_d__28*, "ModestTree", "TypeExtensions/<GetParentTypes>d__28");
NEED_NO_BOX(::ModestTree::__TypeExtensions____c__DisplayClass35_0);
DEFINE_IL2CPP_ARG_TYPE(::ModestTree::__TypeExtensions____c__DisplayClass35_0*, "ModestTree", "TypeExtensions/<>c__DisplayClass35_0");
NEED_NO_BOX(::ModestTree::__TypeExtensions____c__DisplayClass35_1);
DEFINE_IL2CPP_ARG_TYPE(::ModestTree::__TypeExtensions____c__DisplayClass35_1*, "ModestTree", "TypeExtensions/<>c__DisplayClass35_1");
NEED_NO_BOX(::ModestTree::__TypeExtensions____c__DisplayClass39_0);
DEFINE_IL2CPP_ARG_TYPE(::ModestTree::__TypeExtensions____c__DisplayClass39_0*, "ModestTree", "TypeExtensions/<>c__DisplayClass39_0");
NEED_NO_BOX(::ModestTree::__TypeExtensions____c__DisplayClass39_1);
DEFINE_IL2CPP_ARG_TYPE(::ModestTree::__TypeExtensions____c__DisplayClass39_1*, "ModestTree", "TypeExtensions/<>c__DisplayClass39_1");
