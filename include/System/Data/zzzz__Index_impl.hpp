#pragma once
// IWYU pragma private; include "System/Data/Index.hpp"
#include "System/ComponentModel/zzzz__ListChangedType_impl.hpp"
#include "System/Data/zzzz__DataViewRowState_impl.hpp"
#include "System/Data/zzzz__RBTree_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Data/zzzz__Index_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/ComponentModel/zzzz__ListChangedEventArgs_def.hpp"
#include "System/ComponentModel/zzzz__ListChangedType_def.hpp"
#include "System/Data/zzzz__DataColumnCollection_def.hpp"
#include "System/Data/zzzz__DataRow_def.hpp"
#include "System/Data/zzzz__DataTable_def.hpp"
#include "System/Data/zzzz__DataViewListener_def.hpp"
#include "System/Data/zzzz__DataViewRowState_def.hpp"
#include "System/Data/zzzz__IFilter_def.hpp"
#include "System/Data/zzzz__IndexField_def.hpp"
#include "System/Data/zzzz__Index_def.hpp"
#include "System/Data/zzzz__Listeners_1_def.hpp"
#include "System/Data/zzzz__RBTree_1_def.hpp"
#include "System/Data/zzzz__Range_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__WeakReference_def.hpp"
//  Writing Method size for method: ::System::Data::__Index__IndexTree._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::__Index__IndexTree::*)(::System::Data::Index*)>(&::System::Data::__Index__IndexTree::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x40f6d54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::__Index__IndexTree*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Index*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::__Index__IndexTree.CompareNode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::__Index__IndexTree::*)(int32_t, int32_t)>(&::System::Data::__Index__IndexTree::CompareNode)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x40f7624;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::__Index__IndexTree*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::__Index__IndexTree*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::__Index__IndexTree.CompareSateliteTreeNode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::__Index__IndexTree::*)(int32_t, int32_t)>(&::System::Data::__Index__IndexTree::CompareSateliteTreeNode)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x40f763c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::__Index__IndexTree*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::__Index__IndexTree*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
constexpr ::System::Data::Index*& System::Data::__Index__IndexTree::__cordl_internal_get__index()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____index;
}
constexpr ::cordl_internals::to_const_pointer<::System::Data::Index*> const& System::Data::__Index__IndexTree::__cordl_internal_get__index() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____index;
}
constexpr void System::Data::__Index__IndexTree::__cordl_internal_set__index(::System::Data::Index*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____index)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Data::__Index__IndexTree* System::Data::__Index__IndexTree::New_ctor(::System::Data::Index*  index)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::__Index__IndexTree*>(index));
}
inline void System::Data::__Index__IndexTree::_ctor(::System::Data::Index*  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::__Index__IndexTree*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Index*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
inline int32_t System::Data::__Index__IndexTree::CompareNode(int32_t  record1, int32_t  record2)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::__Index__IndexTree*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, record1, record2);
}
inline int32_t System::Data::__Index__IndexTree::CompareSateliteTreeNode(int32_t  record1, int32_t  record2)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::__Index__IndexTree*>::get(),
                    6
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, record1, record2);
}
// Ctor Parameters []
constexpr ::System::Data::__Index__IndexTree::__Index__IndexTree()   {
}
//  Writing Method size for method: ::System::Data::__Index____c._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::__Index____c::*)()>(&::System::Data::__Index____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40f76b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::__Index____c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::__Index____c.__ctor_b__22_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::__Index____c::*)(::System::Data::DataViewListener*)>(&::System::Data::__Index____c::__ctor_b__22_0)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x40f76b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::__Index____c*>::get(),
                        "<.ctor>b__22_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataViewListener*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::__Index____c._OnListChanged_b__85_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::__Index____c::*)(::System::Data::DataViewListener*, ::System::ComponentModel::ListChangedEventArgs*, bool, bool)>(&::System::Data::__Index____c::_OnListChanged_b__85_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x40f76c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::__Index____c*>::get(),
                        "<OnListChanged>b__85_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataViewListener*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ListChangedEventArgs*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
