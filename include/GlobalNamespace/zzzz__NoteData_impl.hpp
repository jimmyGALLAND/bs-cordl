#pragma once
#include "GlobalNamespace/zzzz__BeatmapObjectData_impl.hpp"
#include "GlobalNamespace/zzzz__ColorType_impl.hpp"
#include "GlobalNamespace/zzzz__NoteCutDirection_impl.hpp"
#include "GlobalNamespace/zzzz__NoteData_impl.hpp"
#include "GlobalNamespace/zzzz__NoteLineLayer_impl.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataItem_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "GlobalNamespace/zzzz__ColorType_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutDirection_def.hpp"
#include "GlobalNamespace/zzzz__NoteLineLayer_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__NoteData__GameplayType::__NoteData__GameplayType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__NoteData__GameplayType::__NoteData__GameplayType() {}
constexpr ::GlobalNamespace::__NoteData__GameplayType GlobalNamespace::__NoteData__GameplayType::Normal{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__NoteData__GameplayType GlobalNamespace::__NoteData__GameplayType::Bomb{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__NoteData__GameplayType GlobalNamespace::__NoteData__GameplayType::BurstSliderHead{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__NoteData__GameplayType GlobalNamespace::__NoteData__GameplayType::BurstSliderElement{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::__NoteData__GameplayType GlobalNamespace::__NoteData__GameplayType::BurstSliderElementFill{ static_cast<int32_t>(0x4) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__NoteData__ScoringType::__NoteData__ScoringType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__NoteData__ScoringType::__NoteData__ScoringType() {}
constexpr ::GlobalNamespace::__NoteData__ScoringType GlobalNamespace::__NoteData__ScoringType::Ignore{ static_cast<int32_t>(0xffffffff) };
constexpr ::GlobalNamespace::__NoteData__ScoringType GlobalNamespace::__NoteData__ScoringType::NoScore{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__NoteData__ScoringType GlobalNamespace::__NoteData__ScoringType::Normal{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__NoteData__ScoringType GlobalNamespace::__NoteData__ScoringType::SliderHead{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__NoteData__ScoringType GlobalNamespace::__NoteData__ScoringType::SliderTail{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::__NoteData__ScoringType GlobalNamespace::__NoteData__ScoringType::BurstSliderHead{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::__NoteData__ScoringType GlobalNamespace::__NoteData__ScoringType::BurstSliderElement{ static_cast<int32_t>(0x5) };
//  Writing Method size for method: ::GlobalNamespace::NoteData.get_subtypeGroupIdentifier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::NoteData::*)()>(&::GlobalNamespace::NoteData::get_subtypeGroupIdentifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe00b20;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.get_gameplayType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__NoteData__GameplayType (::GlobalNamespace::NoteData::*)()>(
    &::GlobalNamespace::NoteData::get_gameplayType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe00b28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "get_gameplayType",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.set_gameplayType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteData::*)(::GlobalNamespace::__NoteData__GameplayType)>(
    &::GlobalNamespace::NoteData::set_gameplayType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe00b30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "set_gameplayType", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__NoteData__GameplayType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.get_scoringType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__NoteData__ScoringType (::GlobalNamespace::NoteData::*)()>(
    &::GlobalNamespace::NoteData::get_scoringType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe00b38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "get_scoringType",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.set_scoringType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteData::*)(::GlobalNamespace::__NoteData__ScoringType)>(
    &::GlobalNamespace::NoteData::set_scoringType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe00b40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "set_scoringType", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__NoteData__ScoringType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.get_colorType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ColorType (::GlobalNamespace::NoteData::*)()>(&::GlobalNamespace::NoteData::get_colorType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe00b48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "get_colorType",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.set_colorType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteData::*)(::GlobalNamespace::ColorType)>(&::GlobalNamespace::NoteData::set_colorType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe00b50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "set_colorType", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.get_cutDirection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteCutDirection (::GlobalNamespace::NoteData::*)()>(
    &::GlobalNamespace::NoteData::get_cutDirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe00b58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "get_cutDirection",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.set_cutDirection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteData::*)(::GlobalNamespace::NoteCutDirection)>(
    &::GlobalNamespace::NoteData::set_cutDirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe00b60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "set_cutDirection", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.get_timeToNextColorNote
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::NoteData::*)()>(&::GlobalNamespace::NoteData::get_timeToNextColorNote)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe00b68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "get_timeToNextColorNote",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.set_timeToNextColorNote
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteData::*)(float_t)>(&::GlobalNamespace::NoteData::set_timeToNextColorNote)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe00b70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "set_timeToNextColorNote", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.get_timeToPrevColorNote
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::NoteData::*)()>(&::GlobalNamespace::NoteData::get_timeToPrevColorNote)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe00b78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "get_timeToPrevColorNote",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.set_timeToPrevColorNote
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteData::*)(float_t)>(&::GlobalNamespace::NoteData::set_timeToPrevColorNote)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe00b80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "set_timeToPrevColorNote", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.get_lineIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::NoteData::*)()>(&::GlobalNamespace::NoteData::get_lineIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe00b88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "get_lineIndex",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.set_lineIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteData::*)(int32_t)>(&::GlobalNamespace::NoteData::set_lineIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe00b90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "set_lineIndex", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.get_noteLineLayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteLineLayer (::GlobalNamespace::NoteData::*)()>(
    &::GlobalNamespace::NoteData::get_noteLineLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe00b98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "get_noteLineLayer",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.set_noteLineLayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteData::*)(::GlobalNamespace::NoteLineLayer)>(
    &::GlobalNamespace::NoteData::set_noteLineLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe00ba0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "set_noteLineLayer", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.get_beforeJumpNoteLineLayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteLineLayer (::GlobalNamespace::NoteData::*)()>(
    &::GlobalNamespace::NoteData::get_beforeJumpNoteLineLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe00ba8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(),
                                                                               "get_beforeJumpNoteLineLayer", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.set_beforeJumpNoteLineLayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteData::*)(::GlobalNamespace::NoteLineLayer)>(
    &::GlobalNamespace::NoteData::set_beforeJumpNoteLineLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe00bb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "set_beforeJumpNoteLineLayer", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.get_flipLineIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::NoteData::*)()>(&::GlobalNamespace::NoteData::get_flipLineIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe00bb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "get_flipLineIndex",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.set_flipLineIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteData::*)(int32_t)>(&::GlobalNamespace::NoteData::set_flipLineIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe00bc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "set_flipLineIndex", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.get_flipYSide
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::NoteData::*)()>(&::GlobalNamespace::NoteData::get_flipYSide)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe00bc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "get_flipYSide",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.set_flipYSide
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteData::*)(float_t)>(&::GlobalNamespace::NoteData::set_flipYSide)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe00bd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "set_flipYSide", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.get_cutDirectionAngleOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::NoteData::*)()>(&::GlobalNamespace::NoteData::get_cutDirectionAngleOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe00bd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(),
                                                                               "get_cutDirectionAngleOffset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.set_cutDirectionAngleOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteData::*)(float_t)>(&::GlobalNamespace::NoteData::set_cutDirectionAngleOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe00be0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "set_cutDirectionAngleOffset",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.get_cutSfxVolumeMultiplier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::NoteData::*)()>(&::GlobalNamespace::NoteData::get_cutSfxVolumeMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe00be8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(),
                                                                               "get_cutSfxVolumeMultiplier", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.set_cutSfxVolumeMultiplier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteData::*)(float_t)>(&::GlobalNamespace::NoteData::set_cutSfxVolumeMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe00bf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "set_cutSfxVolumeMultiplier", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.GetCopy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapDataItem* (::GlobalNamespace::NoteData::*)()>(&::GlobalNamespace::NoteData::GetCopy)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xe00bf8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteData::*)(
    float_t, int32_t, ::GlobalNamespace::NoteLineLayer, ::GlobalNamespace::NoteLineLayer, ::GlobalNamespace::__NoteData__GameplayType, ::GlobalNamespace::__NoteData__ScoringType,
    ::GlobalNamespace::ColorType, ::GlobalNamespace::NoteCutDirection, float_t, float_t, int32_t, float_t, float_t, float_t)>(&::GlobalNamespace::NoteData::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xe00cc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__NoteData__GameplayType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__NoteData__ScoringType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.CreateBombNoteData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteData* (*)(float_t, int32_t, ::GlobalNamespace::NoteLineLayer)>(
    &::GlobalNamespace::NoteData::CreateBombNoteData)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xe00d7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "CreateBombNoteData", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.CreateBasicNoteData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::NoteData* (*)(float_t, int32_t, ::GlobalNamespace::NoteLineLayer, ::GlobalNamespace::ColorType, ::GlobalNamespace::NoteCutDirection)>(
        &::GlobalNamespace::NoteData::CreateBasicNoteData)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xe00e30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "CreateBasicNoteData", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.CreateBurstSliderNoteData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteData* (*)(float_t, int32_t, ::GlobalNamespace::NoteLineLayer, ::GlobalNamespace::NoteLineLayer,
                                                                                                                   ::GlobalNamespace::ColorType, ::GlobalNamespace::NoteCutDirection, float_t)>(
    &::GlobalNamespace::NoteData::CreateBurstSliderNoteData)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xe00ef0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "CreateBurstSliderNoteData", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.CopyWith
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteData* (
    ::GlobalNamespace::NoteData::*)(::System::Nullable_1<float_t>, ::System::Nullable_1<int32_t>, ::System::Nullable_1<::GlobalNamespace::NoteLineLayer>,
                                    ::System::Nullable_1<::GlobalNamespace::NoteLineLayer>, ::System::Nullable_1<::GlobalNamespace::__NoteData__GameplayType>,
                                    ::System::Nullable_1<::GlobalNamespace::__NoteData__ScoringType>, ::System::Nullable_1<::GlobalNamespace::ColorType>,
                                    ::System::Nullable_1<::GlobalNamespace::NoteCutDirection>, ::System::Nullable_1<float_t>, ::System::Nullable_1<float_t>, ::System::Nullable_1<int32_t>,
                                    ::System::Nullable_1<float_t>, ::System::Nullable_1<float_t>, ::System::Nullable_1<float_t>)>(&::GlobalNamespace::NoteData::CopyWith)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0xe00fbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "CopyWith", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int32_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::GlobalNamespace::NoteLineLayer>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::GlobalNamespace::NoteLineLayer>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::GlobalNamespace::__NoteData__GameplayType>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::GlobalNamespace::__NoteData__ScoringType>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::GlobalNamespace::ColorType>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::GlobalNamespace::NoteCutDirection>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<float_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<float_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<float_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<float_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.SetBeforeJumpNoteLineLayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteData::*)(::GlobalNamespace::NoteLineLayer)>(
    &::GlobalNamespace::NoteData::SetBeforeJumpNoteLineLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe01288;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "SetBeforeJumpNoteLineLayer", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.ChangeToBurstSliderHead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteData::*)()>(&::GlobalNamespace::NoteData::ChangeToBurstSliderHead)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe01290;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "ChangeToBurstSliderHead",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.ChangeToGameNote
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteData::*)()>(&::GlobalNamespace::NoteData::ChangeToGameNote)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe012a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "ChangeToGameNote",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.ChangeToSliderHead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteData::*)()>(&::GlobalNamespace::NoteData::ChangeToSliderHead)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xe012b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "ChangeToSliderHead",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.ChangeToSliderTail
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteData::*)()>(&::GlobalNamespace::NoteData::ChangeToSliderTail)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xe012bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "ChangeToSliderTail",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.SetNoteFlipToNote
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteData::*)(::GlobalNamespace::NoteData*)>(
    &::GlobalNamespace::NoteData::SetNoteFlipToNote)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xe012c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "SetNoteFlipToNote", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.SetCutDirectionAngleOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteData::*)(float_t)>(&::GlobalNamespace::NoteData::SetCutDirectionAngleOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe01334;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "SetCutDirectionAngleOffset", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.ResetNoteFlip
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteData::*)()>(&::GlobalNamespace::NoteData::ResetNoteFlip)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xe0133c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "ResetNoteFlip",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.Mirror
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteData::*)(int32_t)>(&::GlobalNamespace::NoteData::Mirror)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xe01348;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.SetNoteToAnyCutDirection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteData::*)()>(&::GlobalNamespace::NoteData::SetNoteToAnyCutDirection)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xe013ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "SetNoteToAnyCutDirection",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.ChangeNoteCutDirection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteData::*)(::GlobalNamespace::NoteCutDirection)>(
    &::GlobalNamespace::NoteData::ChangeNoteCutDirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe013b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "ChangeNoteCutDirection", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.TransformNoteAOrBToRandomType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteData::*)()>(&::GlobalNamespace::NoteData::TransformNoteAOrBToRandomType)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xe013c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(),
                                                                               "TransformNoteAOrBToRandomType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.SubtypeIdentifier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::GlobalNamespace::ColorType)>(&::GlobalNamespace::NoteData::SubtypeIdentifier)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xe00d78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "SubtypeIdentifier", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorType>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__NoteData__GameplayType& GlobalNamespace::NoteData::__get__gameplayType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____gameplayType_k__BackingField;
}
constexpr ::GlobalNamespace::__NoteData__GameplayType const& GlobalNamespace::NoteData::__get__gameplayType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____gameplayType_k__BackingField;
}
constexpr void GlobalNamespace::NoteData::__set__gameplayType_k__BackingField(::GlobalNamespace::__NoteData__GameplayType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____gameplayType_k__BackingField = value;
}
constexpr ::GlobalNamespace::__NoteData__ScoringType& GlobalNamespace::NoteData::__get__scoringType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____scoringType_k__BackingField;
}
constexpr ::GlobalNamespace::__NoteData__ScoringType const& GlobalNamespace::NoteData::__get__scoringType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____scoringType_k__BackingField;
}
constexpr void GlobalNamespace::NoteData::__set__scoringType_k__BackingField(::GlobalNamespace::__NoteData__ScoringType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____scoringType_k__BackingField = value;
}
constexpr ::GlobalNamespace::ColorType& GlobalNamespace::NoteData::__get__colorType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____colorType_k__BackingField;
}
constexpr ::GlobalNamespace::ColorType const& GlobalNamespace::NoteData::__get__colorType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____colorType_k__BackingField;
}
constexpr void GlobalNamespace::NoteData::__set__colorType_k__BackingField(::GlobalNamespace::ColorType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____colorType_k__BackingField = value;
}
constexpr ::GlobalNamespace::NoteCutDirection& GlobalNamespace::NoteData::__get__cutDirection_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____cutDirection_k__BackingField;
}
constexpr ::GlobalNamespace::NoteCutDirection const& GlobalNamespace::NoteData::__get__cutDirection_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____cutDirection_k__BackingField;
}
constexpr void GlobalNamespace::NoteData::__set__cutDirection_k__BackingField(::GlobalNamespace::NoteCutDirection value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____cutDirection_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::NoteData::__get__timeToNextColorNote_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____timeToNextColorNote_k__BackingField;
}
constexpr float_t const& GlobalNamespace::NoteData::__get__timeToNextColorNote_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____timeToNextColorNote_k__BackingField;
}
constexpr void GlobalNamespace::NoteData::__set__timeToNextColorNote_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____timeToNextColorNote_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::NoteData::__get__timeToPrevColorNote_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____timeToPrevColorNote_k__BackingField;
}
constexpr float_t const& GlobalNamespace::NoteData::__get__timeToPrevColorNote_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____timeToPrevColorNote_k__BackingField;
}
constexpr void GlobalNamespace::NoteData::__set__timeToPrevColorNote_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____timeToPrevColorNote_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::NoteData::__get__lineIndex_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____lineIndex_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::NoteData::__get__lineIndex_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____lineIndex_k__BackingField;
}
constexpr void GlobalNamespace::NoteData::__set__lineIndex_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____lineIndex_k__BackingField = value;
}
constexpr ::GlobalNamespace::NoteLineLayer& GlobalNamespace::NoteData::__get__noteLineLayer_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____noteLineLayer_k__BackingField;
}
constexpr ::GlobalNamespace::NoteLineLayer const& GlobalNamespace::NoteData::__get__noteLineLayer_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____noteLineLayer_k__BackingField;
}
constexpr void GlobalNamespace::NoteData::__set__noteLineLayer_k__BackingField(::GlobalNamespace::NoteLineLayer value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____noteLineLayer_k__BackingField = value;
}
constexpr ::GlobalNamespace::NoteLineLayer& GlobalNamespace::NoteData::__get__beforeJumpNoteLineLayer_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____beforeJumpNoteLineLayer_k__BackingField;
}
constexpr ::GlobalNamespace::NoteLineLayer const& GlobalNamespace::NoteData::__get__beforeJumpNoteLineLayer_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____beforeJumpNoteLineLayer_k__BackingField;
}
constexpr void GlobalNamespace::NoteData::__set__beforeJumpNoteLineLayer_k__BackingField(::GlobalNamespace::NoteLineLayer value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____beforeJumpNoteLineLayer_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::NoteData::__get__flipLineIndex_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____flipLineIndex_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::NoteData::__get__flipLineIndex_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____flipLineIndex_k__BackingField;
}
constexpr void GlobalNamespace::NoteData::__set__flipLineIndex_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____flipLineIndex_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::NoteData::__get__flipYSide_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____flipYSide_k__BackingField;
}
constexpr float_t const& GlobalNamespace::NoteData::__get__flipYSide_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____flipYSide_k__BackingField;
}
constexpr void GlobalNamespace::NoteData::__set__flipYSide_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____flipYSide_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::NoteData::__get__cutDirectionAngleOffset_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____cutDirectionAngleOffset_k__BackingField;
}
constexpr float_t const& GlobalNamespace::NoteData::__get__cutDirectionAngleOffset_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____cutDirectionAngleOffset_k__BackingField;
}
constexpr void GlobalNamespace::NoteData::__set__cutDirectionAngleOffset_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____cutDirectionAngleOffset_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::NoteData::__get__cutSfxVolumeMultiplier_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____cutSfxVolumeMultiplier_k__BackingField;
}
constexpr float_t const& GlobalNamespace::NoteData::__get__cutSfxVolumeMultiplier_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____cutSfxVolumeMultiplier_k__BackingField;
}
constexpr void GlobalNamespace::NoteData::__set__cutSfxVolumeMultiplier_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____cutSfxVolumeMultiplier_k__BackingField = value;
}
inline int32_t GlobalNamespace::NoteData::get_subtypeGroupIdentifier() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "get_subtypeGroupIdentifier",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__NoteData__GameplayType GlobalNamespace::NoteData::get_gameplayType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "get_gameplayType",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__NoteData__GameplayType, false>(this, ___internal_method);
}
inline void GlobalNamespace::NoteData::set_gameplayType(::GlobalNamespace::__NoteData__GameplayType value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "set_gameplayType", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__NoteData__GameplayType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::__NoteData__ScoringType GlobalNamespace::NoteData::get_scoringType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "get_scoringType",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__NoteData__ScoringType, false>(this, ___internal_method);
}
inline void GlobalNamespace::NoteData::set_scoringType(::GlobalNamespace::__NoteData__ScoringType value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "set_scoringType", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__NoteData__ScoringType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::ColorType GlobalNamespace::NoteData::get_colorType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "get_colorType",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ColorType, false>(this, ___internal_method);
}
inline void GlobalNamespace::NoteData::set_colorType(::GlobalNamespace::ColorType value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "set_colorType", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::NoteCutDirection GlobalNamespace::NoteData::get_cutDirection() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "get_cutDirection",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteCutDirection, false>(this, ___internal_method);
}
inline void GlobalNamespace::NoteData::set_cutDirection(::GlobalNamespace::NoteCutDirection value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "set_cutDirection", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::NoteData::get_timeToNextColorNote() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "get_timeToNextColorNote",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::NoteData::set_timeToNextColorNote(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "set_timeToNextColorNote", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::NoteData::get_timeToPrevColorNote() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "get_timeToPrevColorNote",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::NoteData::set_timeToPrevColorNote(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "set_timeToPrevColorNote", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::NoteData::get_lineIndex() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "get_lineIndex",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::NoteData::set_lineIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "set_lineIndex", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::NoteLineLayer GlobalNamespace::NoteData::get_noteLineLayer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "get_noteLineLayer",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteLineLayer, false>(this, ___internal_method);
}
inline void GlobalNamespace::NoteData::set_noteLineLayer(::GlobalNamespace::NoteLineLayer value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "set_noteLineLayer", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::NoteLineLayer GlobalNamespace::NoteData::get_beforeJumpNoteLineLayer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "get_beforeJumpNoteLineLayer",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteLineLayer, false>(this, ___internal_method);
}
inline void GlobalNamespace::NoteData::set_beforeJumpNoteLineLayer(::GlobalNamespace::NoteLineLayer value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "set_beforeJumpNoteLineLayer", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::NoteData::get_flipLineIndex() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "get_flipLineIndex",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::NoteData::set_flipLineIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "set_flipLineIndex", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::NoteData::get_flipYSide() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "get_flipYSide",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::NoteData::set_flipYSide(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "set_flipYSide", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::NoteData::get_cutDirectionAngleOffset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "get_cutDirectionAngleOffset",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::NoteData::set_cutDirectionAngleOffset(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "set_cutDirectionAngleOffset", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::NoteData::get_cutSfxVolumeMultiplier() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "get_cutSfxVolumeMultiplier",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::NoteData::set_cutSfxVolumeMultiplier(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "set_cutSfxVolumeMultiplier", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::BeatmapDataItem* GlobalNamespace::NoteData::GetCopy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "GetCopy",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDataItem*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::NoteData* GlobalNamespace::NoteData::New_ctor(float_t time, int32_t lineIndex, ::GlobalNamespace::NoteLineLayer noteLineLayer,
                                                                        ::GlobalNamespace::NoteLineLayer beforeJumpNoteLineLayer, ::GlobalNamespace::__NoteData__GameplayType gameplayType,
                                                                        ::GlobalNamespace::__NoteData__ScoringType scoringType, ::GlobalNamespace::ColorType colorType,
                                                                        ::GlobalNamespace::NoteCutDirection cutDirection, float_t timeToNextColorNote, float_t timeToPrevColorNote,
                                                                        int32_t flipLineIndex, float_t flipYSide, float_t cutDirectionAngleOffset, float_t cutSfxVolumeMultiplier) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::NoteData*>(time, lineIndex, noteLineLayer, beforeJumpNoteLineLayer, gameplayType, scoringType, colorType, cutDirection,
                                                                        timeToNextColorNote, timeToPrevColorNote, flipLineIndex, flipYSide, cutDirectionAngleOffset, cutSfxVolumeMultiplier));
}
inline void GlobalNamespace::NoteData::_ctor(float_t time, int32_t lineIndex, ::GlobalNamespace::NoteLineLayer noteLineLayer, ::GlobalNamespace::NoteLineLayer beforeJumpNoteLineLayer,
                                             ::GlobalNamespace::__NoteData__GameplayType gameplayType, ::GlobalNamespace::__NoteData__ScoringType scoringType, ::GlobalNamespace::ColorType colorType,
                                             ::GlobalNamespace::NoteCutDirection cutDirection, float_t timeToNextColorNote, float_t timeToPrevColorNote, int32_t flipLineIndex, float_t flipYSide,
                                             float_t cutDirectionAngleOffset, float_t cutSfxVolumeMultiplier) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__NoteData__GameplayType>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__NoteData__ScoringType>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorType>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, time, lineIndex, noteLineLayer, beforeJumpNoteLineLayer, gameplayType, scoringType, colorType, cutDirection,
                                                          timeToNextColorNote, timeToPrevColorNote, flipLineIndex, flipYSide, cutDirectionAngleOffset, cutSfxVolumeMultiplier);
}
inline ::GlobalNamespace::NoteData* GlobalNamespace::NoteData::CreateBombNoteData(float_t time, int32_t lineIndex, ::GlobalNamespace::NoteLineLayer noteLineLayer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "CreateBombNoteData", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteData*, false>(nullptr, ___internal_method, time, lineIndex, noteLineLayer);
}
inline ::GlobalNamespace::NoteData* GlobalNamespace::NoteData::CreateBasicNoteData(float_t time, int32_t lineIndex, ::GlobalNamespace::NoteLineLayer noteLineLayer,
                                                                                   ::GlobalNamespace::ColorType colorType, ::GlobalNamespace::NoteCutDirection cutDirection) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "CreateBasicNoteData", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorType>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteData*, false>(nullptr, ___internal_method, time, lineIndex, noteLineLayer, colorType, cutDirection);
}
inline ::GlobalNamespace::NoteData* GlobalNamespace::NoteData::CreateBurstSliderNoteData(float_t time, int32_t lineIndex, ::GlobalNamespace::NoteLineLayer noteLineLayer,
                                                                                         ::GlobalNamespace::NoteLineLayer beforeJumpNoteLineLayer, ::GlobalNamespace::ColorType colorType,
                                                                                         ::GlobalNamespace::NoteCutDirection cutDirection, float_t cutSfxVolumeMultiplier) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "CreateBurstSliderNoteData", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorType>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteData*, false>(nullptr, ___internal_method, time, lineIndex, noteLineLayer, beforeJumpNoteLineLayer, colorType, cutDirection,
                                                                                  cutSfxVolumeMultiplier);
}
/// @param time: ::System::Nullable_1<float_t> (default: {})
/// @param lineIndex: ::System::Nullable_1<int32_t> (default: {})
/// @param noteLineLayer: ::System::Nullable_1<::GlobalNamespace::NoteLineLayer> (default: {})
/// @param beforeJumpNoteLineLayer: ::System::Nullable_1<::GlobalNamespace::NoteLineLayer> (default: {})
/// @param gameplayType: ::System::Nullable_1<::GlobalNamespace::__NoteData__GameplayType> (default: {})
/// @param scoringType: ::System::Nullable_1<::GlobalNamespace::__NoteData__ScoringType> (default: {})
/// @param colorType: ::System::Nullable_1<::GlobalNamespace::ColorType> (default: {})
/// @param cutDirection: ::System::Nullable_1<::GlobalNamespace::NoteCutDirection> (default: {})
/// @param timeToNextColorNote: ::System::Nullable_1<float_t> (default: {})
/// @param timeToPrevColorNote: ::System::Nullable_1<float_t> (default: {})
/// @param flipLineIndex: ::System::Nullable_1<int32_t> (default: {})
/// @param flipYSide: ::System::Nullable_1<float_t> (default: {})
/// @param cutDirectionAngleOffset: ::System::Nullable_1<float_t> (default: {})
/// @param cutSfxVolumeMultiplier: ::System::Nullable_1<float_t> (default: {})
inline ::GlobalNamespace::NoteData*
GlobalNamespace::NoteData::CopyWith(::System::Nullable_1<float_t> time, ::System::Nullable_1<int32_t> lineIndex, ::System::Nullable_1<::GlobalNamespace::NoteLineLayer> noteLineLayer,
                                    ::System::Nullable_1<::GlobalNamespace::NoteLineLayer> beforeJumpNoteLineLayer, ::System::Nullable_1<::GlobalNamespace::__NoteData__GameplayType> gameplayType,
                                    ::System::Nullable_1<::GlobalNamespace::__NoteData__ScoringType> scoringType, ::System::Nullable_1<::GlobalNamespace::ColorType> colorType,
                                    ::System::Nullable_1<::GlobalNamespace::NoteCutDirection> cutDirection, ::System::Nullable_1<float_t> timeToNextColorNote,
                                    ::System::Nullable_1<float_t> timeToPrevColorNote, ::System::Nullable_1<int32_t> flipLineIndex, ::System::Nullable_1<float_t> flipYSide,
                                    ::System::Nullable_1<float_t> cutDirectionAngleOffset, ::System::Nullable_1<float_t> cutSfxVolumeMultiplier) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "CopyWith", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int32_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::GlobalNamespace::NoteLineLayer>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::GlobalNamespace::NoteLineLayer>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::GlobalNamespace::__NoteData__GameplayType>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::GlobalNamespace::__NoteData__ScoringType>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::GlobalNamespace::ColorType>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::GlobalNamespace::NoteCutDirection>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<float_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<float_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<float_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteData*, false>(this, ___internal_method, time, lineIndex, noteLineLayer, beforeJumpNoteLineLayer, gameplayType, scoringType,
                                                                                  colorType, cutDirection, timeToNextColorNote, timeToPrevColorNote, flipLineIndex, flipYSide, cutDirectionAngleOffset,
                                                                                  cutSfxVolumeMultiplier);
}
inline void GlobalNamespace::NoteData::SetBeforeJumpNoteLineLayer(::GlobalNamespace::NoteLineLayer lineLayer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "SetBeforeJumpNoteLineLayer", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lineLayer);
}
inline void GlobalNamespace::NoteData::ChangeToBurstSliderHead() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "ChangeToBurstSliderHead",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::NoteData::ChangeToGameNote() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "ChangeToGameNote",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::NoteData::ChangeToSliderHead() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "ChangeToSliderHead",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::NoteData::ChangeToSliderTail() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "ChangeToSliderTail",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::NoteData::SetNoteFlipToNote(::GlobalNamespace::NoteData* targetNote) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "SetNoteFlipToNote", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, targetNote);
}
inline void GlobalNamespace::NoteData::SetCutDirectionAngleOffset(float_t cutDirectionAngleOffset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "SetCutDirectionAngleOffset", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cutDirectionAngleOffset);
}
inline void GlobalNamespace::NoteData::ResetNoteFlip() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "ResetNoteFlip",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::NoteData::Mirror(int32_t lineCount) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "Mirror", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lineCount);
}
inline void GlobalNamespace::NoteData::SetNoteToAnyCutDirection() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "SetNoteToAnyCutDirection",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::NoteData::ChangeNoteCutDirection(::GlobalNamespace::NoteCutDirection newCutDirection) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "ChangeNoteCutDirection", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newCutDirection);
}
inline void GlobalNamespace::NoteData::TransformNoteAOrBToRandomType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(),
                                                                             "TransformNoteAOrBToRandomType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::NoteData::SubtypeIdentifier(::GlobalNamespace::ColorType colorType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteData*>::get(), "SubtypeIdentifier", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorType>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, colorType);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoteData::NoteData() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
