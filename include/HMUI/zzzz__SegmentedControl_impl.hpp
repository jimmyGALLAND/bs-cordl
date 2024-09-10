#pragma once
// IWYU pragma private; include "HMUI/SegmentedControl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HMUI/zzzz__SegmentedControl_def.hpp"
#include "HMUI/zzzz__SegmentedControlCell_def.hpp"
#include "HMUI/zzzz__SegmentedControl_def.hpp"
#include "HMUI/zzzz__SelectableCell_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
//  Writing Method size for method: ::HMUI::__SegmentedControl__IDataSource.NumberOfCells
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HMUI::__SegmentedControl__IDataSource::*)()>(&::HMUI::__SegmentedControl__IDataSource::NumberOfCells)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__SegmentedControl__IDataSource*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__SegmentedControl__IDataSource*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__SegmentedControl__IDataSource.CellForCellNumber
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::HMUI::SegmentedControlCell> (::HMUI::__SegmentedControl__IDataSource::*)(int32_t)>(&::HMUI::__SegmentedControl__IDataSource::CellForCellNumber)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__SegmentedControl__IDataSource*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__SegmentedControl__IDataSource*>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
inline int32_t HMUI::__SegmentedControl__IDataSource::NumberOfCells()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__SegmentedControl__IDataSource*>::get(),
                    0
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityW<::HMUI::SegmentedControlCell> HMUI::__SegmentedControl__IDataSource::CellForCellNumber(int32_t  cellNumber)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__SegmentedControl__IDataSource*>::get(),
                    1
                )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::HMUI::SegmentedControlCell>, false>(this, ___internal_method, cellNumber);
}
//  Writing Method size for method: ::HMUI::SegmentedControl.add_didSelectCellEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::SegmentedControl::*)(::System::Action_2<::UnityW<::HMUI::SegmentedControl>,int32_t>*)>(&::HMUI::SegmentedControl::add_didSelectCellEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3ff84d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(),
                        "add_didSelectCellEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::HMUI::SegmentedControl>,int32_t>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SegmentedControl.remove_didSelectCellEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::SegmentedControl::*)(::System::Action_2<::UnityW<::HMUI::SegmentedControl>,int32_t>*)>(&::HMUI::SegmentedControl::remove_didSelectCellEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3ff8584;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(),
                        "remove_didSelectCellEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::HMUI::SegmentedControl>,int32_t>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SegmentedControl.add_didPressNonInteractableCellEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::SegmentedControl::*)(::System::Action_2<::UnityW<::HMUI::SegmentedControl>,int32_t>*)>(&::HMUI::SegmentedControl::add_didPressNonInteractableCellEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3ff8634;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(),
                        "add_didPressNonInteractableCellEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::HMUI::SegmentedControl>,int32_t>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SegmentedControl.remove_didPressNonInteractableCellEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::SegmentedControl::*)(::System::Action_2<::UnityW<::HMUI::SegmentedControl>,int32_t>*)>(&::HMUI::SegmentedControl::remove_didPressNonInteractableCellEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3ff86e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(),
                        "remove_didPressNonInteractableCellEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::HMUI::SegmentedControl>,int32_t>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SegmentedControl.get_dataSource
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::__SegmentedControl__IDataSource* (::HMUI::SegmentedControl::*)()>(&::HMUI::SegmentedControl::get_dataSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ff8794;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(),
                        "get_dataSource",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SegmentedControl.set_dataSource
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::SegmentedControl::*)(::HMUI::__SegmentedControl__IDataSource*)>(&::HMUI::SegmentedControl::set_dataSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ff7450;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(),
                        "set_dataSource",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__SegmentedControl__IDataSource*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SegmentedControl.get_selectedCellNumber
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HMUI::SegmentedControl::*)()>(&::HMUI::SegmentedControl::get_selectedCellNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ff879c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(),
                        "get_selectedCellNumber",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SegmentedControl.get_cells
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::HMUI::SegmentedControlCell>>* (::HMUI::SegmentedControl::*)()>(&::HMUI::SegmentedControl::get_cells)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ff87a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(),
                        "get_cells",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SegmentedControl.CreateCells
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::SegmentedControl::*)()>(&::HMUI::SegmentedControl::CreateCells)> {
  constexpr static std::size_t size = 0x554;
  constexpr static std::size_t addrs = 0x3ff87ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(),
                        "CreateCells",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SegmentedControl.HandleCellSelectionDidChange
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::SegmentedControl::*)(::HMUI::SelectableCell*, ::HMUI::__SelectableCell__TransitionType, ::System::Object*)>(&::HMUI::SegmentedControl::HandleCellSelectionDidChange)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x3ff8d0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(),
                        "HandleCellSelectionDidChange",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::SelectableCell*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__SelectableCell__TransitionType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SegmentedControl.HandleNonInteractableCellWasPressed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::SegmentedControl::*)(::HMUI::SelectableCell*)>(&::HMUI::SegmentedControl::HandleNonInteractableCellWasPressed)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x3ff8e5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(),
                        "HandleNonInteractableCellWasPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::SelectableCell*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SegmentedControl.SetCallbackForCell
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::SegmentedControl::*)(int32_t, ::System::Action_1<int32_t>*)>(&::HMUI::SegmentedControl::SetCallbackForCell)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3ff8f04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(),
                        "SetCallbackForCell",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<int32_t>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SegmentedControl.ReloadData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::SegmentedControl::*)()>(&::HMUI::SegmentedControl::ReloadData)> {
  constexpr static std::size_t size = 0x4e4;
  constexpr static std::size_t addrs = 0x3ff7498;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(),
                        "ReloadData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SegmentedControl.SelectCellWithNumber
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::SegmentedControl::*)(int32_t)>(&::HMUI::SegmentedControl::SelectCellWithNumber)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x3ff8f6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(),
                        "SelectCellWithNumber",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SegmentedControl._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::SegmentedControl::*)()>(&::HMUI::SegmentedControl::_ctor)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x3ff7e80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& HMUI::SegmentedControl::__cordl_internal_get__separatorPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____separatorPrefab;
}
constexpr ::UnityW<::UnityEngine::Transform> const& HMUI::SegmentedControl::__cordl_internal_get__separatorPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____separatorPrefab;
}
constexpr void HMUI::SegmentedControl::__cordl_internal_set__separatorPrefab(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____separatorPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Zenject::DiContainer*& HMUI::SegmentedControl::__cordl_internal_get__container()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____container;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& HMUI::SegmentedControl::__cordl_internal_get__container() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____container;
}
constexpr void HMUI::SegmentedControl::__cordl_internal_set__container(::Zenject::DiContainer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____container)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::UnityW<::HMUI::SegmentedControl>,int32_t>*& HMUI::SegmentedControl::__cordl_internal_get_didSelectCellEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___didSelectCellEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityW<::HMUI::SegmentedControl>,int32_t>*> const& HMUI::SegmentedControl::__cordl_internal_get_didSelectCellEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___didSelectCellEvent;
}
constexpr void HMUI::SegmentedControl::__cordl_internal_set_didSelectCellEvent(::System::Action_2<::UnityW<::HMUI::SegmentedControl>,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didSelectCellEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::UnityW<::HMUI::SegmentedControl>,int32_t>*& HMUI::SegmentedControl::__cordl_internal_get_didPressNonInteractableCellEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___didPressNonInteractableCellEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityW<::HMUI::SegmentedControl>,int32_t>*> const& HMUI::SegmentedControl::__cordl_internal_get_didPressNonInteractableCellEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___didPressNonInteractableCellEvent;
}
constexpr void HMUI::SegmentedControl::__cordl_internal_set_didPressNonInteractableCellEvent(::System::Action_2<::UnityW<::HMUI::SegmentedControl>,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didPressNonInteractableCellEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& HMUI::SegmentedControl::__cordl_internal_get__numberOfCells()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____numberOfCells;
}
constexpr int32_t const& HMUI::SegmentedControl::__cordl_internal_get__numberOfCells() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____numberOfCells;
}
constexpr void HMUI::SegmentedControl::__cordl_internal_set__numberOfCells(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____numberOfCells = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::HMUI::SegmentedControlCell>>*& HMUI::SegmentedControl::__cordl_internal_get__cells()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cells;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::HMUI::SegmentedControlCell>>*> const& HMUI::SegmentedControl::__cordl_internal_get__cells() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cells;
}
constexpr void HMUI::SegmentedControl::__cordl_internal_set__cells(::System::Collections::Generic::List_1<::UnityW<::HMUI::SegmentedControlCell>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cells)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& HMUI::SegmentedControl::__cordl_internal_get__separators()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____separators;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*> const& HMUI::SegmentedControl::__cordl_internal_get__separators() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____separators;
}
constexpr void HMUI::SegmentedControl::__cordl_internal_set__separators(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____separators)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HMUI::__SegmentedControl__IDataSource*& HMUI::SegmentedControl::__cordl_internal_get__dataSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dataSource;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::__SegmentedControl__IDataSource*> const& HMUI::SegmentedControl::__cordl_internal_get__dataSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dataSource;
}
constexpr void HMUI::SegmentedControl::__cordl_internal_set__dataSource(::HMUI::__SegmentedControl__IDataSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dataSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& HMUI::SegmentedControl::__cordl_internal_get__selectedCellNumber()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectedCellNumber;
}
constexpr int32_t const& HMUI::SegmentedControl::__cordl_internal_get__selectedCellNumber() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectedCellNumber;
}
constexpr void HMUI::SegmentedControl::__cordl_internal_set__selectedCellNumber(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____selectedCellNumber = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::System::Action_1<int32_t>*>*& HMUI::SegmentedControl::__cordl_internal_get__callbacks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____callbacks;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t,::System::Action_1<int32_t>*>*> const& HMUI::SegmentedControl::__cordl_internal_get__callbacks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____callbacks;
}
constexpr void HMUI::SegmentedControl::__cordl_internal_set__callbacks(::System::Collections::Generic::Dictionary_2<int32_t,::System::Action_1<int32_t>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____callbacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Object>,::System::Collections::Generic::Queue_1<::UnityW<::HMUI::SegmentedControlCell>>*>*& HMUI::SegmentedControl::__cordl_internal_get__reusableCellPools()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reusableCellPools;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Object>,::System::Collections::Generic::Queue_1<::UnityW<::HMUI::SegmentedControlCell>>*>*> const& HMUI::SegmentedControl::__cordl_internal_get__reusableCellPools() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reusableCellPools;
}
constexpr void HMUI::SegmentedControl::__cordl_internal_set__reusableCellPools(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Object>,::System::Collections::Generic::Queue_1<::UnityW<::HMUI::SegmentedControlCell>>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____reusableCellPools)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::HMUI::SegmentedControlCell>,::UnityW<::UnityEngine::Object>>*& HMUI::SegmentedControl::__cordl_internal_get__cellToPrefabMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cellToPrefabMap;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityW<::HMUI::SegmentedControlCell>,::UnityW<::UnityEngine::Object>>*> const& HMUI::SegmentedControl::__cordl_internal_get__cellToPrefabMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cellToPrefabMap;
}
constexpr void HMUI::SegmentedControl::__cordl_internal_set__cellToPrefabMap(::System::Collections::Generic::Dictionary_2<::UnityW<::HMUI::SegmentedControlCell>,::UnityW<::UnityEngine::Object>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cellToPrefabMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void HMUI::SegmentedControl::add_didSelectCellEvent(::System::Action_2<::UnityW<::HMUI::SegmentedControl>,int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(),
                        "add_didSelectCellEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::HMUI::SegmentedControl>,int32_t>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void HMUI::SegmentedControl::remove_didSelectCellEvent(::System::Action_2<::UnityW<::HMUI::SegmentedControl>,int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(),
                        "remove_didSelectCellEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::HMUI::SegmentedControl>,int32_t>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void HMUI::SegmentedControl::add_didPressNonInteractableCellEvent(::System::Action_2<::UnityW<::HMUI::SegmentedControl>,int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(),
                        "add_didPressNonInteractableCellEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::HMUI::SegmentedControl>,int32_t>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void HMUI::SegmentedControl::remove_didPressNonInteractableCellEvent(::System::Action_2<::UnityW<::HMUI::SegmentedControl>,int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(),
                        "remove_didPressNonInteractableCellEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::HMUI::SegmentedControl>,int32_t>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::HMUI::__SegmentedControl__IDataSource* HMUI::SegmentedControl::get_dataSource()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(),
                        "get_dataSource",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::HMUI::__SegmentedControl__IDataSource*, false>(this, ___internal_method);
}
inline void HMUI::SegmentedControl::set_dataSource(::HMUI::__SegmentedControl__IDataSource*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(),
                        "set_dataSource",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__SegmentedControl__IDataSource*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t HMUI::SegmentedControl::get_selectedCellNumber()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(),
                        "get_selectedCellNumber",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::HMUI::SegmentedControlCell>>* HMUI::SegmentedControl::get_cells()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(),
                        "get_cells",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::HMUI::SegmentedControlCell>>*, false>(this, ___internal_method);
}
inline void HMUI::SegmentedControl::CreateCells()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(),
                        "CreateCells",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::SegmentedControl::HandleCellSelectionDidChange(::HMUI::SelectableCell*  selectableCell, ::HMUI::__SelectableCell__TransitionType  transitionType, ::System::Object*  changeOwner)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(),
                        "HandleCellSelectionDidChange",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::SelectableCell*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__SelectableCell__TransitionType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, selectableCell, transitionType, changeOwner);
}
inline void HMUI::SegmentedControl::HandleNonInteractableCellWasPressed(::HMUI::SelectableCell*  selectableCell)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(),
                        "HandleNonInteractableCellWasPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::SelectableCell*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, selectableCell);
}
inline void HMUI::SegmentedControl::SetCallbackForCell(int32_t  cellNumber, ::System::Action_1<int32_t>*  callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(),
                        "SetCallbackForCell",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<int32_t>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cellNumber, callback);
}
inline void HMUI::SegmentedControl::ReloadData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(),
                        "ReloadData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::SegmentedControl::SelectCellWithNumber(int32_t  selectCellNumber)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(),
                        "SelectCellWithNumber",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, selectCellNumber);
}
template<typename T>
inline T HMUI::SegmentedControl::GetReusableCell(::UnityEngine::Object*  prefab)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(),
                    "GetReusableCell",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                    ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, prefab);
}
inline ::HMUI::SegmentedControl* HMUI::SegmentedControl::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::SegmentedControl*>());
}
inline void HMUI::SegmentedControl::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HMUI::SegmentedControl::SegmentedControl()   {
}