inline void System::Data::__Index____c::setStaticF___9(::System::Data::__Index____c*  value)  {
::cordl_internals::setStaticField<::System::Data::__Index____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::__Index____c*>::get>(std::forward<::System::Data::__Index____c*>(value));
}
inline ::System::Data::__Index____c* System::Data::__Index____c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::System::Data::__Index____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::__Index____c*>::get>();
}
inline void System::Data::__Index____c::setStaticF___9__22_0(::System::Data::__Listeners_1__Func_2<::System::Data::DataViewListener*,::System::Data::DataViewListener*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Data::__Listeners_1__Func_2<::System::Data::DataViewListener*,::System::Data::DataViewListener*,bool>*, "<>9__22_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::__Index____c*>::get>(std::forward<::System::Data::__Listeners_1__Func_2<::System::Data::DataViewListener*,::System::Data::DataViewListener*,bool>*>(value));
}
inline ::System::Data::__Listeners_1__Func_2<::System::Data::DataViewListener*,::System::Data::DataViewListener*,bool>* System::Data::__Index____c::getStaticF___9__22_0()  {
return ::cordl_internals::getStaticField<::System::Data::__Listeners_1__Func_2<::System::Data::DataViewListener*,::System::Data::DataViewListener*,bool>*, "<>9__22_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::__Index____c*>::get>();
}
inline void System::Data::__Index____c::setStaticF___9__85_0(::System::Data::__Listeners_1__Action_4<::System::Data::DataViewListener*,::System::Data::DataViewListener*,::System::ComponentModel::ListChangedEventArgs*,bool,bool>*  value)  {
::cordl_internals::setStaticField<::System::Data::__Listeners_1__Action_4<::System::Data::DataViewListener*,::System::Data::DataViewListener*,::System::ComponentModel::ListChangedEventArgs*,bool,bool>*, "<>9__85_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::__Index____c*>::get>(std::forward<::System::Data::__Listeners_1__Action_4<::System::Data::DataViewListener*,::System::Data::DataViewListener*,::System::ComponentModel::ListChangedEventArgs*,bool,bool>*>(value));
}
inline ::System::Data::__Listeners_1__Action_4<::System::Data::DataViewListener*,::System::Data::DataViewListener*,::System::ComponentModel::ListChangedEventArgs*,bool,bool>* System::Data::__Index____c::getStaticF___9__85_0()  {
return ::cordl_internals::getStaticField<::System::Data::__Listeners_1__Action_4<::System::Data::DataViewListener*,::System::Data::DataViewListener*,::System::ComponentModel::ListChangedEventArgs*,bool,bool>*, "<>9__85_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::__Index____c*>::get>();
}
inline ::System::Data::__Index____c* System::Data::__Index____c::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::__Index____c*>());
}
inline void System::Data::__Index____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::__Index____c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Data::__Index____c::__ctor_b__22_0(::System::Data::DataViewListener*  listener)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::__Index____c*>::get(),
                        "<.ctor>b__22_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataViewListener*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, listener);
}
inline void System::Data::__Index____c::_OnListChanged_b__85_0(::System::Data::DataViewListener*  listener, ::System::ComponentModel::ListChangedEventArgs*  args, bool  arg2, bool  arg3)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::__Index____c*>::get(),
                        "<OnListChanged>b__85_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataViewListener*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ListChangedEventArgs*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, listener, args, arg2, arg3);
}
// Ctor Parameters []
constexpr ::System::Data::__Index____c::__Index____c()   {
}
//  Writing Method size for method: ::System::Data::__Index____c__DisplayClass86_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::__Index____c__DisplayClass86_0::*)()>(&::System::Data::__Index____c__DisplayClass86_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40f6ecc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::__Index____c__DisplayClass86_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::__Index____c__DisplayClass86_0._MaintainDataView_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::__Index____c__DisplayClass86_0::*)(::System::Data::DataViewListener*, ::System::ComponentModel::ListChangedType, ::System::Data::DataRow*, bool)>(&::System::Data::__Index____c__DisplayClass86_0::_MaintainDataView_b__0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x40f76e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::__Index____c__DisplayClass86_0*>::get(),
                        "<MaintainDataView>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataViewListener*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ListChangedType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::ComponentModel::ListChangedType& System::Data::__Index____c__DisplayClass86_0::__cordl_internal_get_changedType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___changedType;
}
constexpr ::System::ComponentModel::ListChangedType const& System::Data::__Index____c__DisplayClass86_0::__cordl_internal_get_changedType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___changedType;
}
constexpr void System::Data::__Index____c__DisplayClass86_0::__cordl_internal_set_changedType(::System::ComponentModel::ListChangedType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___changedType = value;
}
inline ::System::Data::__Index____c__DisplayClass86_0* System::Data::__Index____c__DisplayClass86_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::__Index____c__DisplayClass86_0*>());
}
inline void System::Data::__Index____c__DisplayClass86_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::__Index____c__DisplayClass86_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Data::__Index____c__DisplayClass86_0::_MaintainDataView_b__0(::System::Data::DataViewListener*  listener, ::System::ComponentModel::ListChangedType  type, ::System::Data::DataRow*  row, bool  track)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::__Index____c__DisplayClass86_0*>::get(),
                        "<MaintainDataView>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataViewListener*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ListChangedType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, listener, type, row, track);
}
// Ctor Parameters []
constexpr ::System::Data::__Index____c__DisplayClass86_0::__Index____c__DisplayClass86_0()   {
}
//  Writing Method size for method: ::System::Data::Index._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::Index::*)(::System::Data::DataTable*, ::ArrayW<::System::Data::IndexField,::Array<::System::Data::IndexField>*>, ::System::Data::DataViewRowState, ::System::Data::IFilter*)>(&::System::Data::Index::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x40f4634;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Data::IndexField,::Array<::System::Data::IndexField>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataViewRowState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::IFilter*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::Index::*)(::System::Data::DataTable*, ::System::Comparison_1<::System::Data::DataRow*>*, ::System::Data::DataViewRowState, ::System::Data::IFilter*)>(&::System::Data::Index::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x40f4910;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Comparison_1<::System::Data::DataRow*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataViewRowState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::IFilter*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.GetAllFields
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Data::IndexField,::Array<::System::Data::IndexField>*> (*)(::System::Data::DataColumnCollection*)>(&::System::Data::Index::GetAllFields)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x40f4968;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "GetAllFields",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumnCollection*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::Index::*)(::System::Data::DataTable*, ::ArrayW<::System::Data::IndexField,::Array<::System::Data::IndexField>*>, ::System::Comparison_1<::System::Data::DataRow*>*, ::System::Data::DataViewRowState, ::System::Data::IFilter*)>(&::System::Data::Index::_ctor)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x40f4644;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Data::IndexField,::Array<::System::Data::IndexField>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Comparison_1<::System::Data::DataRow*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataViewRowState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::IFilter*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.Equal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::Index::*)(::ArrayW<::System::Data::IndexField,::Array<::System::Data::IndexField>*>, ::System::Data::DataViewRowState, ::System::Data::IFilter*)>(&::System::Data::Index::Equal)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x40f4e08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "Equal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Data::IndexField,::Array<::System::Data::IndexField>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataViewRowState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::IFilter*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.get_HasRemoteAggregate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::Index::*)()>(&::System::Data::Index::get_HasRemoteAggregate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40f4eb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "get_HasRemoteAggregate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.get_ObjectID
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::Index::*)()>(&::System::Data::Index::get_ObjectID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40f4eb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "get_ObjectID",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.get_RecordStates
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataViewRowState (::System::Data::Index::*)()>(&::System::Data::Index::get_RecordStates)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40f4ec0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "get_RecordStates",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.get_RowFilter
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::IFilter* (::System::Data::Index::*)()>(&::System::Data::Index::get_RowFilter)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x40f4ec8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "get_RowFilter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.GetRecord
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::Index::*)(int32_t)>(&::System::Data::Index::GetRecord)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x40f4f40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "GetRecord",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.get_HasDuplicates
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::Index::*)()>(&::System::Data::Index::get_HasDuplicates)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x40f4f98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "get_HasDuplicates",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.get_RecordCount
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::Index::*)()>(&::System::Data::Index::get_RecordCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40f4fe8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "get_RecordCount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.AcceptRecord
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::Index::*)(int32_t)>(&::System::Data::Index::AcceptRecord)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x40f4ff0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "AcceptRecord",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.AcceptRecord
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::Index::*)(int32_t, ::System::Data::IFilter*)>(&::System::Data::Index::AcceptRecord)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x40f501c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "AcceptRecord",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::IFilter*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.ListChangedAdd
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::Index::*)(::System::Data::DataViewListener*)>(&::System::Data::Index::ListChangedAdd)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x40f51b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "ListChangedAdd",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataViewListener*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.ListChangedRemove
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::Index::*)(::System::Data::DataViewListener*)>(&::System::Data::Index::ListChangedRemove)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x40f5208;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "ListChangedRemove",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataViewListener*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.get_RefCount
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::Index::*)()>(&::System::Data::Index::get_RefCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40f5260;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "get_RefCount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.AddRef
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::Index::*)()>(&::System::Data::Index::AddRef)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x40f5268;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "AddRef",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.RemoveRef
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::Index::*)()>(&::System::Data::Index::RemoveRef)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x40f5458;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "RemoveRef",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.ApplyChangeAction
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::Index::*)(int32_t, int32_t, int32_t)>(&::System::Data::Index::ApplyChangeAction)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x40f5614;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "ApplyChangeAction",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.CheckUnique
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::Index::*)()>(&::System::Data::Index::CheckUnique)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x40f5a44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "CheckUnique",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.CompareRecords
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::Index::*)(int32_t, int32_t)>(&::System::Data::Index::CompareRecords)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x40f5a5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "CompareRecords",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.CompareDataRows
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::Index::*)(int32_t, int32_t)>(&::System::Data::Index::CompareDataRows)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x40f5ba8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "CompareDataRows",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.CompareDuplicateRecords
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::Index::*)(int32_t, int32_t)>(&::System::Data::Index::CompareDuplicateRecords)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x40f5c14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "CompareDuplicateRecords",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.CompareRecordToKey
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::Index::*)(int32_t, ::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::System::Data::Index::CompareRecordToKey)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x40f5d60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "CompareRecordToKey",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.DeleteRecordFromIndex
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::Index::*)(int32_t)>(&::System::Data::Index::DeleteRecordFromIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40f5e30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "DeleteRecordFromIndex",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.DeleteRecord
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::Index::*)(int32_t)>(&::System::Data::Index::DeleteRecord)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40f59e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "DeleteRecord",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.DeleteRecord
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::Index::*)(int32_t, bool)>(&::System::Data::Index::DeleteRecord)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x40f5e38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "DeleteRecord",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.GetEnumerator
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::__RBTree_1__RBTreeEnumerator<int32_t> (::System::Data::Index::*)(int32_t)>(&::System::Data::Index::GetEnumerator)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x40f6108;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "GetEnumerator",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.GetIndex
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::Index::*)(int32_t)>(&::System::Data::Index::GetIndex)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x40f59ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "GetIndex",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.GetIndex
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::Index::*)(int32_t, int32_t)>(&::System::Data::Index::GetIndex)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x40f58ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "GetIndex",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.GetUniqueKeyValues
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Object*,::Array<::System::Object*>*> (::System::Data::Index::*)()>(&::System::Data::Index::GetUniqueKeyValues)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x40ec960;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "GetUniqueKeyValues",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.FindNodeByKey
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::Index::*)(::System::Object*)>(&::System::Data::Index::FindNodeByKey)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x40f6380;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "FindNodeByKey",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.FindNodeByKeys
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::Index::*)(::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::System::Data::Index::FindNodeByKeys)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x40f6594;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "FindNodeByKeys",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.FindNodeByKeyRecord
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::Index::*)(int32_t)>(&::System::Data::Index::FindNodeByKeyRecord)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x40f67c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "FindNodeByKeyRecord",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.GetRangeFromNode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::Range (::System::Data::Index::*)(int32_t)>(&::System::Data::Index::GetRangeFromNode)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x40f68b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "GetRangeFromNode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.FindRecords
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::Range (::System::Data::Index::*)(::System::Object*)>(&::System::Data::Index::FindRecords)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x40f69e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "FindRecords",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.FindRecords
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::Range (::System::Data::Index::*)(::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::System::Data::Index::FindRecords)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x40eca9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "FindRecords",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.FireResetEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::Index::*)()>(&::System::Data::Index::FireResetEvent)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x40f6a04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "FireResetEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.GetChangeAction
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::Index::*)(::System::Data::DataViewRowState, ::System::Data::DataViewRowState)>(&::System::Data::Index::GetChangeAction)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x40f6ce4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "GetChangeAction",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataViewRowState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataViewRowState>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.GetReplaceAction
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::Data::DataViewRowState)>(&::System::Data::Index::GetReplaceAction)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x40f6d00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "GetReplaceAction",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataViewRowState>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.GetRow
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataRow* (::System::Data::Index::*)(int32_t)>(&::System::Data::Index::GetRow)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x40ed3c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "GetRow",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.GetRows
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Data::DataRow*,::Array<::System::Data::DataRow*>*> (::System::Data::Index::*)(::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::System::Data::Index::GetRows)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x40f6d28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "GetRows",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.GetRows
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Data::DataRow*,::Array<::System::Data::DataRow*>*> (::System::Data::Index::*)(::System::Data::Range)>(&::System::Data::Index::GetRows)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x40ecac0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "GetRows",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Range>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.InitRecords
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::Index::*)(::System::Data::IFilter*)>(&::System::Data::Index::InitRecords)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x40f4a2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "InitRecords",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::IFilter*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.InsertRecordToIndex
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::Index::*)(int32_t)>(&::System::Data::Index::InsertRecordToIndex)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x40f6db4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "InsertRecordToIndex",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.InsertRecord
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::Index::*)(int32_t, bool)>(&::System::Data::Index::InsertRecord)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x40f56b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "InsertRecord",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.IsKeyInIndex
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::Index::*)(::System::Object*)>(&::System::Data::Index::IsKeyInIndex)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x40f6e04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "IsKeyInIndex",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.IsKeyInIndex
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::Index::*)(::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::System::Data::Index::IsKeyInIndex)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x40eca84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "IsKeyInIndex",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.IsKeyRecordInIndex
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::Index::*)(int32_t)>(&::System::Data::Index::IsKeyRecordInIndex)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x40f6e1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "IsKeyRecordInIndex",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.get_DoListChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::Index::*)()>(&::System::Data::Index::get_DoListChanged)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x40f6aec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "get_DoListChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.OnListChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::Index::*)(::System::ComponentModel::ListChangedType, int32_t, int32_t)>(&::System::Data::Index::OnListChanged)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x40f6e34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "OnListChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ListChangedType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.OnListChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::Index::*)(::System::ComponentModel::ListChangedType, int32_t)>(&::System::Data::Index::OnListChanged)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x40f6078;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "OnListChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ListChangedType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.OnListChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::Index::*)(::System::ComponentModel::ListChangedEventArgs*)>(&::System::Data::Index::OnListChanged)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x40f6b6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "OnListChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ListChangedEventArgs*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.MaintainDataView
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::Index::*)(::System::ComponentModel::ListChangedType, int32_t, bool)>(&::System::Data::Index::MaintainDataView)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x40f5f5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "MaintainDataView",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ListChangedType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.Reset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::Index::*)()>(&::System::Data::Index::Reset)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x40f6ed4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.RecordChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::Index::*)(int32_t)>(&::System::Data::Index::RecordChanged)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x40f6f9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "RecordChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.RecordChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::Index::*)(int32_t, int32_t)>(&::System::Data::Index::RecordChanged)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x40f7080;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "RecordChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.RecordStateChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::Index::*)(int32_t, ::System::Data::DataViewRowState, ::System::Data::DataViewRowState)>(&::System::Data::Index::RecordStateChanged)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x40f71b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "RecordStateChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataViewRowState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataViewRowState>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.RecordStateChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::Index::*)(int32_t, ::System::Data::DataViewRowState, ::System::Data::DataViewRowState, int32_t, ::System::Data::DataViewRowState, ::System::Data::DataViewRowState)>(&::System::Data::Index::RecordStateChanged)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0x40f72b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "RecordStateChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataViewRowState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataViewRowState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataViewRowState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataViewRowState>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.get_Table
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataTable* (::System::Data::Index::*)()>(&::System::Data::Index::get_Table)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40f761c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "get_Table",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.GetUniqueKeyValues
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::Index::*)(::System::Collections::Generic::List_1<::ArrayW<::System::Object*,::Array<::System::Object*>*>>*, int32_t)>(&::System::Data::Index::GetUniqueKeyValues)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x40f6170;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "GetUniqueKeyValues",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::ArrayW<::System::Object*,::Array<::System::Object*>*>>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Data::DataTable*& System::Data::Index::__cordl_internal_get__table()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____table;
}
constexpr ::cordl_internals::to_const_pointer<::System::Data::DataTable*> const& System::Data::Index::__cordl_internal_get__table() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____table;
}
constexpr void System::Data::Index::__cordl_internal_set__table(::System::Data::DataTable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____table)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Data::IndexField,::Array<::System::Data::IndexField>*>& System::Data::Index::__cordl_internal_get__indexFields()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____indexFields;
}
constexpr ::ArrayW<::System::Data::IndexField,::Array<::System::Data::IndexField>*> const& System::Data::Index::__cordl_internal_get__indexFields() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____indexFields;
}
constexpr void System::Data::Index::__cordl_internal_set__indexFields(::ArrayW<::System::Data::IndexField,::Array<::System::Data::IndexField>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____indexFields)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Comparison_1<::System::Data::DataRow*>*& System::Data::Index::__cordl_internal_get__comparison()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____comparison;
}
constexpr ::cordl_internals::to_const_pointer<::System::Comparison_1<::System::Data::DataRow*>*> const& System::Data::Index::__cordl_internal_get__comparison() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____comparison;
}
constexpr void System::Data::Index::__cordl_internal_set__comparison(::System::Comparison_1<::System::Data::DataRow*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____comparison)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Data::DataViewRowState& System::Data::Index::__cordl_internal_get__recordStates()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recordStates;
}
constexpr ::System::Data::DataViewRowState const& System::Data::Index::__cordl_internal_get__recordStates() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recordStates;
}
constexpr void System::Data::Index::__cordl_internal_set__recordStates(::System::Data::DataViewRowState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____recordStates = value;
}
constexpr ::System::WeakReference*& System::Data::Index::__cordl_internal_get__rowFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rowFilter;
}
constexpr ::cordl_internals::to_const_pointer<::System::WeakReference*> const& System::Data::Index::__cordl_internal_get__rowFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rowFilter;
}
constexpr void System::Data::Index::__cordl_internal_set__rowFilter(::System::WeakReference*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rowFilter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Data::__Index__IndexTree*& System::Data::Index::__cordl_internal_get__records()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____records;
}
constexpr ::cordl_internals::to_const_pointer<::System::Data::__Index__IndexTree*> const& System::Data::Index::__cordl_internal_get__records() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____records;
}
constexpr void System::Data::Index::__cordl_internal_set__records(::System::Data::__Index__IndexTree*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____records)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Data::Index::__cordl_internal_get__recordCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recordCount;
}
constexpr int32_t const& System::Data::Index::__cordl_internal_get__recordCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recordCount;
}
constexpr void System::Data::Index::__cordl_internal_set__recordCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____recordCount = value;
}
constexpr int32_t& System::Data::Index::__cordl_internal_get__refCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____refCount;
}
constexpr int32_t const& System::Data::Index::__cordl_internal_get__refCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____refCount;
}
constexpr void System::Data::Index::__cordl_internal_set__refCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____refCount = value;
}
constexpr ::System::Data::Listeners_1<::System::Data::DataViewListener*>*& System::Data::Index::__cordl_internal_get__listeners()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____listeners;
}
constexpr ::cordl_internals::to_const_pointer<::System::Data::Listeners_1<::System::Data::DataViewListener*>*> const& System::Data::Index::__cordl_internal_get__listeners() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____listeners;
}
constexpr void System::Data::Index::__cordl_internal_set__listeners(::System::Data::Listeners_1<::System::Data::DataViewListener*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____listeners)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Data::Index::__cordl_internal_get__suspendEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____suspendEvents;
}
constexpr bool const& System::Data::Index::__cordl_internal_get__suspendEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____suspendEvents;
}
constexpr void System::Data::Index::__cordl_internal_set__suspendEvents(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____suspendEvents = value;
}
constexpr bool& System::Data::Index::__cordl_internal_get__isSharable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isSharable;
}
constexpr bool const& System::Data::Index::__cordl_internal_get__isSharable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isSharable;
}
constexpr void System::Data::Index::__cordl_internal_set__isSharable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isSharable = value;
}
constexpr bool& System::Data::Index::__cordl_internal_get__hasRemoteAggregate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasRemoteAggregate;
}
constexpr bool const& System::Data::Index::__cordl_internal_get__hasRemoteAggregate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasRemoteAggregate;
}
constexpr void System::Data::Index::__cordl_internal_set__hasRemoteAggregate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hasRemoteAggregate = value;
}
constexpr int32_t& System::Data::Index::__cordl_internal_get__objectID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____objectID;
}
constexpr int32_t const& System::Data::Index::__cordl_internal_get__objectID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____objectID;
}
constexpr void System::Data::Index::__cordl_internal_set__objectID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____objectID = value;
}
inline void System::Data::Index::setStaticF_s_objectTypeCount(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_objectTypeCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Data::Index::getStaticF_s_objectTypeCount()  {
return ::cordl_internals::getStaticField<int32_t, "s_objectTypeCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get>();
}
inline ::System::Data::Index* System::Data::Index::New_ctor(::System::Data::DataTable*  table, ::ArrayW<::System::Data::IndexField,::Array<::System::Data::IndexField>*>  indexFields, ::System::Data::DataViewRowState  recordStates, ::System::Data::IFilter*  rowFilter)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::Index*>(table, indexFields, recordStates, rowFilter));
}
inline void System::Data::Index::_ctor(::System::Data::DataTable*  table, ::ArrayW<::System::Data::IndexField,::Array<::System::Data::IndexField>*>  indexFields, ::System::Data::DataViewRowState  recordStates, ::System::Data::IFilter*  rowFilter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Data::IndexField,::Array<::System::Data::IndexField>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataViewRowState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::IFilter*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, table, indexFields, recordStates, rowFilter);
}
inline ::System::Data::Index* System::Data::Index::New_ctor(::System::Data::DataTable*  table, ::System::Comparison_1<::System::Data::DataRow*>*  comparison, ::System::Data::DataViewRowState  recordStates, ::System::Data::IFilter*  rowFilter)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::Index*>(table, comparison, recordStates, rowFilter));
}
inline void System::Data::Index::_ctor(::System::Data::DataTable*  table, ::System::Comparison_1<::System::Data::DataRow*>*  comparison, ::System::Data::DataViewRowState  recordStates, ::System::Data::IFilter*  rowFilter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Comparison_1<::System::Data::DataRow*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataViewRowState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::IFilter*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, table, comparison, recordStates, rowFilter);
}
inline ::ArrayW<::System::Data::IndexField,::Array<::System::Data::IndexField>*> System::Data::Index::GetAllFields(::System::Data::DataColumnCollection*  columns)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "GetAllFields",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumnCollection*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Data::IndexField,::Array<::System::Data::IndexField>*>, false>(nullptr, ___internal_method, columns);
}
inline ::System::Data::Index* System::Data::Index::New_ctor(::System::Data::DataTable*  table, ::ArrayW<::System::Data::IndexField,::Array<::System::Data::IndexField>*>  indexFields, ::System::Comparison_1<::System::Data::DataRow*>*  comparison, ::System::Data::DataViewRowState  recordStates, ::System::Data::IFilter*  rowFilter)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::Index*>(table, indexFields, comparison, recordStates, rowFilter));
}
inline void System::Data::Index::_ctor(::System::Data::DataTable*  table, ::ArrayW<::System::Data::IndexField,::Array<::System::Data::IndexField>*>  indexFields, ::System::Comparison_1<::System::Data::DataRow*>*  comparison, ::System::Data::DataViewRowState  recordStates, ::System::Data::IFilter*  rowFilter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Data::IndexField,::Array<::System::Data::IndexField>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Comparison_1<::System::Data::DataRow*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataViewRowState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::IFilter*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, table, indexFields, comparison, recordStates, rowFilter);
}
inline bool System::Data::Index::Equal(::ArrayW<::System::Data::IndexField,::Array<::System::Data::IndexField>*>  indexDesc, ::System::Data::DataViewRowState  recordStates, ::System::Data::IFilter*  rowFilter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "Equal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Data::IndexField,::Array<::System::Data::IndexField>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataViewRowState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::IFilter*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, indexDesc, recordStates, rowFilter);
}
inline bool System::Data::Index::get_HasRemoteAggregate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "get_HasRemoteAggregate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t System::Data::Index::get_ObjectID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "get_ObjectID",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Data::DataViewRowState System::Data::Index::get_RecordStates()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "get_RecordStates",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Data::DataViewRowState, false>(this, ___internal_method);
}
inline ::System::Data::IFilter* System::Data::Index::get_RowFilter()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "get_RowFilter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Data::IFilter*, false>(this, ___internal_method);
}
inline int32_t System::Data::Index::GetRecord(int32_t  recordIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "GetRecord",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, recordIndex);
}
inline bool System::Data::Index::get_HasDuplicates()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "get_HasDuplicates",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t System::Data::Index::get_RecordCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "get_RecordCount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool System::Data::Index::AcceptRecord(int32_t  record)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "AcceptRecord",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, record);
}
inline bool System::Data::Index::AcceptRecord(int32_t  record, ::System::Data::IFilter*  filter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "AcceptRecord",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::IFilter*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, record, filter);
}
inline void System::Data::Index::ListChangedAdd(::System::Data::DataViewListener*  listener)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "ListChangedAdd",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataViewListener*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, listener);
}
inline void System::Data::Index::ListChangedRemove(::System::Data::DataViewListener*  listener)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "ListChangedRemove",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataViewListener*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, listener);
}
inline int32_t System::Data::Index::get_RefCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "get_RefCount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::Data::Index::AddRef()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "AddRef",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t System::Data::Index::RemoveRef()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "RemoveRef",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::Data::Index::ApplyChangeAction(int32_t  record, int32_t  action, int32_t  changeRecord)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "ApplyChangeAction",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, record, action, changeRecord);
}
inline bool System::Data::Index::CheckUnique()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "CheckUnique",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t System::Data::Index::CompareRecords(int32_t  record1, int32_t  record2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "CompareRecords",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, record1, record2);
}
inline int32_t System::Data::Index::CompareDataRows(int32_t  record1, int32_t  record2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "CompareDataRows",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, record1, record2);
}
inline int32_t System::Data::Index::CompareDuplicateRecords(int32_t  record1, int32_t  record2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "CompareDuplicateRecords",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, record1, record2);
}
inline int32_t System::Data::Index::CompareRecordToKey(int32_t  record1, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  vals)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "CompareRecordToKey",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, record1, vals);
}
inline void System::Data::Index::DeleteRecordFromIndex(int32_t  recordIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "DeleteRecordFromIndex",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, recordIndex);
}
inline void System::Data::Index::DeleteRecord(int32_t  recordIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "DeleteRecord",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, recordIndex);
}
inline void System::Data::Index::DeleteRecord(int32_t  recordIndex, bool  fireEvent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "DeleteRecord",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, recordIndex, fireEvent);
}
inline ::System::Data::__RBTree_1__RBTreeEnumerator<int32_t> System::Data::Index::GetEnumerator(int32_t  startIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "GetEnumerator",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Data::__RBTree_1__RBTreeEnumerator<int32_t>, false>(this, ___internal_method, startIndex);
}
inline int32_t System::Data::Index::GetIndex(int32_t  record)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "GetIndex",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, record);
}
inline int32_t System::Data::Index::GetIndex(int32_t  record, int32_t  changeRecord)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "GetIndex",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, record, changeRecord);
}
inline ::ArrayW<::System::Object*,::Array<::System::Object*>*> System::Data::Index::GetUniqueKeyValues()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "GetUniqueKeyValues",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*,::Array<::System::Object*>*>, false>(this, ___internal_method);
}
inline int32_t System::Data::Index::FindNodeByKey(::System::Object*  originalKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "FindNodeByKey",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, originalKey);
}
inline int32_t System::Data::Index::FindNodeByKeys(::ArrayW<::System::Object*,::Array<::System::Object*>*>  originalKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "FindNodeByKeys",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, originalKey);
}
inline int32_t System::Data::Index::FindNodeByKeyRecord(int32_t  record)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "FindNodeByKeyRecord",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, record);
}
inline ::System::Data::Range System::Data::Index::GetRangeFromNode(int32_t  nodeId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "GetRangeFromNode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Data::Range, false>(this, ___internal_method, nodeId);
}
inline ::System::Data::Range System::Data::Index::FindRecords(::System::Object*  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "FindRecords",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Data::Range, false>(this, ___internal_method, key);
}
inline ::System::Data::Range System::Data::Index::FindRecords(::ArrayW<::System::Object*,::Array<::System::Object*>*>  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "FindRecords",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Data::Range, false>(this, ___internal_method, key);
}
inline void System::Data::Index::FireResetEvent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "FireResetEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t System::Data::Index::GetChangeAction(::System::Data::DataViewRowState  oldState, ::System::Data::DataViewRowState  newState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "GetChangeAction",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataViewRowState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataViewRowState>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, oldState, newState);
}
inline int32_t System::Data::Index::GetReplaceAction(::System::Data::DataViewRowState  oldState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "GetReplaceAction",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataViewRowState>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, oldState);
}
inline ::System::Data::DataRow* System::Data::Index::GetRow(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "GetRow",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Data::DataRow*, false>(this, ___internal_method, i);
}
inline ::ArrayW<::System::Data::DataRow*,::Array<::System::Data::DataRow*>*> System::Data::Index::GetRows(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "GetRows",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Data::DataRow*,::Array<::System::Data::DataRow*>*>, false>(this, ___internal_method, values);
}
inline ::ArrayW<::System::Data::DataRow*,::Array<::System::Data::DataRow*>*> System::Data::Index::GetRows(::System::Data::Range  range)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "GetRows",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Range>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Data::DataRow*,::Array<::System::Data::DataRow*>*>, false>(this, ___internal_method, range);
}
inline void System::Data::Index::InitRecords(::System::Data::IFilter*  filter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "InitRecords",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::IFilter*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, filter);
}
inline int32_t System::Data::Index::InsertRecordToIndex(int32_t  record)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "InsertRecordToIndex",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, record);
}
inline int32_t System::Data::Index::InsertRecord(int32_t  record, bool  fireEvent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "InsertRecord",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, record, fireEvent);
}
inline bool System::Data::Index::IsKeyInIndex(::System::Object*  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "IsKeyInIndex",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key);
}
inline bool System::Data::Index::IsKeyInIndex(::ArrayW<::System::Object*,::Array<::System::Object*>*>  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "IsKeyInIndex",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key);
}
inline bool System::Data::Index::IsKeyRecordInIndex(int32_t  record)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "IsKeyRecordInIndex",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, record);
}
inline bool System::Data::Index::get_DoListChanged()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "get_DoListChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Data::Index::OnListChanged(::System::ComponentModel::ListChangedType  changedType, int32_t  newIndex, int32_t  oldIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "OnListChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ListChangedType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, changedType, newIndex, oldIndex);
}
inline void System::Data::Index::OnListChanged(::System::ComponentModel::ListChangedType  changedType, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "OnListChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ListChangedType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, changedType, index);
}
inline void System::Data::Index::OnListChanged(::System::ComponentModel::ListChangedEventArgs*  e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "OnListChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ListChangedEventArgs*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
inline void System::Data::Index::MaintainDataView(::System::ComponentModel::ListChangedType  changedType, int32_t  record, bool  trackAddRemove)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "MaintainDataView",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ListChangedType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, changedType, record, trackAddRemove);
}
inline void System::Data::Index::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Data::Index::RecordChanged(int32_t  record)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "RecordChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, record);
}
inline void System::Data::Index::RecordChanged(int32_t  oldIndex, int32_t  newIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "RecordChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, oldIndex, newIndex);
}
inline void System::Data::Index::RecordStateChanged(int32_t  record, ::System::Data::DataViewRowState  oldState, ::System::Data::DataViewRowState  newState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "RecordStateChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataViewRowState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataViewRowState>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, record, oldState, newState);
}
inline void System::Data::Index::RecordStateChanged(int32_t  oldRecord, ::System::Data::DataViewRowState  oldOldState, ::System::Data::DataViewRowState  oldNewState, int32_t  newRecord, ::System::Data::DataViewRowState  newOldState, ::System::Data::DataViewRowState  newNewState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "RecordStateChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataViewRowState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataViewRowState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataViewRowState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataViewRowState>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, oldRecord, oldOldState, oldNewState, newRecord, newOldState, newNewState);
}
inline ::System::Data::DataTable* System::Data::Index::get_Table()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "get_Table",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Data::DataTable*, false>(this, ___internal_method);
}
inline void System::Data::Index::GetUniqueKeyValues(::System::Collections::Generic::List_1<::ArrayW<::System::Object*,::Array<::System::Object*>*>>*  list, int32_t  curNodeId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                        "GetUniqueKeyValues",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::ArrayW<::System::Object*,::Array<::System::Object*>*>>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, list, curNodeId);
}
template<typename T>
inline int32_t System::Data::Index::IndexOfReference(::System::Collections::Generic::List_1<T>*  list, T  item)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Index*>::get(),
                    "IndexOfReference",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                    ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, list, item);
}
// Ctor Parameters []
constexpr ::System::Data::Index::Index()   {
}
