#pragma once
// IWYU pragma private; include "GlobalNamespace/LocalLeaderboardsModel.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LocalLeaderboardsModel_def.hpp"
#include "GlobalNamespace/zzzz__IFileStorage_def.hpp"
#include "GlobalNamespace/zzzz__LocalLeaderboardsModel_def.hpp"
#include "GlobalNamespace/zzzz__LocalLeaderboardsSettingsSO_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType::__LocalLeaderboardsModel__LeaderboardType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType::__LocalLeaderboardsModel__LeaderboardType()   {
}
constexpr ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType  GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType::AllTime{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType  GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType::Daily{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::GlobalNamespace::__LocalLeaderboardsModel__ScoreData._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LocalLeaderboardsModel__ScoreData::*)()>(&::GlobalNamespace::__LocalLeaderboardsModel__ScoreData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26b6ea4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::__LocalLeaderboardsModel__ScoreData::__cordl_internal_get__score()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____score;
}
constexpr int32_t const& GlobalNamespace::__LocalLeaderboardsModel__ScoreData::__cordl_internal_get__score() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____score;
}
constexpr void GlobalNamespace::__LocalLeaderboardsModel__ScoreData::__cordl_internal_set__score(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____score = value;
}
constexpr ::StringW& GlobalNamespace::__LocalLeaderboardsModel__ScoreData::__cordl_internal_get__playerName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerName;
}
constexpr ::StringW const& GlobalNamespace::__LocalLeaderboardsModel__ScoreData::__cordl_internal_get__playerName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerName;
}
constexpr void GlobalNamespace::__LocalLeaderboardsModel__ScoreData::__cordl_internal_set__playerName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::__LocalLeaderboardsModel__ScoreData::__cordl_internal_get__fullCombo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fullCombo;
}
constexpr bool const& GlobalNamespace::__LocalLeaderboardsModel__ScoreData::__cordl_internal_get__fullCombo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fullCombo;
}
constexpr void GlobalNamespace::__LocalLeaderboardsModel__ScoreData::__cordl_internal_set__fullCombo(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fullCombo = value;
}
constexpr int64_t& GlobalNamespace::__LocalLeaderboardsModel__ScoreData::__cordl_internal_get__timestamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timestamp;
}
constexpr int64_t const& GlobalNamespace::__LocalLeaderboardsModel__ScoreData::__cordl_internal_get__timestamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timestamp;
}
constexpr void GlobalNamespace::__LocalLeaderboardsModel__ScoreData::__cordl_internal_set__timestamp(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timestamp = value;
}
inline ::GlobalNamespace::__LocalLeaderboardsModel__ScoreData* GlobalNamespace::__LocalLeaderboardsModel__ScoreData::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>());
}
inline void GlobalNamespace::__LocalLeaderboardsModel__ScoreData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LocalLeaderboardsModel__ScoreData::__LocalLeaderboardsModel__ScoreData()   {
}
//  Writing Method size for method: ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData::*)()>(&::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26b6eac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData::__cordl_internal_get__leaderboardId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leaderboardId;
}
constexpr ::StringW const& GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData::__cordl_internal_get__leaderboardId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leaderboardId;
}
constexpr void GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData::__cordl_internal_set__leaderboardId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____leaderboardId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>*& GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData::__cordl_internal_get__scores()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scores;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>*> const& GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData::__cordl_internal_get__scores() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scores;
}
constexpr void GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData::__cordl_internal_set__scores(::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____scores)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData* GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>());
}
inline void GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData::__LocalLeaderboardsModel__LeaderboardData()   {
}
//  Writing Method size for method: ::GlobalNamespace::__LocalLeaderboardsModel__SavedLeaderboardsData._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LocalLeaderboardsModel__SavedLeaderboardsData::*)()>(&::GlobalNamespace::__LocalLeaderboardsModel__SavedLeaderboardsData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26b6eb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalLeaderboardsModel__SavedLeaderboardsData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*& GlobalNamespace::__LocalLeaderboardsModel__SavedLeaderboardsData::__cordl_internal_get__leaderboardsData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leaderboardsData;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*> const& GlobalNamespace::__LocalLeaderboardsModel__SavedLeaderboardsData::__cordl_internal_get__leaderboardsData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leaderboardsData;
}
constexpr void GlobalNamespace::__LocalLeaderboardsModel__SavedLeaderboardsData::__cordl_internal_set__leaderboardsData(::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____leaderboardsData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__LocalLeaderboardsModel__SavedLeaderboardsData* GlobalNamespace::__LocalLeaderboardsModel__SavedLeaderboardsData::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__LocalLeaderboardsModel__SavedLeaderboardsData*>());
}
inline void GlobalNamespace::__LocalLeaderboardsModel__SavedLeaderboardsData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalLeaderboardsModel__SavedLeaderboardsData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LocalLeaderboardsModel__SavedLeaderboardsData::__LocalLeaderboardsModel__SavedLeaderboardsData()   {
}
//  Writing Method size for method: ::GlobalNamespace::__LocalLeaderboardsModel____c._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LocalLeaderboardsModel____c::*)()>(&::GlobalNamespace::__LocalLeaderboardsModel____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26b6f18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalLeaderboardsModel____c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LocalLeaderboardsModel____c._AppendLeaderboardScores_b__21_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__LocalLeaderboardsModel____c::*)(::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*, ::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*)>(&::GlobalNamespace::__LocalLeaderboardsModel____c::_AppendLeaderboardScores_b__21_0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x26b6f20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalLeaderboardsModel____c*>::get(),
                        "<AppendLeaderboardScores>b__21_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LocalLeaderboardsModel____c._MigrateQuestLeaderboards_b__22_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__LocalLeaderboardsModel____c::*)(::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*)>(&::GlobalNamespace::__LocalLeaderboardsModel____c::_MigrateQuestLeaderboards_b__22_0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x26b6f44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalLeaderboardsModel____c*>::get(),
                        "<MigrateQuestLeaderboards>b__22_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LocalLeaderboardsModel____c._MigrateQuestLeaderboards_b__22_1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__LocalLeaderboardsModel____c::*)(::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*)>(&::GlobalNamespace::__LocalLeaderboardsModel____c::_MigrateQuestLeaderboards_b__22_1)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x26b6f9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalLeaderboardsModel____c*>::get(),
                        "<MigrateQuestLeaderboards>b__22_1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__LocalLeaderboardsModel____c::setStaticF___9(::GlobalNamespace::__LocalLeaderboardsModel____c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::__LocalLeaderboardsModel____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalLeaderboardsModel____c*>::get>(std::forward<::GlobalNamespace::__LocalLeaderboardsModel____c*>(value));
}
inline ::GlobalNamespace::__LocalLeaderboardsModel____c* GlobalNamespace::__LocalLeaderboardsModel____c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::__LocalLeaderboardsModel____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalLeaderboardsModel____c*>::get>();
}
inline void GlobalNamespace::__LocalLeaderboardsModel____c::setStaticF___9__21_0(::System::Comparison_1<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>*  value)  {
::cordl_internals::setStaticField<::System::Comparison_1<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>*, "<>9__21_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalLeaderboardsModel____c*>::get>(std::forward<::System::Comparison_1<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>*>(value));
}
inline ::System::Comparison_1<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>* GlobalNamespace::__LocalLeaderboardsModel____c::getStaticF___9__21_0()  {
return ::cordl_internals::getStaticField<::System::Comparison_1<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>*, "<>9__21_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalLeaderboardsModel____c*>::get>();
}
inline void GlobalNamespace::__LocalLeaderboardsModel____c::setStaticF___9__22_0(::System::Func_2<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*,bool>*, "<>9__22_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalLeaderboardsModel____c*>::get>(std::forward<::System::Func_2<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*,bool>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*,bool>* GlobalNamespace::__LocalLeaderboardsModel____c::getStaticF___9__22_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*,bool>*, "<>9__22_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalLeaderboardsModel____c*>::get>();
}
inline void GlobalNamespace::__LocalLeaderboardsModel____c::setStaticF___9__22_1(::System::Predicate_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*  value)  {
::cordl_internals::setStaticField<::System::Predicate_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*, "<>9__22_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalLeaderboardsModel____c*>::get>(std::forward<::System::Predicate_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*>(value));
}
inline ::System::Predicate_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>* GlobalNamespace::__LocalLeaderboardsModel____c::getStaticF___9__22_1()  {
return ::cordl_internals::getStaticField<::System::Predicate_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*, "<>9__22_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalLeaderboardsModel____c*>::get>();
}
inline ::GlobalNamespace::__LocalLeaderboardsModel____c* GlobalNamespace::__LocalLeaderboardsModel____c::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__LocalLeaderboardsModel____c*>());
}
inline void GlobalNamespace::__LocalLeaderboardsModel____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalLeaderboardsModel____c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::__LocalLeaderboardsModel____c::_AppendLeaderboardScores_b__21_0(::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*  a, ::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*  b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalLeaderboardsModel____c*>::get(),
                        "<AppendLeaderboardScores>b__21_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, a, b);
}
inline bool GlobalNamespace::__LocalLeaderboardsModel____c::_MigrateQuestLeaderboards_b__22_0(::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*  leaderboardData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalLeaderboardsModel____c*>::get(),
                        "<MigrateQuestLeaderboards>b__22_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, leaderboardData);
}
inline bool GlobalNamespace::__LocalLeaderboardsModel____c::_MigrateQuestLeaderboards_b__22_1(::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*  leaderboardData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalLeaderboardsModel____c*>::get(),
                        "<MigrateQuestLeaderboards>b__22_1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, leaderboardData);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LocalLeaderboardsModel____c::__LocalLeaderboardsModel____c()   {
}
//  Writing Method size for method: ::GlobalNamespace::__LocalLeaderboardsModel___ClearAllLeaderboardsAsync_d__38.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LocalLeaderboardsModel___ClearAllLeaderboardsAsync_d__38::*)()>(&::GlobalNamespace::__LocalLeaderboardsModel___ClearAllLeaderboardsAsync_d__38::MoveNext)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x26b6fa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalLeaderboardsModel___ClearAllLeaderboardsAsync_d__38>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LocalLeaderboardsModel___ClearAllLeaderboardsAsync_d__38.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LocalLeaderboardsModel___ClearAllLeaderboardsAsync_d__38::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__LocalLeaderboardsModel___ClearAllLeaderboardsAsync_d__38::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x26b73d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalLeaderboardsModel___ClearAllLeaderboardsAsync_d__38>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::__LocalLeaderboardsModel___ClearAllLeaderboardsAsync_d__38::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::__LocalLeaderboardsModel___ClearAllLeaderboardsAsync_d__38::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__LocalLeaderboardsModel___ClearAllLeaderboardsAsync_d__38::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalLeaderboardsModel___ClearAllLeaderboardsAsync_d__38>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__LocalLeaderboardsModel___ClearAllLeaderboardsAsync_d__38::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalLeaderboardsModel___ClearAllLeaderboardsAsync_d__38>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::LocalLeaderboardsModel*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "deleteLeaderboardFile", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__LocalLeaderboardsModel___ClearAllLeaderboardsAsync_d__38::__LocalLeaderboardsModel___ClearAllLeaderboardsAsync_d__38(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::GlobalNamespace::LocalLeaderboardsModel*  __4__this, bool  deleteLeaderboardFile, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->deleteLeaderboardFile = deleteLeaderboardFile;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LocalLeaderboardsModel___ClearAllLeaderboardsAsync_d__38::__LocalLeaderboardsModel___ClearAllLeaderboardsAsync_d__38()   {
}
//  Writing Method size for method: ::GlobalNamespace::__LocalLeaderboardsModel___LoadAsync_d__39.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LocalLeaderboardsModel___LoadAsync_d__39::*)()>(&::GlobalNamespace::__LocalLeaderboardsModel___LoadAsync_d__39::MoveNext)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x26b7440;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalLeaderboardsModel___LoadAsync_d__39>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LocalLeaderboardsModel___LoadAsync_d__39.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LocalLeaderboardsModel___LoadAsync_d__39::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__LocalLeaderboardsModel___LoadAsync_d__39::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x26b7784;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalLeaderboardsModel___LoadAsync_d__39>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::__LocalLeaderboardsModel___LoadAsync_d__39::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::__LocalLeaderboardsModel___LoadAsync_d__39::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__LocalLeaderboardsModel___LoadAsync_d__39::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalLeaderboardsModel___LoadAsync_d__39>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__LocalLeaderboardsModel___LoadAsync_d__39::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalLeaderboardsModel___LoadAsync_d__39>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::LocalLeaderboardsModel*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__LocalLeaderboardsModel___LoadAsync_d__39::__LocalLeaderboardsModel___LoadAsync_d__39(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::GlobalNamespace::LocalLeaderboardsModel*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LocalLeaderboardsModel___LoadAsync_d__39::__LocalLeaderboardsModel___LoadAsync_d__39()   {
}
//  Writing Method size for method: ::GlobalNamespace::__LocalLeaderboardsModel___LoadLeaderboardsDataAsync_d__16.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LocalLeaderboardsModel___LoadLeaderboardsDataAsync_d__16::*)()>(&::GlobalNamespace::__LocalLeaderboardsModel___LoadLeaderboardsDataAsync_d__16::MoveNext)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x26b77ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalLeaderboardsModel___LoadLeaderboardsDataAsync_d__16>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LocalLeaderboardsModel___LoadLeaderboardsDataAsync_d__16.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LocalLeaderboardsModel___LoadLeaderboardsDataAsync_d__16::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__LocalLeaderboardsModel___LoadLeaderboardsDataAsync_d__16::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x26b7a4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalLeaderboardsModel___LoadLeaderboardsDataAsync_d__16>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::__LocalLeaderboardsModel___LoadLeaderboardsDataAsync_d__16::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::__LocalLeaderboardsModel___LoadLeaderboardsDataAsync_d__16::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__LocalLeaderboardsModel___LoadLeaderboardsDataAsync_d__16::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalLeaderboardsModel___LoadLeaderboardsDataAsync_d__16>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__LocalLeaderboardsModel___LoadLeaderboardsDataAsync_d__16::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalLeaderboardsModel___LoadLeaderboardsDataAsync_d__16>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::LocalLeaderboardsModel*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "filename", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__LocalLeaderboardsModel__SavedLeaderboardsData*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__LocalLeaderboardsModel___LoadLeaderboardsDataAsync_d__16::__LocalLeaderboardsModel___LoadLeaderboardsDataAsync_d__16(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*>  __t__builder, ::GlobalNamespace::LocalLeaderboardsModel*  __4__this, ::StringW  filename, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__LocalLeaderboardsModel__SavedLeaderboardsData*>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->filename = filename;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LocalLeaderboardsModel___LoadLeaderboardsDataAsync_d__16::__LocalLeaderboardsModel___LoadLeaderboardsDataAsync_d__16()   {
}
//  Writing Method size for method: ::GlobalNamespace::__LocalLeaderboardsModel___SaveAsync_d__23.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LocalLeaderboardsModel___SaveAsync_d__23::*)()>(&::GlobalNamespace::__LocalLeaderboardsModel___SaveAsync_d__23::MoveNext)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x26b7ac8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalLeaderboardsModel___SaveAsync_d__23>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LocalLeaderboardsModel___SaveAsync_d__23.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LocalLeaderboardsModel___SaveAsync_d__23::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__LocalLeaderboardsModel___SaveAsync_d__23::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x26b7d90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalLeaderboardsModel___SaveAsync_d__23>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::__LocalLeaderboardsModel___SaveAsync_d__23::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::__LocalLeaderboardsModel___SaveAsync_d__23::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__LocalLeaderboardsModel___SaveAsync_d__23::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalLeaderboardsModel___SaveAsync_d__23>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__LocalLeaderboardsModel___SaveAsync_d__23::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalLeaderboardsModel___SaveAsync_d__23>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::LocalLeaderboardsModel*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__LocalLeaderboardsModel___SaveAsync_d__23::__LocalLeaderboardsModel___SaveAsync_d__23(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::GlobalNamespace::LocalLeaderboardsModel*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LocalLeaderboardsModel___SaveAsync_d__23::__LocalLeaderboardsModel___SaveAsync_d__23()   {
}
//  Writing Method size for method: ::GlobalNamespace::__LocalLeaderboardsModel___SaveLeaderboardsData_d__19.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LocalLeaderboardsModel___SaveLeaderboardsData_d__19::*)()>(&::GlobalNamespace::__LocalLeaderboardsModel___SaveLeaderboardsData_d__19::MoveNext)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x26b7df8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalLeaderboardsModel___SaveLeaderboardsData_d__19>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LocalLeaderboardsModel___SaveLeaderboardsData_d__19.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LocalLeaderboardsModel___SaveLeaderboardsData_d__19::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__LocalLeaderboardsModel___SaveLeaderboardsData_d__19::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x26b8124;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalLeaderboardsModel___SaveLeaderboardsData_d__19>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::__LocalLeaderboardsModel___SaveLeaderboardsData_d__19::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::__LocalLeaderboardsModel___SaveLeaderboardsData_d__19::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__LocalLeaderboardsModel___SaveLeaderboardsData_d__19::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalLeaderboardsModel___SaveLeaderboardsData_d__19>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__LocalLeaderboardsModel___SaveLeaderboardsData_d__19::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalLeaderboardsModel___SaveLeaderboardsData_d__19>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "leaderboardsData", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::LocalLeaderboardsModel*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "filename", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__LocalLeaderboardsModel___SaveLeaderboardsData_d__19::__LocalLeaderboardsModel___SaveLeaderboardsData_d__19(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*  leaderboardsData, ::GlobalNamespace::LocalLeaderboardsModel*  __4__this, ::StringW  filename, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->leaderboardsData = leaderboardsData;
this->__4__this = __4__this;
this->filename = filename;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LocalLeaderboardsModel___SaveLeaderboardsData_d__19::__LocalLeaderboardsModel___SaveLeaderboardsData_d__19()   {
}
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.add_newScoreWasAddedToLeaderboardEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalLeaderboardsModel::*)(::System::Action_2<::StringW,::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType>*)>(&::GlobalNamespace::LocalLeaderboardsModel::add_newScoreWasAddedToLeaderboardEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x26b54e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(),
                        "add_newScoreWasAddedToLeaderboardEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW,::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.remove_newScoreWasAddedToLeaderboardEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalLeaderboardsModel::*)(::System::Action_2<::StringW,::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType>*)>(&::GlobalNamespace::LocalLeaderboardsModel::remove_newScoreWasAddedToLeaderboardEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x26b5598;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(),
                        "remove_newScoreWasAddedToLeaderboardEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW,::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalLeaderboardsModel::*)(::GlobalNamespace::IFileStorage*, ::GlobalNamespace::LocalLeaderboardsSettingsSO*)>(&::GlobalNamespace::LocalLeaderboardsModel::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x26b5648;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IFileStorage*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LocalLeaderboardsSettingsSO*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.LoadLeaderboardsDataAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*>* (::GlobalNamespace::LocalLeaderboardsModel::*)(::StringW)>(&::GlobalNamespace::LocalLeaderboardsModel::LoadLeaderboardsDataAsync)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x26b56ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(),
                        "LoadLeaderboardsDataAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.LoadLeaderboardsData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>* (::GlobalNamespace::LocalLeaderboardsModel::*)(::StringW)>(&::GlobalNamespace::LocalLeaderboardsModel::LoadLeaderboardsData)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x26b57d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(),
                        "LoadLeaderboardsData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.LoadLeaderboardsDataInternal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>* (*)(::GlobalNamespace::__LocalLeaderboardsModel__SavedLeaderboardsData*)>(&::GlobalNamespace::LocalLeaderboardsModel::LoadLeaderboardsDataInternal)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x26b5838;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(),
                        "LoadLeaderboardsDataInternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalLeaderboardsModel__SavedLeaderboardsData*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.SaveLeaderboardsData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::LocalLeaderboardsModel::*)(::StringW, ::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*)>(&::GlobalNamespace::LocalLeaderboardsModel::SaveLeaderboardsData)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x26b58b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(),
                        "SaveLeaderboardsData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.SaveLeaderboardsDataAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::LocalLeaderboardsModel::*)(::StringW, ::StringW)>(&::GlobalNamespace::LocalLeaderboardsModel::SaveLeaderboardsDataAsync)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x26b5984;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(),
                        "SaveLeaderboardsDataAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.AppendLeaderboardScores
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>*, ::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>*, int32_t)>(&::GlobalNamespace::LocalLeaderboardsModel::AppendLeaderboardScores)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x26b5a40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(),
                        "AppendLeaderboardScores",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.MigrateQuestLeaderboards
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*, int32_t)>(&::GlobalNamespace::LocalLeaderboardsModel::MigrateQuestLeaderboards)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x26b5bbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(),
                        "MigrateQuestLeaderboards",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.SaveAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::LocalLeaderboardsModel::*)()>(&::GlobalNamespace::LocalLeaderboardsModel::SaveAsync)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x26b5f0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(),
                        "SaveAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.GetLeaderboardsData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>* (::GlobalNamespace::LocalLeaderboardsModel::*)(::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType)>(&::GlobalNamespace::LocalLeaderboardsModel::GetLeaderboardsData)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x26b5fcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(),
                        "GetLeaderboardsData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.GetLeaderboardData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData* (::GlobalNamespace::LocalLeaderboardsModel::*)(::StringW, ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType)>(&::GlobalNamespace::LocalLeaderboardsModel::GetLeaderboardData)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x26b5ff4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(),
                        "GetLeaderboardData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.GetCurrentTimestamp
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::GlobalNamespace::LocalLeaderboardsModel::*)()>(&::GlobalNamespace::LocalLeaderboardsModel::GetCurrentTimestamp)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x26b60c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(),
                        "GetCurrentTimestamp",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.UpdateDailyLeaderboard
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalLeaderboardsModel::*)(::StringW)>(&::GlobalNamespace::LocalLeaderboardsModel::UpdateDailyLeaderboard)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x26b61bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(),
                        "UpdateDailyLeaderboard",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.AddScore
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalLeaderboardsModel::*)(::StringW, ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType, ::StringW, int32_t, bool)>(&::GlobalNamespace::LocalLeaderboardsModel::AddScore)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x26b63ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(),
                        "AddScore",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.WillScoreGoIntoLeaderboard
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::LocalLeaderboardsModel::*)(::StringW, ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType, int32_t)>(&::GlobalNamespace::LocalLeaderboardsModel::WillScoreGoIntoLeaderboard)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x26b66b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(),
                        "WillScoreGoIntoLeaderboard",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.GetScores
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>* (::GlobalNamespace::LocalLeaderboardsModel::*)(::StringW, ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType)>(&::GlobalNamespace::LocalLeaderboardsModel::GetScores)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x26b677c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(),
                        "GetScores",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.GetHighScore
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::LocalLeaderboardsModel::*)(::StringW, ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType)>(&::GlobalNamespace::LocalLeaderboardsModel::GetHighScore)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x26b6794;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(),
                        "GetHighScore",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.GetPositionInLeaderboard
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::LocalLeaderboardsModel::*)(::StringW, ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType, int32_t)>(&::GlobalNamespace::LocalLeaderboardsModel::GetPositionInLeaderboard)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x26b6838;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(),
                        "GetPositionInLeaderboard",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.GetLastScorePosition
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::LocalLeaderboardsModel::*)(::StringW, ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType)>(&::GlobalNamespace::LocalLeaderboardsModel::GetLastScorePosition)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x26b690c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(),
                        "GetLastScorePosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.ClearLastScorePosition
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalLeaderboardsModel::*)()>(&::GlobalNamespace::LocalLeaderboardsModel::ClearLastScorePosition)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x26b69a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(),
                        "ClearLastScorePosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.AddScore
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalLeaderboardsModel::*)(::StringW, ::StringW, int32_t, bool)>(&::GlobalNamespace::LocalLeaderboardsModel::AddScore)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x26b69fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(),
                        "AddScore",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.WillScoreGoIntoLeaderboard
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::LocalLeaderboardsModel::*)(::StringW, int32_t)>(&::GlobalNamespace::LocalLeaderboardsModel::WillScoreGoIntoLeaderboard)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x26b6a58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(),
                        "WillScoreGoIntoLeaderboard",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.ClearLeaderboard
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalLeaderboardsModel::*)(::StringW)>(&::GlobalNamespace::LocalLeaderboardsModel::ClearLeaderboard)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x26b6aa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(),
                        "ClearLeaderboard",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.ClearAllLeaderboardsAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::LocalLeaderboardsModel::*)(bool)>(&::GlobalNamespace::LocalLeaderboardsModel::ClearAllLeaderboardsAsync)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x26b6be4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(),
                        "ClearAllLeaderboardsAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.LoadAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::LocalLeaderboardsModel::*)()>(&::GlobalNamespace::LocalLeaderboardsModel::LoadAsync)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x26b6cbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(),
                        "LoadAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.Load
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalLeaderboardsModel::*)()>(&::GlobalNamespace::LocalLeaderboardsModel::Load)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x26b6d7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(),
                        "Load",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.LoadInternal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalLeaderboardsModel::*)()>(&::GlobalNamespace::LocalLeaderboardsModel::LoadInternal)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x26b6dfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(),
                        "LoadInternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_2<::StringW,::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType>*& GlobalNamespace::LocalLeaderboardsModel::__cordl_internal_get_newScoreWasAddedToLeaderboardEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newScoreWasAddedToLeaderboardEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::StringW,::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType>*> const& GlobalNamespace::LocalLeaderboardsModel::__cordl_internal_get_newScoreWasAddedToLeaderboardEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newScoreWasAddedToLeaderboardEvent;
}
constexpr void GlobalNamespace::LocalLeaderboardsModel::__cordl_internal_set_newScoreWasAddedToLeaderboardEvent(::System::Action_2<::StringW,::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___newScoreWasAddedToLeaderboardEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IFileStorage*& GlobalNamespace::LocalLeaderboardsModel::__cordl_internal_get__fileStorage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fileStorage;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IFileStorage*> const& GlobalNamespace::LocalLeaderboardsModel::__cordl_internal_get__fileStorage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fileStorage;
}
constexpr void GlobalNamespace::LocalLeaderboardsModel::__cordl_internal_set__fileStorage(::GlobalNamespace::IFileStorage*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____fileStorage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::LocalLeaderboardsModel::__cordl_internal_get__maxNumberOfScoresInLeaderboard()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxNumberOfScoresInLeaderboard;
}
constexpr int32_t const& GlobalNamespace::LocalLeaderboardsModel::__cordl_internal_get__maxNumberOfScoresInLeaderboard() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxNumberOfScoresInLeaderboard;
}
constexpr void GlobalNamespace::LocalLeaderboardsModel::__cordl_internal_set__maxNumberOfScoresInLeaderboard(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxNumberOfScoresInLeaderboard = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType,int32_t>*& GlobalNamespace::LocalLeaderboardsModel::__cordl_internal_get__lastScorePositions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastScorePositions;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType,int32_t>*> const& GlobalNamespace::LocalLeaderboardsModel::__cordl_internal_get__lastScorePositions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastScorePositions;
}
constexpr void GlobalNamespace::LocalLeaderboardsModel::__cordl_internal_set__lastScorePositions(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lastScorePositions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::LocalLeaderboardsModel::__cordl_internal_get__lastScoreLeaderboardId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastScoreLeaderboardId;
}
constexpr ::StringW const& GlobalNamespace::LocalLeaderboardsModel::__cordl_internal_get__lastScoreLeaderboardId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastScoreLeaderboardId;
}
constexpr void GlobalNamespace::LocalLeaderboardsModel::__cordl_internal_set__lastScoreLeaderboardId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lastScoreLeaderboardId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*& GlobalNamespace::LocalLeaderboardsModel::__cordl_internal_get__leaderboardsData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leaderboardsData;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*> const& GlobalNamespace::LocalLeaderboardsModel::__cordl_internal_get__leaderboardsData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leaderboardsData;
}
constexpr void GlobalNamespace::LocalLeaderboardsModel::__cordl_internal_set__leaderboardsData(::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____leaderboardsData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*& GlobalNamespace::LocalLeaderboardsModel::__cordl_internal_get__dailyLeaderboardsData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dailyLeaderboardsData;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*> const& GlobalNamespace::LocalLeaderboardsModel::__cordl_internal_get__dailyLeaderboardsData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dailyLeaderboardsData;
}
constexpr void GlobalNamespace::LocalLeaderboardsModel::__cordl_internal_set__dailyLeaderboardsData(::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dailyLeaderboardsData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::LocalLeaderboardsModel::add_newScoreWasAddedToLeaderboardEvent(::System::Action_2<::StringW,::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(),
                        "add_newScoreWasAddedToLeaderboardEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW,::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LocalLeaderboardsModel::remove_newScoreWasAddedToLeaderboardEvent(::System::Action_2<::StringW,::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(),
                        "remove_newScoreWasAddedToLeaderboardEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW,::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::LocalLeaderboardsModel* GlobalNamespace::LocalLeaderboardsModel::New_ctor(::GlobalNamespace::IFileStorage*  fileStorage, ::GlobalNamespace::LocalLeaderboardsSettingsSO*  localLeaderboardsSettingsSo)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::LocalLeaderboardsModel*>(fileStorage, localLeaderboardsSettingsSo));
}
inline void GlobalNamespace::LocalLeaderboardsModel::_ctor(::GlobalNamespace::IFileStorage*  fileStorage, ::GlobalNamespace::LocalLeaderboardsSettingsSO*  localLeaderboardsSettingsSo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IFileStorage*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LocalLeaderboardsSettingsSO*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fileStorage, localLeaderboardsSettingsSo);
}
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*>* GlobalNamespace::LocalLeaderboardsModel::LoadLeaderboardsDataAsync(::StringW  filename)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(),
                        "LoadLeaderboardsDataAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*>*, false>(this, ___internal_method, filename);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>* GlobalNamespace::LocalLeaderboardsModel::LoadLeaderboardsData(::StringW  filename)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(),
                        "LoadLeaderboardsData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*, false>(this, ___internal_method, filename);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>* GlobalNamespace::LocalLeaderboardsModel::LoadLeaderboardsDataInternal(::GlobalNamespace::__LocalLeaderboardsModel__SavedLeaderboardsData*  savedLeaderboardsData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(),
                        "LoadLeaderboardsDataInternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalLeaderboardsModel__SavedLeaderboardsData*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*, false>(nullptr, ___internal_method, savedLeaderboardsData);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::LocalLeaderboardsModel::SaveLeaderboardsData(::StringW  filename, ::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*  leaderboardsData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(),
                        "SaveLeaderboardsData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, filename, leaderboardsData);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::LocalLeaderboardsModel::SaveLeaderboardsDataAsync(::StringW  filename, ::StringW  json)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(),
                        "SaveLeaderboardsDataAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, filename, json);
}
inline void GlobalNamespace::LocalLeaderboardsModel::AppendLeaderboardScores(::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>*  main, ::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>*  tail, int32_t  maxNumberOfScores)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(),
                        "AppendLeaderboardScores",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, main, tail, maxNumberOfScores);
}
inline void GlobalNamespace::LocalLeaderboardsModel::MigrateQuestLeaderboards(::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*  leaderboardDataList, int32_t  maxNumberOfScores)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(),
                        "MigrateQuestLeaderboards",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, leaderboardDataList, maxNumberOfScores);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::LocalLeaderboardsModel::SaveAsync()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(),
                        "SaveAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>* GlobalNamespace::LocalLeaderboardsModel::GetLeaderboardsData(::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType  leaderboardType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(),
                        "GetLeaderboardsData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*>*, false>(this, ___internal_method, leaderboardType);
}
inline ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData* GlobalNamespace::LocalLeaderboardsModel::GetLeaderboardData(::StringW  leaderboardId, ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType  leaderboardType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(),
                        "GetLeaderboardData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardData*, false>(this, ___internal_method, leaderboardId, leaderboardType);
}
inline int64_t GlobalNamespace::LocalLeaderboardsModel::GetCurrentTimestamp()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(),
                        "GetCurrentTimestamp",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::LocalLeaderboardsModel::UpdateDailyLeaderboard(::StringW  leaderboardId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(),
                        "UpdateDailyLeaderboard",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, leaderboardId);
}
inline void GlobalNamespace::LocalLeaderboardsModel::AddScore(::StringW  leaderboardId, ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType  leaderboardType, ::StringW  playerName, int32_t  score, bool  fullCombo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(),
                        "AddScore",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, leaderboardId, leaderboardType, playerName, score, fullCombo);
}
inline bool GlobalNamespace::LocalLeaderboardsModel::WillScoreGoIntoLeaderboard(::StringW  leaderboardId, ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType  leaderboardType, int32_t  score)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(),
                        "WillScoreGoIntoLeaderboard",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, leaderboardId, leaderboardType, score);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>* GlobalNamespace::LocalLeaderboardsModel::GetScores(::StringW  leaderboardId, ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType  leaderboardType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(),
                        "GetScores",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>*, false>(this, ___internal_method, leaderboardId, leaderboardType);
}
inline int32_t GlobalNamespace::LocalLeaderboardsModel::GetHighScore(::StringW  leaderboardId, ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType  leaderboardType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(),
                        "GetHighScore",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, leaderboardId, leaderboardType);
}
inline int32_t GlobalNamespace::LocalLeaderboardsModel::GetPositionInLeaderboard(::StringW  leaderboardId, ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType  leaderboardType, int32_t  score)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(),
                        "GetPositionInLeaderboard",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, leaderboardId, leaderboardType, score);
}
inline int32_t GlobalNamespace::LocalLeaderboardsModel::GetLastScorePosition(::StringW  leaderboardId, ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType  leaderboardType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(),
                        "GetLastScorePosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, leaderboardId, leaderboardType);
}
inline void GlobalNamespace::LocalLeaderboardsModel::ClearLastScorePosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(),
                        "ClearLastScorePosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LocalLeaderboardsModel::AddScore(::StringW  leaderboardId, ::StringW  playerName, int32_t  score, bool  fullCombo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(),
                        "AddScore",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, leaderboardId, playerName, score, fullCombo);
}
inline bool GlobalNamespace::LocalLeaderboardsModel::WillScoreGoIntoLeaderboard(::StringW  leaderboardId, int32_t  score)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(),
                        "WillScoreGoIntoLeaderboard",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, leaderboardId, score);
}
inline void GlobalNamespace::LocalLeaderboardsModel::ClearLeaderboard(::StringW  leaderboardId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(),
                        "ClearLeaderboard",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, leaderboardId);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::LocalLeaderboardsModel::ClearAllLeaderboardsAsync(bool  deleteLeaderboardFile)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(),
                        "ClearAllLeaderboardsAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, deleteLeaderboardFile);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::LocalLeaderboardsModel::LoadAsync()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(),
                        "LoadAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline void GlobalNamespace::LocalLeaderboardsModel::Load()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(),
                        "Load",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LocalLeaderboardsModel::LoadInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel*>::get(),
                        "LoadInternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocalLeaderboardsModel::LocalLeaderboardsModel()   {
}
