#pragma once
// IWYU pragma private; include "GlobalNamespace/TutorialBeatmapObjectPoolsInstaller.hpp"
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__TutorialBeatmapObjectPoolsInstaller_def.hpp"
#include "GlobalNamespace/zzzz__BombNoteController_def.hpp"
#include "GlobalNamespace/zzzz__NoteLineConnectionController_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleController_def.hpp"
#include "GlobalNamespace/zzzz__TutorialNoteController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TutorialBeatmapObjectPoolsInstaller.InstallBindings
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::*)()>(&::GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x3b60a80;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialBeatmapObjectPoolsInstaller*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialBeatmapObjectPoolsInstaller*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialBeatmapObjectPoolsInstaller._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::*)()>(&::GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b60c0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialBeatmapObjectPoolsInstaller*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::TutorialNoteController>& GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::__cordl_internal_get__basicNotePrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____basicNotePrefab;
}
constexpr ::UnityW<::GlobalNamespace::TutorialNoteController> const& GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::__cordl_internal_get__basicNotePrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____basicNotePrefab;
}
constexpr void GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::__cordl_internal_set__basicNotePrefab(::UnityW<::GlobalNamespace::TutorialNoteController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____basicNotePrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::BombNoteController>& GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::__cordl_internal_get__bombNotePrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bombNotePrefab;
}
constexpr ::UnityW<::GlobalNamespace::BombNoteController> const& GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::__cordl_internal_get__bombNotePrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bombNotePrefab;
}
constexpr void GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::__cordl_internal_set__bombNotePrefab(::UnityW<::GlobalNamespace::BombNoteController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bombNotePrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::ObstacleController>& GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::__cordl_internal_get__obstaclePrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____obstaclePrefab;
}
constexpr ::UnityW<::GlobalNamespace::ObstacleController> const& GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::__cordl_internal_get__obstaclePrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____obstaclePrefab;
}
constexpr void GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::__cordl_internal_set__obstaclePrefab(::UnityW<::GlobalNamespace::ObstacleController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____obstaclePrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::NoteLineConnectionController>& GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::__cordl_internal_get__noteLineConnectionControllerPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noteLineConnectionControllerPrefab;
}
constexpr ::UnityW<::GlobalNamespace::NoteLineConnectionController> const& GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::__cordl_internal_get__noteLineConnectionControllerPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noteLineConnectionControllerPrefab;
}
constexpr void GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::__cordl_internal_set__noteLineConnectionControllerPrefab(::UnityW<::GlobalNamespace::NoteLineConnectionController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noteLineConnectionControllerPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::InstallBindings()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialBeatmapObjectPoolsInstaller*>::get(),
                    8
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::TutorialBeatmapObjectPoolsInstaller* GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::TutorialBeatmapObjectPoolsInstaller*>());
}
inline void GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialBeatmapObjectPoolsInstaller*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::TutorialBeatmapObjectPoolsInstaller()   {
}
