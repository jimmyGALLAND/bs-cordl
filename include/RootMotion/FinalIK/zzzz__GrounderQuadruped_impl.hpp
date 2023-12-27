#pragma once
#include "RootMotion/FinalIK/zzzz__Grounder_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "RootMotion/FinalIK/zzzz__GrounderQuadruped_def.hpp"
#include "RootMotion/FinalIK/zzzz__IK_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "RootMotion/FinalIK/zzzz__GrounderQuadruped_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "RootMotion/FinalIK/zzzz__Grounding_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolver_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
//  Writing Method size for method: ::RootMotion::FinalIK::__GrounderQuadruped__Foot._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::RootMotion::FinalIK::__GrounderQuadruped__Foot::*)(::RootMotion::FinalIK::IKSolver*, ::UnityEngine::Transform*)>(&::RootMotion::FinalIK::__GrounderQuadruped__Foot::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x1249b74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__GrounderQuadruped__Foot>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::IKSolver*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
inline void RootMotion::FinalIK::__GrounderQuadruped__Foot::_ctor(::RootMotion::FinalIK::IKSolver* solver, ::UnityEngine::Transform* transform) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__GrounderQuadruped__Foot>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::IKSolver*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, solver, transform);
}
// Ctor Parameters [CppParam { name: "solver", ty: "::RootMotion::FinalIK::IKSolver*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "transform", ty: "::UnityEngine::Transform*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}") }, CppParam { name: "leg", ty:
// "::RootMotion::FinalIK::__Grounding__Leg*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::RootMotion::FinalIK::__GrounderQuadruped__Foot::__GrounderQuadruped__Foot(::RootMotion::FinalIK::IKSolver* solver, ::UnityEngine::Transform* transform, ::UnityEngine::Quaternion rotation,
                                                                                      ::RootMotion::FinalIK::__Grounding__Leg* leg) noexcept {
  this->solver = solver;
  this->transform = transform;
  this->rotation = rotation;
  this->leg = leg;
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::__GrounderQuadruped__Foot::__GrounderQuadruped__Foot() {}
//  Writing Method size for method: ::RootMotion::FinalIK::GrounderQuadruped.OpenUserManual
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::GrounderQuadruped::*)()>(&::RootMotion::FinalIK::GrounderQuadruped::OpenUserManual)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x12490b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderQuadruped*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderQuadruped*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::GrounderQuadruped.OpenScriptReference
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::GrounderQuadruped::*)()>(
    &::RootMotion::FinalIK::GrounderQuadruped::OpenScriptReference)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x12490fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderQuadruped*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderQuadruped*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::GrounderQuadruped.ResetPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::GrounderQuadruped::*)()>(&::RootMotion::FinalIK::GrounderQuadruped::ResetPosition)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1249140;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderQuadruped*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderQuadruped*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::GrounderQuadruped.IsReadyToInitiate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::GrounderQuadruped::*)()>(&::RootMotion::FinalIK::GrounderQuadruped::IsReadyToInitiate)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x1249168;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderQuadruped*>::get(),
                                                                               "IsReadyToInitiate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::GrounderQuadruped.IsReadyToInitiateLegs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::GrounderQuadruped::*)(
    ::ArrayW<::RootMotion::FinalIK::IK*, ::Array<::RootMotion::FinalIK::IK*>*>)>(&::RootMotion::FinalIK::GrounderQuadruped::IsReadyToInitiateLegs)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x124926c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderQuadruped*>::get(), "IsReadyToInitiateLegs", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::RootMotion::FinalIK::IK*, ::Array<::RootMotion::FinalIK::IK*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::GrounderQuadruped.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::GrounderQuadruped::*)()>(&::RootMotion::FinalIK::GrounderQuadruped::OnDisable)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x1249450;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderQuadruped*>::get(), "OnDisable",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::GrounderQuadruped.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::GrounderQuadruped::*)()>(&::RootMotion::FinalIK::GrounderQuadruped::Update)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x12494b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderQuadruped*>::get(), "Update",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::GrounderQuadruped.Initiate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::GrounderQuadruped::*)()>(&::RootMotion::FinalIK::GrounderQuadruped::Initiate)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x124950c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderQuadruped*>::get(), "Initiate",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::GrounderQuadruped.InitiateFeet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> (
    ::RootMotion::FinalIK::GrounderQuadruped::*)(::ArrayW<::RootMotion::FinalIK::IK*, ::Array<::RootMotion::FinalIK::IK*>*>,
                                                 ByRef<::ArrayW<::RootMotion::FinalIK::__GrounderQuadruped__Foot, ::Array<::RootMotion::FinalIK::__GrounderQuadruped__Foot>*>>, int32_t)>(
    &::RootMotion::FinalIK::GrounderQuadruped::InitiateFeet)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x1249820;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderQuadruped*>::get(), "InitiateFeet", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::RootMotion::FinalIK::IK*, ::Array<::RootMotion::FinalIK::IK*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::RootMotion::FinalIK::__GrounderQuadruped__Foot, ::Array<::RootMotion::FinalIK::__GrounderQuadruped__Foot>*>>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::GrounderQuadruped.LateUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::GrounderQuadruped::*)()>(&::RootMotion::FinalIK::GrounderQuadruped::LateUpdate)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1249ba8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderQuadruped*>::get(), "LateUpdate",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::GrounderQuadruped.RootRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::GrounderQuadruped::*)()>(&::RootMotion::FinalIK::GrounderQuadruped::RootRotation)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0x1249c38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderQuadruped*>::get(), "RootRotation",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::GrounderQuadruped.OnSolverUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::GrounderQuadruped::*)()>(&::RootMotion::FinalIK::GrounderQuadruped::OnSolverUpdate)> {
  constexpr static std::size_t size = 0x6c0;
  constexpr static std::size_t addrs = 0x124a088;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderQuadruped*>::get(),
                                                                               "OnSolverUpdate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::GrounderQuadruped.UpdateForefeetRoot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::GrounderQuadruped::*)()>(
    &::RootMotion::FinalIK::GrounderQuadruped::UpdateForefeetRoot)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x124a748;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderQuadruped*>::get(),
                                                                               "UpdateForefeetRoot", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::GrounderQuadruped.SetFootIK
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::GrounderQuadruped::*)(::RootMotion::FinalIK::__GrounderQuadruped__Foot, float_t)>(
    &::RootMotion::FinalIK::GrounderQuadruped::SetFootIK)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x124aa00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderQuadruped*>::get(), "SetFootIK", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__GrounderQuadruped__Foot>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::GrounderQuadruped.OnPostSolverUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::GrounderQuadruped::*)()>(
    &::RootMotion::FinalIK::GrounderQuadruped::OnPostSolverUpdate)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x124ab34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderQuadruped*>::get(),
                                                                               "OnPostSolverUpdate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::GrounderQuadruped.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::GrounderQuadruped::*)()>(&::RootMotion::FinalIK::GrounderQuadruped::OnDestroy)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x124adfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderQuadruped*>::get(), "OnDestroy",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::GrounderQuadruped.DestroyLegs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::GrounderQuadruped::*)(
    ::ArrayW<::RootMotion::FinalIK::IK*, ::Array<::RootMotion::FinalIK::IK*>*>)>(&::RootMotion::FinalIK::GrounderQuadruped::DestroyLegs)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x124ae2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderQuadruped*>::get(), "DestroyLegs", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::RootMotion::FinalIK::IK*, ::Array<::RootMotion::FinalIK::IK*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::GrounderQuadruped._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::GrounderQuadruped::*)()>(&::RootMotion::FinalIK::GrounderQuadruped::_ctor)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x124b028;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderQuadruped*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::RootMotion::FinalIK::Grounding*& RootMotion::FinalIK::GrounderQuadruped::__get_forelegSolver() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___forelegSolver;
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::Grounding*> const& RootMotion::FinalIK::GrounderQuadruped::__get_forelegSolver() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___forelegSolver;
}
constexpr void RootMotion::FinalIK::GrounderQuadruped::__set_forelegSolver(::RootMotion::FinalIK::Grounding* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___forelegSolver)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& RootMotion::FinalIK::GrounderQuadruped::__get_rootRotationWeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___rootRotationWeight;
}
constexpr float_t const& RootMotion::FinalIK::GrounderQuadruped::__get_rootRotationWeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___rootRotationWeight;
}
constexpr void RootMotion::FinalIK::GrounderQuadruped::__set_rootRotationWeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___rootRotationWeight = value;
}
constexpr float_t& RootMotion::FinalIK::GrounderQuadruped::__get_minRootRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___minRootRotation;
}
constexpr float_t const& RootMotion::FinalIK::GrounderQuadruped::__get_minRootRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___minRootRotation;
}
constexpr void RootMotion::FinalIK::GrounderQuadruped::__set_minRootRotation(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___minRootRotation = value;
}
constexpr float_t& RootMotion::FinalIK::GrounderQuadruped::__get_maxRootRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___maxRootRotation;
}
constexpr float_t const& RootMotion::FinalIK::GrounderQuadruped::__get_maxRootRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___maxRootRotation;
}
constexpr void RootMotion::FinalIK::GrounderQuadruped::__set_maxRootRotation(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___maxRootRotation = value;
}
constexpr float_t& RootMotion::FinalIK::GrounderQuadruped::__get_rootRotationSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___rootRotationSpeed;
}
constexpr float_t const& RootMotion::FinalIK::GrounderQuadruped::__get_rootRotationSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___rootRotationSpeed;
}
constexpr void RootMotion::FinalIK::GrounderQuadruped::__set_rootRotationSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___rootRotationSpeed = value;
}
constexpr float_t& RootMotion::FinalIK::GrounderQuadruped::__get_maxLegOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___maxLegOffset;
}
constexpr float_t const& RootMotion::FinalIK::GrounderQuadruped::__get_maxLegOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___maxLegOffset;
}
constexpr void RootMotion::FinalIK::GrounderQuadruped::__set_maxLegOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___maxLegOffset = value;
}
constexpr float_t& RootMotion::FinalIK::GrounderQuadruped::__get_maxForeLegOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___maxForeLegOffset;
}
constexpr float_t const& RootMotion::FinalIK::GrounderQuadruped::__get_maxForeLegOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___maxForeLegOffset;
}
constexpr void RootMotion::FinalIK::GrounderQuadruped::__set_maxForeLegOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___maxForeLegOffset = value;
}
constexpr float_t& RootMotion::FinalIK::GrounderQuadruped::__get_maintainHeadRotationWeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___maintainHeadRotationWeight;
}
constexpr float_t const& RootMotion::FinalIK::GrounderQuadruped::__get_maintainHeadRotationWeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___maintainHeadRotationWeight;
}
constexpr void RootMotion::FinalIK::GrounderQuadruped::__set_maintainHeadRotationWeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___maintainHeadRotationWeight = value;
}
constexpr ::UnityEngine::Transform*& RootMotion::FinalIK::GrounderQuadruped::__get_characterRoot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___characterRoot;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& RootMotion::FinalIK::GrounderQuadruped::__get_characterRoot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___characterRoot;
}
constexpr void RootMotion::FinalIK::GrounderQuadruped::__set_characterRoot(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___characterRoot)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Transform*& RootMotion::FinalIK::GrounderQuadruped::__get_pelvis() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___pelvis;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& RootMotion::FinalIK::GrounderQuadruped::__get_pelvis() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___pelvis;
}
constexpr void RootMotion::FinalIK::GrounderQuadruped::__set_pelvis(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___pelvis)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Transform*& RootMotion::FinalIK::GrounderQuadruped::__get_lastSpineBone() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___lastSpineBone;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& RootMotion::FinalIK::GrounderQuadruped::__get_lastSpineBone() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___lastSpineBone;
}
constexpr void RootMotion::FinalIK::GrounderQuadruped::__set_lastSpineBone(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lastSpineBone)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Transform*& RootMotion::FinalIK::GrounderQuadruped::__get_head() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___head;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& RootMotion::FinalIK::GrounderQuadruped::__get_head() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___head;
}
constexpr void RootMotion::FinalIK::GrounderQuadruped::__set_head(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___head)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::RootMotion::FinalIK::IK*, ::Array<::RootMotion::FinalIK::IK*>*>& RootMotion::FinalIK::GrounderQuadruped::__get_legs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___legs;
}
constexpr ::ArrayW<::RootMotion::FinalIK::IK*, ::Array<::RootMotion::FinalIK::IK*>*> const& RootMotion::FinalIK::GrounderQuadruped::__get_legs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___legs;
}
constexpr void RootMotion::FinalIK::GrounderQuadruped::__set_legs(::ArrayW<::RootMotion::FinalIK::IK*, ::Array<::RootMotion::FinalIK::IK*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___legs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::RootMotion::FinalIK::IK*, ::Array<::RootMotion::FinalIK::IK*>*>& RootMotion::FinalIK::GrounderQuadruped::__get_forelegs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___forelegs;
}
constexpr ::ArrayW<::RootMotion::FinalIK::IK*, ::Array<::RootMotion::FinalIK::IK*>*> const& RootMotion::FinalIK::GrounderQuadruped::__get_forelegs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___forelegs;
}
constexpr void RootMotion::FinalIK::GrounderQuadruped::__set_forelegs(::ArrayW<::RootMotion::FinalIK::IK*, ::Array<::RootMotion::FinalIK::IK*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___forelegs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::GrounderQuadruped::__get_gravity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___gravity;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::GrounderQuadruped::__get_gravity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___gravity;
}
constexpr void RootMotion::FinalIK::GrounderQuadruped::__set_gravity(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___gravity = value;
}
constexpr ::ArrayW<::RootMotion::FinalIK::__GrounderQuadruped__Foot, ::Array<::RootMotion::FinalIK::__GrounderQuadruped__Foot>*>& RootMotion::FinalIK::GrounderQuadruped::__get_feet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___feet;
}
constexpr ::ArrayW<::RootMotion::FinalIK::__GrounderQuadruped__Foot, ::Array<::RootMotion::FinalIK::__GrounderQuadruped__Foot>*> const& RootMotion::FinalIK::GrounderQuadruped::__get_feet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___feet;
}
constexpr void RootMotion::FinalIK::GrounderQuadruped::__set_feet(::ArrayW<::RootMotion::FinalIK::__GrounderQuadruped__Foot, ::Array<::RootMotion::FinalIK::__GrounderQuadruped__Foot>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___feet)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::GrounderQuadruped::__get_animatedPelvisLocalPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___animatedPelvisLocalPosition;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::GrounderQuadruped::__get_animatedPelvisLocalPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___animatedPelvisLocalPosition;
}
constexpr void RootMotion::FinalIK::GrounderQuadruped::__set_animatedPelvisLocalPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___animatedPelvisLocalPosition = value;
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::GrounderQuadruped::__get_animatedPelvisLocalRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___animatedPelvisLocalRotation;
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::GrounderQuadruped::__get_animatedPelvisLocalRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___animatedPelvisLocalRotation;
}
constexpr void RootMotion::FinalIK::GrounderQuadruped::__set_animatedPelvisLocalRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___animatedPelvisLocalRotation = value;
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::GrounderQuadruped::__get_animatedHeadLocalRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___animatedHeadLocalRotation;
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::GrounderQuadruped::__get_animatedHeadLocalRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___animatedHeadLocalRotation;
}
constexpr void RootMotion::FinalIK::GrounderQuadruped::__set_animatedHeadLocalRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___animatedHeadLocalRotation = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::GrounderQuadruped::__get_solvedPelvisLocalPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___solvedPelvisLocalPosition;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::GrounderQuadruped::__get_solvedPelvisLocalPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___solvedPelvisLocalPosition;
}
constexpr void RootMotion::FinalIK::GrounderQuadruped::__set_solvedPelvisLocalPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___solvedPelvisLocalPosition = value;
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::GrounderQuadruped::__get_solvedPelvisLocalRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___solvedPelvisLocalRotation;
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::GrounderQuadruped::__get_solvedPelvisLocalRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___solvedPelvisLocalRotation;
}
constexpr void RootMotion::FinalIK::GrounderQuadruped::__set_solvedPelvisLocalRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___solvedPelvisLocalRotation = value;
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::GrounderQuadruped::__get_solvedHeadLocalRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___solvedHeadLocalRotation;
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::GrounderQuadruped::__get_solvedHeadLocalRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___solvedHeadLocalRotation;
}
constexpr void RootMotion::FinalIK::GrounderQuadruped::__set_solvedHeadLocalRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___solvedHeadLocalRotation = value;
}
constexpr int32_t& RootMotion::FinalIK::GrounderQuadruped::__get_solvedFeet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___solvedFeet;
}
constexpr int32_t const& RootMotion::FinalIK::GrounderQuadruped::__get_solvedFeet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___solvedFeet;
}
constexpr void RootMotion::FinalIK::GrounderQuadruped::__set_solvedFeet(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___solvedFeet = value;
}
constexpr bool& RootMotion::FinalIK::GrounderQuadruped::__get_solved() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___solved;
}
constexpr bool const& RootMotion::FinalIK::GrounderQuadruped::__get_solved() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___solved;
}
constexpr void RootMotion::FinalIK::GrounderQuadruped::__set_solved(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___solved = value;
}
constexpr float_t& RootMotion::FinalIK::GrounderQuadruped::__get_angle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___angle;
}
constexpr float_t const& RootMotion::FinalIK::GrounderQuadruped::__get_angle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___angle;
}
constexpr void RootMotion::FinalIK::GrounderQuadruped::__set_angle(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___angle = value;
}
constexpr ::UnityEngine::Transform*& RootMotion::FinalIK::GrounderQuadruped::__get_forefeetRoot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___forefeetRoot;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& RootMotion::FinalIK::GrounderQuadruped::__get_forefeetRoot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___forefeetRoot;
}
constexpr void RootMotion::FinalIK::GrounderQuadruped::__set_forefeetRoot(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___forefeetRoot)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::GrounderQuadruped::__get_headRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___headRotation;
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::GrounderQuadruped::__get_headRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___headRotation;
}
constexpr void RootMotion::FinalIK::GrounderQuadruped::__set_headRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___headRotation = value;
}
constexpr float_t& RootMotion::FinalIK::GrounderQuadruped::__get_lastWeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___lastWeight;
}
constexpr float_t const& RootMotion::FinalIK::GrounderQuadruped::__get_lastWeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___lastWeight;
}
constexpr void RootMotion::FinalIK::GrounderQuadruped::__set_lastWeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___lastWeight = value;
}
constexpr ::UnityEngine::Rigidbody*& RootMotion::FinalIK::GrounderQuadruped::__get_characterRootRigidbody() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___characterRootRigidbody;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rigidbody*> const& RootMotion::FinalIK::GrounderQuadruped::__get_characterRootRigidbody() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___characterRootRigidbody;
}
constexpr void RootMotion::FinalIK::GrounderQuadruped::__set_characterRootRigidbody(::UnityEngine::Rigidbody* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___characterRootRigidbody)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void RootMotion::FinalIK::GrounderQuadruped::OpenUserManual() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderQuadruped*>::get(), "OpenUserManual",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::GrounderQuadruped::OpenScriptReference() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderQuadruped*>::get(),
                                                                             "OpenScriptReference", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::GrounderQuadruped::ResetPosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderQuadruped*>::get(), "ResetPosition",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool RootMotion::FinalIK::GrounderQuadruped::IsReadyToInitiate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderQuadruped*>::get(),
                                                                             "IsReadyToInitiate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool RootMotion::FinalIK::GrounderQuadruped::IsReadyToInitiateLegs(::ArrayW<::RootMotion::FinalIK::IK*, ::Array<::RootMotion::FinalIK::IK*>*> ikComponents) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderQuadruped*>::get(), "IsReadyToInitiateLegs", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::RootMotion::FinalIK::IK*, ::Array<::RootMotion::FinalIK::IK*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, ikComponents);
}
inline void RootMotion::FinalIK::GrounderQuadruped::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderQuadruped*>::get(), "OnDisable",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::GrounderQuadruped::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderQuadruped*>::get(), "Update",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::GrounderQuadruped::Initiate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderQuadruped*>::get(), "Initiate",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>
RootMotion::FinalIK::GrounderQuadruped::InitiateFeet(::ArrayW<::RootMotion::FinalIK::IK*, ::Array<::RootMotion::FinalIK::IK*>*> ikComponents,
                                                     ByRef<::ArrayW<::RootMotion::FinalIK::__GrounderQuadruped__Foot, ::Array<::RootMotion::FinalIK::__GrounderQuadruped__Foot>*>> f,
                                                     int32_t indexOffset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderQuadruped*>::get(), "InitiateFeet", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::RootMotion::FinalIK::IK*, ::Array<::RootMotion::FinalIK::IK*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::RootMotion::FinalIK::__GrounderQuadruped__Foot, ::Array<::RootMotion::FinalIK::__GrounderQuadruped__Foot>*>>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>, false>(this, ___internal_method, ikComponents, f, indexOffset);
}
inline void RootMotion::FinalIK::GrounderQuadruped::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderQuadruped*>::get(), "LateUpdate",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::GrounderQuadruped::RootRotation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderQuadruped*>::get(), "RootRotation",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::GrounderQuadruped::OnSolverUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderQuadruped*>::get(), "OnSolverUpdate",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::GrounderQuadruped::UpdateForefeetRoot() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderQuadruped*>::get(),
                                                                             "UpdateForefeetRoot", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::GrounderQuadruped::SetFootIK(::RootMotion::FinalIK::__GrounderQuadruped__Foot foot, float_t maxOffset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderQuadruped*>::get(), "SetFootIK", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__GrounderQuadruped__Foot>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, foot, maxOffset);
}
inline void RootMotion::FinalIK::GrounderQuadruped::OnPostSolverUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderQuadruped*>::get(),
                                                                             "OnPostSolverUpdate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::GrounderQuadruped::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderQuadruped*>::get(), "OnDestroy",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::GrounderQuadruped::DestroyLegs(::ArrayW<::RootMotion::FinalIK::IK*, ::Array<::RootMotion::FinalIK::IK*>*> ikComponents) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderQuadruped*>::get(), "DestroyLegs", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::RootMotion::FinalIK::IK*, ::Array<::RootMotion::FinalIK::IK*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ikComponents);
}
inline ::RootMotion::FinalIK::GrounderQuadruped* RootMotion::FinalIK::GrounderQuadruped::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::GrounderQuadruped*>());
}
inline void RootMotion::FinalIK::GrounderQuadruped::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderQuadruped*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::GrounderQuadruped::GrounderQuadruped() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
