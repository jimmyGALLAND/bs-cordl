#pragma once
// IWYU pragma private; include "UnityEngine/Animator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Animator)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine {
struct AnimatorClipInfo;
}
namespace UnityEngine {
class AnimatorControllerParameter;
}
namespace UnityEngine {
struct AnimatorCullingMode;
}
namespace UnityEngine {
struct AnimatorRecorderMode;
}
namespace UnityEngine {
struct AnimatorStateInfo;
}
namespace UnityEngine {
struct AnimatorTransitionInfo;
}
namespace UnityEngine {
struct AnimatorUpdateMode;
}
namespace UnityEngine {
struct AvatarIKGoal;
}
namespace UnityEngine {
struct AvatarIKHint;
}
namespace UnityEngine {
struct AvatarTarget;
}
namespace UnityEngine {
class Avatar;
}
namespace UnityEngine {
struct HumanBodyBones;
}
namespace UnityEngine {
struct MatchTargetWeightMask;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class RuntimeAnimatorController;
}
namespace UnityEngine {
class ScriptableObject;
}
namespace UnityEngine {
struct StateInfoIndex;
}
namespace UnityEngine {
class StateMachineBehaviour;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class Animator;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Animator);
// Type: UnityEngine::Animator
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::Animator*
class CORDL_TYPE Animator : public ::UnityEngine::Behaviour {
public:
// Declarations
 __declspec(property(get=get_allowConstantClipSamplingOptimization, put=set_allowConstantClipSamplingOptimization)) bool  allowConstantClipSamplingOptimization;

 __declspec(property(get=get_angularVelocity)) ::UnityEngine::Vector3  angularVelocity;

 __declspec(property(get=get_animatePhysics, put=set_animatePhysics)) bool  animatePhysics;

 __declspec(property(get=get_applyRootMotion, put=set_applyRootMotion)) bool  applyRootMotion;

 __declspec(property(get=get_avatar, put=set_avatar)) ::UnityW<::UnityEngine::Avatar>  avatar;

 __declspec(property(get=get_avatarRoot)) ::UnityW<::UnityEngine::Transform>  avatarRoot;

 __declspec(property(get=get_bodyPosition, put=set_bodyPosition)) ::UnityEngine::Vector3  bodyPosition;

 __declspec(property(get=get_bodyPositionInternal, put=set_bodyPositionInternal)) ::UnityEngine::Vector3  bodyPositionInternal;

 __declspec(property(get=get_bodyRotation, put=set_bodyRotation)) ::UnityEngine::Quaternion  bodyRotation;

 __declspec(property(get=get_bodyRotationInternal, put=set_bodyRotationInternal)) ::UnityEngine::Quaternion  bodyRotationInternal;

 __declspec(property(get=get_cullingMode, put=set_cullingMode)) ::UnityEngine::AnimatorCullingMode  cullingMode;

 __declspec(property(get=get_deltaPosition)) ::UnityEngine::Vector3  deltaPosition;

 __declspec(property(get=get_deltaRotation)) ::UnityEngine::Quaternion  deltaRotation;

 __declspec(property(get=get_feetPivotActive, put=set_feetPivotActive)) float_t  feetPivotActive;

 __declspec(property(get=get_fireEvents, put=set_fireEvents)) bool  fireEvents;

 __declspec(property(get=get_gravityWeight)) float_t  gravityWeight;

 __declspec(property(get=get_hasBoundPlayables)) bool  hasBoundPlayables;

 __declspec(property(get=get_hasRootMotion)) bool  hasRootMotion;

 __declspec(property(get=get_hasTransformHierarchy)) bool  hasTransformHierarchy;

 __declspec(property(get=get_humanScale)) float_t  humanScale;

 __declspec(property(get=get_isHuman)) bool  isHuman;

 __declspec(property(get=get_isInitialized)) bool  isInitialized;

 __declspec(property(get=get_isMatchingTarget)) bool  isMatchingTarget;

 __declspec(property(get=get_isOptimizable)) bool  isOptimizable;

 __declspec(property(get=get_isRootPositionOrRotationControlledByCurves)) bool  isRootPositionOrRotationControlledByCurves;

 __declspec(property(get=get_keepAnimatorControllerStateOnDisable, put=set_keepAnimatorControllerStateOnDisable)) bool  keepAnimatorControllerStateOnDisable;

 __declspec(property(get=get_keepAnimatorStateOnDisable, put=set_keepAnimatorStateOnDisable)) bool  keepAnimatorStateOnDisable;

 __declspec(property(get=get_layerCount)) int32_t  layerCount;

 __declspec(property(get=get_layersAffectMassCenter, put=set_layersAffectMassCenter)) bool  layersAffectMassCenter;

 __declspec(property(get=get_leftFeetBottomHeight)) float_t  leftFeetBottomHeight;

 __declspec(property(get=get_linearVelocityBlending, put=set_linearVelocityBlending)) bool  linearVelocityBlending;

 __declspec(property(get=get_logWarnings, put=set_logWarnings)) bool  logWarnings;

 __declspec(property(get=get_parameterCount)) int32_t  parameterCount;

 __declspec(property(get=get_parameters)) ::ArrayW<::UnityEngine::AnimatorControllerParameter*,::Array<::UnityEngine::AnimatorControllerParameter*>*>  parameters;

 __declspec(property(get=get_pivotPosition)) ::UnityEngine::Vector3  pivotPosition;

 __declspec(property(get=get_pivotWeight)) float_t  pivotWeight;

 __declspec(property(get=get_playableGraph)) ::UnityEngine::Playables::PlayableGraph  playableGraph;

 __declspec(property(get=get_playbackTime, put=set_playbackTime)) float_t  playbackTime;

 __declspec(property(get=get_recorderMode)) ::UnityEngine::AnimatorRecorderMode  recorderMode;

 __declspec(property(get=get_recorderStartTime, put=set_recorderStartTime)) float_t  recorderStartTime;

 __declspec(property(get=get_recorderStopTime, put=set_recorderStopTime)) float_t  recorderStopTime;

 __declspec(property(get=get_rightFeetBottomHeight)) float_t  rightFeetBottomHeight;

 __declspec(property(get=get_rootPosition, put=set_rootPosition)) ::UnityEngine::Vector3  rootPosition;

 __declspec(property(get=get_rootRotation, put=set_rootRotation)) ::UnityEngine::Quaternion  rootRotation;

 __declspec(property(get=get_runtimeAnimatorController, put=set_runtimeAnimatorController)) ::UnityW<::UnityEngine::RuntimeAnimatorController>  runtimeAnimatorController;

 __declspec(property(get=get_speed, put=set_speed)) float_t  speed;

 __declspec(property(get=get_stabilizeFeet, put=set_stabilizeFeet)) bool  stabilizeFeet;

 __declspec(property(get=get_supportsOnAnimatorMove)) bool  supportsOnAnimatorMove;

 __declspec(property(get=get_targetPosition)) ::UnityEngine::Vector3  targetPosition;

 __declspec(property(get=get_targetRotation)) ::UnityEngine::Quaternion  targetRotation;

 __declspec(property(get=get_updateMode, put=set_updateMode)) ::UnityEngine::AnimatorUpdateMode  updateMode;

 __declspec(property(get=get_velocity)) ::UnityEngine::Vector3  velocity;

 __declspec(property(get=get_writeDefaultValuesOnDisable, put=set_writeDefaultValuesOnDisable)) bool  writeDefaultValuesOnDisable;

/// @brief Method ApplyBuiltinRootMotion, addr 0x47c10f4, size 0x3c, virtual false, abstract: false, final false
inline void ApplyBuiltinRootMotion() ;

/// @brief Method CheckIfInIKPass, addr 0x47bd670, size 0xd0, virtual false, abstract: false, final false
inline void CheckIfInIKPass() ;

/// @brief Method ClearInternalControllerPlayable, addr 0x47c0c1c, size 0x3c, virtual false, abstract: false, final false
inline void ClearInternalControllerPlayable() ;

/// @brief Method ConvertStateMachineBehaviour, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::ArrayW<T,::Array<T>*> ConvertStateMachineBehaviour(::ArrayW<::UnityEngine::ScriptableObject*,::Array<::UnityEngine::ScriptableObject*>*>  rawObjects) ;

/// @brief Method CrossFade, addr 0x47bfee4, size 0x64, virtual false, abstract: false, final false
inline void CrossFade(int32_t  stateHashName, float_t  normalizedTransitionDuration) ;

/// @brief Method CrossFade, addr 0x47bfe74, size 0x70, virtual false, abstract: false, final false
inline void CrossFade(int32_t  stateHashName, float_t  normalizedTransitionDuration, int32_t  layer) ;

/// @brief Method CrossFade, addr 0x47bfe04, size 0x70, virtual false, abstract: false, final false
inline void CrossFade(int32_t  stateHashName, float_t  normalizedTransitionDuration, int32_t  layer, float_t  normalizedTimeOffset) ;

/// @brief Method CrossFade, addr 0x47bfd88, size 0x7c, virtual false, abstract: false, final false
inline void CrossFade(int32_t  stateHashName, float_t  normalizedTransitionDuration, int32_t  layer, float_t  normalizedTimeOffset, float_t  normalizedTransitionTime) ;

/// @brief Method CrossFade, addr 0x47bfd74, size 0x14, virtual false, abstract: false, final false
inline void CrossFade(::StringW  stateName, float_t  normalizedTransitionDuration) ;

/// @brief Method CrossFade, addr 0x47bfd64, size 0x10, virtual false, abstract: false, final false
inline void CrossFade(::StringW  stateName, float_t  normalizedTransitionDuration, int32_t  layer) ;

/// @brief Method CrossFade, addr 0x47bfcb4, size 0x8, virtual false, abstract: false, final false
inline void CrossFade(::StringW  stateName, float_t  normalizedTransitionDuration, int32_t  layer, float_t  normalizedTimeOffset) ;

/// @brief Method CrossFade, addr 0x47bfcbc, size 0xa8, virtual false, abstract: false, final false
inline void CrossFade(::StringW  stateName, float_t  normalizedTransitionDuration, int32_t  layer, float_t  normalizedTimeOffset, float_t  normalizedTransitionTime) ;

/// @brief Method CrossFadeInFixedTime, addr 0x47bfc18, size 0x60, virtual false, abstract: false, final false
inline void CrossFadeInFixedTime(int32_t  stateHashName, float_t  fixedTransitionDuration) ;

/// @brief Method CrossFadeInFixedTime, addr 0x47bfbac, size 0x6c, virtual false, abstract: false, final false
inline void CrossFadeInFixedTime(int32_t  stateHashName, float_t  fixedTransitionDuration, int32_t  layer) ;

/// @brief Method CrossFadeInFixedTime, addr 0x47bfb3c, size 0x70, virtual false, abstract: false, final false
inline void CrossFadeInFixedTime(int32_t  stateHashName, float_t  fixedTransitionDuration, int32_t  layer, float_t  fixedTimeOffset) ;

/// @brief Method CrossFadeInFixedTime, addr 0x47bf8e4, size 0x7c, virtual false, abstract: false, final false
inline void CrossFadeInFixedTime(int32_t  stateHashName, float_t  fixedTransitionDuration, int32_t  layer, float_t  fixedTimeOffset, float_t  normalizedTransitionTime) ;

/// @brief Method CrossFadeInFixedTime, addr 0x47bf81c, size 0x8c, virtual false, abstract: false, final false
inline void CrossFadeInFixedTime(::StringW  stateName, float_t  fixedTransitionDuration) ;

/// @brief Method CrossFadeInFixedTime, addr 0x47bf960, size 0x98, virtual false, abstract: false, final false
inline void CrossFadeInFixedTime(::StringW  stateName, float_t  fixedTransitionDuration, int32_t  layer) ;

/// @brief Method CrossFadeInFixedTime, addr 0x47bf9f8, size 0x9c, virtual false, abstract: false, final false
inline void CrossFadeInFixedTime(::StringW  stateName, float_t  fixedTransitionDuration, int32_t  layer, float_t  fixedTimeOffset) ;

/// @brief Method CrossFadeInFixedTime, addr 0x47bfa94, size 0xa8, virtual false, abstract: false, final false
inline void CrossFadeInFixedTime(::StringW  stateName, float_t  fixedTransitionDuration, int32_t  layer, float_t  fixedTimeOffset, float_t  normalizedTransitionTime) ;

/// @brief Method EvaluateController, addr 0x47c1130, size 0x40, virtual false, abstract: false, final false
inline void EvaluateController() ;

/// @brief Method EvaluateController, addr 0x47c1170, size 0x4c, virtual false, abstract: false, final false
inline void EvaluateController(float_t  deltaTime) ;

/// @brief Method ForceStateNormalizedTime, addr 0x47bf764, size 0x54, virtual false, abstract: false, final false
inline void ForceStateNormalizedTime(float_t  normalizedTime) ;

/// @brief Method GetAnimatorClipInfoCount, addr 0x47bee3c, size 0x54, virtual false, abstract: false, final false
inline int32_t GetAnimatorClipInfoCount(int32_t  layerIndex, bool  current) ;

/// @brief Method GetAnimatorClipInfoInternal, addr 0x47bf04c, size 0x5c, virtual false, abstract: false, final false
inline void GetAnimatorClipInfoInternal(int32_t  layerIndex, bool  isCurrent, ::System::Object*  clips) ;

/// @brief Method GetAnimatorStateInfo, addr 0x47bec1c, size 0x5c, virtual false, abstract: false, final false
inline void GetAnimatorStateInfo(int32_t  layerIndex, ::UnityEngine::StateInfoIndex  stateInfoIndex, ByRef<::UnityEngine::AnimatorStateInfo>  info) ;

/// @brief Method GetAnimatorStateName, addr 0x47c1204, size 0x54, virtual false, abstract: false, final false
inline ::StringW GetAnimatorStateName(int32_t  layerIndex, bool  current) ;

/// @brief Method GetAnimatorTransitionInfo, addr 0x47bedcc, size 0x70, virtual false, abstract: false, final false
inline ::UnityEngine::AnimatorTransitionInfo GetAnimatorTransitionInfo(int32_t  layerIndex) ;

/// @brief Method GetAnimatorTransitionInfo, addr 0x47bed78, size 0x54, virtual false, abstract: false, final false
inline void GetAnimatorTransitionInfo(int32_t  layerIndex, ByRef<::UnityEngine::AnimatorTransitionInfo>  info) ;

/// @brief Method GetBehaviour, addr 0x47be880, size 0x44, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::ScriptableObject> GetBehaviour(::System::Type*  type) ;

/// @brief Method GetBehaviour, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T GetBehaviour() ;

/// @brief Method GetBehaviours, addr 0x47be908, size 0xdc, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::UnityEngine::StateMachineBehaviour>,::Array<::UnityW<::UnityEngine::StateMachineBehaviour>>*> GetBehaviours(int32_t  fullPathHash, int32_t  layerIndex) ;

/// @brief Method GetBehaviours, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::ArrayW<T,::Array<T>*> GetBehaviours() ;

/// @brief Method GetBoneTransform, addr 0x47c0474, size 0x2c0, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> GetBoneTransform(::UnityEngine::HumanBodyBones  humanBoneId) ;

/// @brief Method GetBoneTransformInternal, addr 0x47c07e8, size 0x44, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> GetBoneTransformInternal(int32_t  humanBoneId) ;

/// @brief Method GetBool, addr 0x47bc6fc, size 0x44, virtual false, abstract: false, final false
inline bool GetBool(int32_t  id) ;

/// @brief Method GetBool, addr 0x47bc674, size 0x44, virtual false, abstract: false, final false
inline bool GetBool(::StringW  name) ;

/// @brief Method GetBoolID, addr 0x47bc740, size 0x44, virtual false, abstract: false, final false
inline bool GetBoolID(int32_t  id) ;

/// @brief Method GetBoolString, addr 0x47bc6b8, size 0x44, virtual false, abstract: false, final false
inline bool GetBoolString(::StringW  name) ;

/// @brief Method GetCurrentAnimatorClipInfo, addr 0x47bef20, size 0x44, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::AnimatorClipInfo,::Array<::UnityEngine::AnimatorClipInfo>*> GetCurrentAnimatorClipInfo(int32_t  layerIndex) ;

/// @brief Method GetCurrentAnimatorClipInfo, addr 0x47befa8, size 0xa4, virtual false, abstract: false, final false
inline void GetCurrentAnimatorClipInfo(int32_t  layerIndex, ::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>*  clips) ;

/// @brief Method GetCurrentAnimatorClipInfoCount, addr 0x47bee90, size 0x48, virtual false, abstract: false, final false
inline int32_t GetCurrentAnimatorClipInfoCount(int32_t  layerIndex) ;

/// @brief Method GetCurrentAnimatorStateInfo, addr 0x47bec78, size 0x80, virtual false, abstract: false, final false
inline ::UnityEngine::AnimatorStateInfo GetCurrentAnimatorStateInfo(int32_t  layerIndex) ;

/// @brief Method GetCurrentGraph, addr 0x47c0d80, size 0x44, virtual false, abstract: false, final false
inline void GetCurrentGraph(ByRef<::UnityEngine::Playables::PlayableGraph>  graph) ;

/// @brief Method GetCurrentStateName, addr 0x47c11bc, size 0x48, virtual false, abstract: false, final false
inline ::StringW GetCurrentStateName(int32_t  layerIndex) ;

/// @brief Method GetFloat, addr 0x47bc2ec, size 0x44, virtual false, abstract: false, final false
inline float_t GetFloat(int32_t  id) ;

/// @brief Method GetFloat, addr 0x47bc264, size 0x44, virtual false, abstract: false, final false
inline float_t GetFloat(::StringW  name) ;

/// @brief Method GetFloatID, addr 0x47bc330, size 0x44, virtual false, abstract: false, final false
inline float_t GetFloatID(int32_t  id) ;

/// @brief Method GetFloatString, addr 0x47bc2a8, size 0x44, virtual false, abstract: false, final false
inline float_t GetFloatString(::StringW  name) ;

/// @brief Method GetGoalPosition, addr 0x47bda74, size 0x64, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetGoalPosition(::UnityEngine::AvatarIKGoal  goal) ;

/// @brief Method GetGoalPosition_Injected, addr 0x47bdad8, size 0x54, virtual false, abstract: false, final false
inline void GetGoalPosition_Injected(::UnityEngine::AvatarIKGoal  goal, ByRef<::UnityEngine::Vector3>  ret) ;

/// @brief Method GetGoalRotation, addr 0x47bdc54, size 0x60, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion GetGoalRotation(::UnityEngine::AvatarIKGoal  goal) ;

/// @brief Method GetGoalRotation_Injected, addr 0x47bdcb4, size 0x54, virtual false, abstract: false, final false
inline void GetGoalRotation_Injected(::UnityEngine::AvatarIKGoal  goal, ByRef<::UnityEngine::Quaternion>  ret) ;

/// @brief Method GetGoalWeightPosition, addr 0x47bde58, size 0x44, virtual false, abstract: false, final false
inline float_t GetGoalWeightPosition(::UnityEngine::AvatarIKGoal  goal) ;

/// @brief Method GetGoalWeightRotation, addr 0x47bdf90, size 0x44, virtual false, abstract: false, final false
inline float_t GetGoalWeightRotation(::UnityEngine::AvatarIKGoal  goal) ;

/// @brief Method GetHintPosition, addr 0x47be0a8, size 0x64, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetHintPosition(::UnityEngine::AvatarIKHint  hint) ;

/// @brief Method GetHintPosition_Injected, addr 0x47be10c, size 0x54, virtual false, abstract: false, final false
inline void GetHintPosition_Injected(::UnityEngine::AvatarIKHint  hint, ByRef<::UnityEngine::Vector3>  ret) ;

/// @brief Method GetHintWeightPosition, addr 0x47be2a8, size 0x44, virtual false, abstract: false, final false
inline float_t GetHintWeightPosition(::UnityEngine::AvatarIKHint  hint) ;

/// @brief Method GetIKHintPosition, addr 0x47be080, size 0x28, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetIKHintPosition(::UnityEngine::AvatarIKHint  hint) ;

/// @brief Method GetIKHintPositionWeight, addr 0x47be260, size 0x48, virtual false, abstract: false, final false
inline float_t GetIKHintPositionWeight(::UnityEngine::AvatarIKHint  hint) ;

/// @brief Method GetIKPosition, addr 0x47bda4c, size 0x28, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetIKPosition(::UnityEngine::AvatarIKGoal  goal) ;

/// @brief Method GetIKPositionWeight, addr 0x47bde10, size 0x48, virtual false, abstract: false, final false
inline float_t GetIKPositionWeight(::UnityEngine::AvatarIKGoal  goal) ;

/// @brief Method GetIKRotation, addr 0x47bdc2c, size 0x28, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion GetIKRotation(::UnityEngine::AvatarIKGoal  goal) ;

/// @brief Method GetIKRotationWeight, addr 0x47bdf48, size 0x48, virtual false, abstract: false, final false
inline float_t GetIKRotationWeight(::UnityEngine::AvatarIKGoal  goal) ;

/// @brief Method GetInteger, addr 0x47bc95c, size 0x44, virtual false, abstract: false, final false
inline int32_t GetInteger(int32_t  id) ;

/// @brief Method GetInteger, addr 0x47bc8d4, size 0x44, virtual false, abstract: false, final false
inline int32_t GetInteger(::StringW  name) ;

/// @brief Method GetIntegerID, addr 0x47bc9a0, size 0x44, virtual false, abstract: false, final false
inline int32_t GetIntegerID(int32_t  id) ;

/// @brief Method GetIntegerString, addr 0x47bc918, size 0x44, virtual false, abstract: false, final false
inline int32_t GetIntegerString(::StringW  name) ;

/// @brief Method GetLayerIndex, addr 0x47beb40, size 0x44, virtual false, abstract: false, final false
inline int32_t GetLayerIndex(::StringW  layerName) ;

/// @brief Method GetLayerName, addr 0x47beafc, size 0x44, virtual false, abstract: false, final false
inline ::StringW GetLayerName(int32_t  layerIndex) ;

/// @brief Method GetLayerWeight, addr 0x47beb84, size 0x44, virtual false, abstract: false, final false
inline float_t GetLayerWeight(int32_t  layerIndex) ;

/// @brief Method GetNextAnimatorClipInfo, addr 0x47bef64, size 0x44, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::AnimatorClipInfo,::Array<::UnityEngine::AnimatorClipInfo>*> GetNextAnimatorClipInfo(int32_t  layerIndex) ;

/// @brief Method GetNextAnimatorClipInfo, addr 0x47bf0a8, size 0xa4, virtual false, abstract: false, final false
inline void GetNextAnimatorClipInfo(int32_t  layerIndex, ::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>*  clips) ;

/// @brief Method GetNextAnimatorClipInfoCount, addr 0x47beed8, size 0x48, virtual false, abstract: false, final false
inline int32_t GetNextAnimatorClipInfoCount(int32_t  layerIndex) ;

/// @brief Method GetNextAnimatorStateInfo, addr 0x47becf8, size 0x80, virtual false, abstract: false, final false
inline ::UnityEngine::AnimatorStateInfo GetNextAnimatorStateInfo(int32_t  layerIndex) ;

/// @brief Method GetNextStateName, addr 0x47c1258, size 0x48, virtual false, abstract: false, final false
inline ::StringW GetNextStateName(int32_t  layerIndex) ;

/// @brief Method GetParameter, addr 0x47bf24c, size 0xd0, virtual false, abstract: false, final false
inline ::UnityEngine::AnimatorControllerParameter* GetParameter(int32_t  index) ;

/// @brief Method GetParameterInternal, addr 0x47bf208, size 0x44, virtual false, abstract: false, final false
inline ::UnityEngine::AnimatorControllerParameter* GetParameterInternal(int32_t  index) ;

/// @brief Method GetQuaternion, addr 0x47c15fc, size 0x44, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion GetQuaternion(int32_t  id) ;

/// @brief Method GetQuaternion, addr 0x47c15b8, size 0x44, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion GetQuaternion(::StringW  name) ;

/// @brief Method GetRecorderStartTime, addr 0x47c0a68, size 0x3c, virtual false, abstract: false, final false
inline float_t GetRecorderStartTime() ;

/// @brief Method GetRecorderStopTime, addr 0x47c0ae4, size 0x3c, virtual false, abstract: false, final false
inline float_t GetRecorderStopTime() ;

/// @brief Method GetStats, addr 0x47c0cf0, size 0x3c, virtual false, abstract: false, final false
inline ::StringW GetStats() ;

/// @brief Method GetVector, addr 0x47c156c, size 0x44, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetVector(int32_t  id) ;

/// @brief Method GetVector, addr 0x47c1528, size 0x44, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetVector(::StringW  name) ;

/// @brief Method HasState, addr 0x47c0c58, size 0x54, virtual false, abstract: false, final false
inline bool HasState(int32_t  layerIndex, int32_t  stateID) ;

/// @brief Method InternalGetBehaviours, addr 0x47be8c4, size 0x44, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::UnityEngine::ScriptableObject>,::Array<::UnityW<::UnityEngine::ScriptableObject>>*> InternalGetBehaviours(::System::Type*  type) ;

/// @brief Method InternalGetBehavioursByKey, addr 0x47be9e4, size 0x5c, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::UnityEngine::ScriptableObject>,::Array<::UnityW<::UnityEngine::ScriptableObject>>*> InternalGetBehavioursByKey(int32_t  fullPathHash, int32_t  layerIndex, ::System::Type*  type) ;

/// @brief Method InterruptMatchTarget, addr 0x47bf61c, size 0x40, virtual false, abstract: false, final false
inline void InterruptMatchTarget() ;

/// @brief Method InterruptMatchTarget, addr 0x47bf65c, size 0x44, virtual false, abstract: false, final false
inline void InterruptMatchTarget(bool  completeMatch) ;

/// @brief Method IsBoneTransform, addr 0x47c03f4, size 0x44, virtual false, abstract: false, final false
inline bool IsBoneTransform(::UnityEngine::Transform*  transform) ;

/// @brief Method IsControlled, addr 0x47c03ec, size 0x8, virtual false, abstract: false, final false
inline bool IsControlled(::UnityEngine::Transform*  transform) ;

/// @brief Method IsInIKPass, addr 0x47c0e00, size 0x3c, virtual false, abstract: false, final false
inline bool IsInIKPass() ;

/// @brief Method IsInTransition, addr 0x47bf14c, size 0x44, virtual false, abstract: false, final false
inline bool IsInTransition(int32_t  layerIndex) ;

/// @brief Method IsParameterControlledByCurve, addr 0x47bcddc, size 0x44, virtual false, abstract: false, final false
inline bool IsParameterControlledByCurve(int32_t  id) ;

/// @brief Method IsParameterControlledByCurve, addr 0x47bcd54, size 0x44, virtual false, abstract: false, final false
inline bool IsParameterControlledByCurve(::StringW  name) ;

/// @brief Method IsParameterControlledByCurveID, addr 0x47bce20, size 0x44, virtual false, abstract: false, final false
inline bool IsParameterControlledByCurveID(int32_t  id) ;

/// @brief Method IsParameterControlledByCurveString, addr 0x47bcd98, size 0x44, virtual false, abstract: false, final false
inline bool IsParameterControlledByCurveString(::StringW  name) ;

/// @brief Method MatchTarget, addr 0x47bf5a8, size 0x34, virtual false, abstract: false, final false
inline void MatchTarget(::UnityEngine::Vector3  matchPosition, ::UnityEngine::Quaternion  matchRotation, ::UnityEngine::AvatarTarget  targetBodyPart, ::UnityEngine::MatchTargetWeightMask  weightMask, float_t  startNormalizedTime) ;

/// @brief Method MatchTarget, addr 0x47bf5dc, size 0x20, virtual false, abstract: false, final false
inline void MatchTarget(::UnityEngine::Vector3  matchPosition, ::UnityEngine::Quaternion  matchRotation, ::UnityEngine::AvatarTarget  targetBodyPart, ::UnityEngine::MatchTargetWeightMask  weightMask, float_t  startNormalizedTime, float_t  targetNormalizedTime) ;

/// @brief Method MatchTarget, addr 0x47bf5fc, size 0x20, virtual false, abstract: false, final false
inline void MatchTarget(::UnityEngine::Vector3  matchPosition, ::UnityEngine::Quaternion  matchRotation, ::UnityEngine::AvatarTarget  targetBodyPart, ::UnityEngine::MatchTargetWeightMask  weightMask, float_t  startNormalizedTime, float_t  targetNormalizedTime, bool  completeMatch) ;

/// @brief Method MatchTarget, addr 0x47bf480, size 0x9c, virtual false, abstract: false, final false
inline void MatchTarget(::UnityEngine::Vector3  matchPosition, ::UnityEngine::Quaternion  matchRotation, int32_t  targetBodyPart, ::UnityEngine::MatchTargetWeightMask  weightMask, float_t  startNormalizedTime, float_t  targetNormalizedTime, bool  completeMatch) ;

/// @brief Method MatchTarget_Injected, addr 0x47bf51c, size 0x8c, virtual false, abstract: false, final false
inline void MatchTarget_Injected(ByRef<::UnityEngine::Vector3>  matchPosition, ByRef<::UnityEngine::Quaternion>  matchRotation, int32_t  targetBodyPart, ByRef<::UnityEngine::MatchTargetWeightMask>  weightMask, float_t  startNormalizedTime, float_t  targetNormalizedTime, bool  completeMatch) ;

static inline ::UnityEngine::Animator* New_ctor() ;

/// @brief Method OnCullingModeChanged, addr 0x47c0fac, size 0x3c, virtual false, abstract: false, final false
inline void OnCullingModeChanged() ;

/// @brief Method OnUpdateModeChanged, addr 0x47c0f70, size 0x3c, virtual false, abstract: false, final false
inline void OnUpdateModeChanged() ;

/// @brief Method Play, addr 0x47c01a0, size 0x10, virtual false, abstract: false, final false
inline void Play(::StringW  stateName) ;

/// @brief Method Play, addr 0x47c0104, size 0xc, virtual false, abstract: false, final false
inline void Play(::StringW  stateName, int32_t  layer) ;

/// @brief Method Play, addr 0x47c0110, size 0x90, virtual false, abstract: false, final false
inline void Play(::StringW  stateName, int32_t  layer, float_t  normalizedTime) ;

/// @brief Method Play, addr 0x47c020c, size 0x50, virtual false, abstract: false, final false
inline void Play(int32_t  stateNameHash) ;

/// @brief Method Play, addr 0x47c01b0, size 0x5c, virtual false, abstract: false, final false
inline void Play(int32_t  stateNameHash, int32_t  layer) ;

/// @brief Method Play, addr 0x47bf7b8, size 0x64, virtual false, abstract: false, final false
inline void Play(int32_t  stateNameHash, int32_t  layer, float_t  normalizedTime) ;

/// @brief Method PlayInFixedTime, addr 0x47bffe4, size 0x10, virtual false, abstract: false, final false
inline void PlayInFixedTime(::StringW  stateName) ;

/// @brief Method PlayInFixedTime, addr 0x47bff48, size 0xc, virtual false, abstract: false, final false
inline void PlayInFixedTime(::StringW  stateName, int32_t  layer) ;

/// @brief Method PlayInFixedTime, addr 0x47bff54, size 0x90, virtual false, abstract: false, final false
inline void PlayInFixedTime(::StringW  stateName, int32_t  layer, float_t  fixedTime) ;

/// @brief Method PlayInFixedTime, addr 0x47c00b4, size 0x50, virtual false, abstract: false, final false
inline void PlayInFixedTime(int32_t  stateNameHash) ;

/// @brief Method PlayInFixedTime, addr 0x47c0058, size 0x5c, virtual false, abstract: false, final false
inline void PlayInFixedTime(int32_t  stateNameHash, int32_t  layer) ;

/// @brief Method PlayInFixedTime, addr 0x47bfff4, size 0x64, virtual false, abstract: false, final false
inline void PlayInFixedTime(int32_t  stateNameHash, int32_t  layer, float_t  fixedTime) ;

/// @brief Method Rebind, addr 0x47c1070, size 0x40, virtual false, abstract: false, final false
inline void Rebind() ;

/// @brief Method Rebind, addr 0x47c10b0, size 0x44, virtual false, abstract: false, final false
inline void Rebind(bool  writeDefaultValues) ;

/// @brief Method ResetTrigger, addr 0x47bcccc, size 0x44, virtual false, abstract: false, final false
inline void ResetTrigger(int32_t  id) ;

/// @brief Method ResetTrigger, addr 0x47bcc44, size 0x44, virtual false, abstract: false, final false
inline void ResetTrigger(::StringW  name) ;

/// @brief Method ResetTriggerID, addr 0x47bcd10, size 0x44, virtual false, abstract: false, final false
inline void ResetTriggerID(int32_t  id) ;

/// @brief Method ResetTriggerString, addr 0x47bcc88, size 0x44, virtual false, abstract: false, final false
inline void ResetTriggerString(::StringW  name) ;

/// @brief Method ResolveHash, addr 0x47c12a0, size 0x44, virtual false, abstract: false, final false
inline ::StringW ResolveHash(int32_t  hash) ;

/// @brief Method SetBoneLocalRotation, addr 0x47be714, size 0x80, virtual false, abstract: false, final false
inline void SetBoneLocalRotation(::UnityEngine::HumanBodyBones  humanBoneId, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method SetBoneLocalRotationInternal, addr 0x47be7d0, size 0x5c, virtual false, abstract: false, final false
inline void SetBoneLocalRotationInternal(int32_t  humanBoneId, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method SetBoneLocalRotationInternal_Injected, addr 0x47be82c, size 0x54, virtual false, abstract: false, final false
inline void SetBoneLocalRotationInternal_Injected(int32_t  humanBoneId, ByRef<::UnityEngine::Quaternion>  rotation) ;

/// @brief Method SetBool, addr 0x47bc82c, size 0x54, virtual false, abstract: false, final false
inline void SetBool(int32_t  id, bool  value) ;

/// @brief Method SetBool, addr 0x47bc784, size 0x54, virtual false, abstract: false, final false
inline void SetBool(::StringW  name, bool  value) ;

/// @brief Method SetBoolID, addr 0x47bc880, size 0x54, virtual false, abstract: false, final false
inline void SetBoolID(int32_t  id, bool  value) ;

/// @brief Method SetBoolString, addr 0x47bc7d8, size 0x54, virtual false, abstract: false, final false
inline void SetBoolString(::StringW  name, bool  value) ;

/// @brief Method SetFloat, addr 0x47bc4f4, size 0x54, virtual false, abstract: false, final false
inline void SetFloat(int32_t  id, float_t  value) ;

/// @brief Method SetFloat, addr 0x47bc59c, size 0x6c, virtual false, abstract: false, final false
inline void SetFloat(int32_t  id, float_t  value, float_t  dampTime, float_t  deltaTime) ;

/// @brief Method SetFloat, addr 0x47bc374, size 0x54, virtual false, abstract: false, final false
inline void SetFloat(::StringW  name, float_t  value) ;

/// @brief Method SetFloat, addr 0x47bc41c, size 0x6c, virtual false, abstract: false, final false
inline void SetFloat(::StringW  name, float_t  value, float_t  dampTime, float_t  deltaTime) ;

/// @brief Method SetFloatID, addr 0x47bc548, size 0x54, virtual false, abstract: false, final false
inline void SetFloatID(int32_t  id, float_t  value) ;

/// @brief Method SetFloatIDDamp, addr 0x47bc608, size 0x6c, virtual false, abstract: false, final false
inline void SetFloatIDDamp(int32_t  id, float_t  value, float_t  dampTime, float_t  deltaTime) ;

/// @brief Method SetFloatString, addr 0x47bc3c8, size 0x54, virtual false, abstract: false, final false
inline void SetFloatString(::StringW  name, float_t  value) ;

/// @brief Method SetFloatStringDamp, addr 0x47bc488, size 0x6c, virtual false, abstract: false, final false
inline void SetFloatStringDamp(::StringW  name, float_t  value, float_t  dampTime, float_t  deltaTime) ;

/// @brief Method SetGoalPosition, addr 0x47bdb7c, size 0x5c, virtual false, abstract: false, final false
inline void SetGoalPosition(::UnityEngine::AvatarIKGoal  goal, ::UnityEngine::Vector3  goalPosition) ;

/// @brief Method SetGoalPosition_Injected, addr 0x47bdbd8, size 0x54, virtual false, abstract: false, final false
inline void SetGoalPosition_Injected(::UnityEngine::AvatarIKGoal  goal, ByRef<::UnityEngine::Vector3>  goalPosition) ;

/// @brief Method SetGoalRotation, addr 0x47bdd60, size 0x5c, virtual false, abstract: false, final false
inline void SetGoalRotation(::UnityEngine::AvatarIKGoal  goal, ::UnityEngine::Quaternion  goalRotation) ;

/// @brief Method SetGoalRotation_Injected, addr 0x47bddbc, size 0x54, virtual false, abstract: false, final false
inline void SetGoalRotation_Injected(::UnityEngine::AvatarIKGoal  goal, ByRef<::UnityEngine::Quaternion>  goalRotation) ;

/// @brief Method SetGoalWeightPosition, addr 0x47bdef4, size 0x54, virtual false, abstract: false, final false
inline void SetGoalWeightPosition(::UnityEngine::AvatarIKGoal  goal, float_t  value) ;

/// @brief Method SetGoalWeightRotation, addr 0x47be02c, size 0x54, virtual false, abstract: false, final false
inline void SetGoalWeightRotation(::UnityEngine::AvatarIKGoal  goal, float_t  value) ;

/// @brief Method SetHintPosition, addr 0x47be1b0, size 0x5c, virtual false, abstract: false, final false
inline void SetHintPosition(::UnityEngine::AvatarIKHint  hint, ::UnityEngine::Vector3  hintPosition) ;

/// @brief Method SetHintPosition_Injected, addr 0x47be20c, size 0x54, virtual false, abstract: false, final false
inline void SetHintPosition_Injected(::UnityEngine::AvatarIKHint  hint, ByRef<::UnityEngine::Vector3>  hintPosition) ;

/// @brief Method SetHintWeightPosition, addr 0x47be344, size 0x54, virtual false, abstract: false, final false
inline void SetHintWeightPosition(::UnityEngine::AvatarIKHint  hint, float_t  value) ;

/// @brief Method SetIKHintPosition, addr 0x47be160, size 0x50, virtual false, abstract: false, final false
inline void SetIKHintPosition(::UnityEngine::AvatarIKHint  hint, ::UnityEngine::Vector3  hintPosition) ;

/// @brief Method SetIKHintPositionWeight, addr 0x47be2ec, size 0x58, virtual false, abstract: false, final false
inline void SetIKHintPositionWeight(::UnityEngine::AvatarIKHint  hint, float_t  value) ;

/// @brief Method SetIKPosition, addr 0x47bdb2c, size 0x50, virtual false, abstract: false, final false
inline void SetIKPosition(::UnityEngine::AvatarIKGoal  goal, ::UnityEngine::Vector3  goalPosition) ;

/// @brief Method SetIKPositionWeight, addr 0x47bde9c, size 0x58, virtual false, abstract: false, final false
inline void SetIKPositionWeight(::UnityEngine::AvatarIKGoal  goal, float_t  value) ;

/// @brief Method SetIKRotation, addr 0x47bdd08, size 0x58, virtual false, abstract: false, final false
inline void SetIKRotation(::UnityEngine::AvatarIKGoal  goal, ::UnityEngine::Quaternion  goalRotation) ;

/// @brief Method SetIKRotationWeight, addr 0x47bdfd4, size 0x58, virtual false, abstract: false, final false
inline void SetIKRotationWeight(::UnityEngine::AvatarIKGoal  goal, float_t  value) ;

/// @brief Method SetInteger, addr 0x47bca8c, size 0x54, virtual false, abstract: false, final false
inline void SetInteger(int32_t  id, int32_t  value) ;

/// @brief Method SetInteger, addr 0x47bc9e4, size 0x54, virtual false, abstract: false, final false
inline void SetInteger(::StringW  name, int32_t  value) ;

/// @brief Method SetIntegerID, addr 0x47bcae0, size 0x54, virtual false, abstract: false, final false
inline void SetIntegerID(int32_t  id, int32_t  value) ;

/// @brief Method SetIntegerString, addr 0x47bca38, size 0x54, virtual false, abstract: false, final false
inline void SetIntegerString(::StringW  name, int32_t  value) ;

/// @brief Method SetLayerWeight, addr 0x47bebc8, size 0x54, virtual false, abstract: false, final false
inline void SetLayerWeight(int32_t  layerIndex, float_t  weight) ;

/// @brief Method SetLookAtPosition, addr 0x47be398, size 0x40, virtual false, abstract: false, final false
inline void SetLookAtPosition(::UnityEngine::Vector3  lookAtPosition) ;

/// @brief Method SetLookAtPositionInternal, addr 0x47be3d8, size 0x54, virtual false, abstract: false, final false
inline void SetLookAtPositionInternal(::UnityEngine::Vector3  lookAtPosition) ;

/// @brief Method SetLookAtPositionInternal_Injected, addr 0x47be42c, size 0x44, virtual false, abstract: false, final false
inline void SetLookAtPositionInternal_Injected(ByRef<::UnityEngine::Vector3>  lookAtPosition) ;

/// @brief Method SetLookAtWeight, addr 0x47be470, size 0x60, virtual false, abstract: false, final false
inline void SetLookAtWeight(float_t  weight) ;

/// @brief Method SetLookAtWeight, addr 0x47be54c, size 0x64, virtual false, abstract: false, final false
inline void SetLookAtWeight(float_t  weight, float_t  bodyWeight) ;

/// @brief Method SetLookAtWeight, addr 0x47be5b0, size 0x70, virtual false, abstract: false, final false
inline void SetLookAtWeight(float_t  weight, float_t  bodyWeight, float_t  headWeight) ;

/// @brief Method SetLookAtWeight, addr 0x47be620, size 0x74, virtual false, abstract: false, final false
inline void SetLookAtWeight(float_t  weight, float_t  bodyWeight, float_t  headWeight, float_t  eyesWeight) ;

/// @brief Method SetLookAtWeight, addr 0x47be694, size 0x80, virtual false, abstract: false, final false
inline void SetLookAtWeight(float_t  weight, float_t  bodyWeight, float_t  headWeight, float_t  eyesWeight, float_t  clampWeight) ;

/// @brief Method SetLookAtWeightInternal, addr 0x47be4d0, size 0x7c, virtual false, abstract: false, final false
inline void SetLookAtWeightInternal(float_t  weight, float_t  bodyWeight, float_t  headWeight, float_t  eyesWeight, float_t  clampWeight) ;

/// @brief Method SetQuaternion, addr 0x47c1644, size 0x4, virtual false, abstract: false, final false
inline void SetQuaternion(int32_t  id, ::UnityEngine::Quaternion  value) ;

/// @brief Method SetQuaternion, addr 0x47c1640, size 0x4, virtual false, abstract: false, final false
inline void SetQuaternion(::StringW  name, ::UnityEngine::Quaternion  value) ;

/// @brief Method SetTarget, addr 0x47c025c, size 0x54, virtual false, abstract: false, final false
inline void SetTarget(::UnityEngine::AvatarTarget  targetIndex, float_t  targetNormalizedTime) ;

/// @brief Method SetTrigger, addr 0x47bcbbc, size 0x44, virtual false, abstract: false, final false
inline void SetTrigger(int32_t  id) ;

/// @brief Method SetTrigger, addr 0x47bcb34, size 0x44, virtual false, abstract: false, final false
inline void SetTrigger(::StringW  name) ;

/// @brief Method SetTriggerID, addr 0x47bcc00, size 0x44, virtual false, abstract: false, final false
inline void SetTriggerID(int32_t  id) ;

/// @brief Method SetTriggerString, addr 0x47bcb78, size 0x44, virtual false, abstract: false, final false
inline void SetTriggerString(::StringW  name) ;

/// @brief Method SetVector, addr 0x47c15b4, size 0x4, virtual false, abstract: false, final false
inline void SetVector(int32_t  id, ::UnityEngine::Vector3  value) ;

/// @brief Method SetVector, addr 0x47c15b0, size 0x4, virtual false, abstract: false, final false
inline void SetVector(::StringW  name, ::UnityEngine::Vector3  value) ;

/// @brief Method StartPlayback, addr 0x47c08ac, size 0x3c, virtual false, abstract: false, final false
inline void StartPlayback() ;

/// @brief Method StartRecording, addr 0x47c09ac, size 0x44, virtual false, abstract: false, final false
inline void StartRecording(int32_t  frameCount) ;

/// @brief Method StopPlayback, addr 0x47c08e8, size 0x3c, virtual false, abstract: false, final false
inline void StopPlayback() ;

/// @brief Method StopRecording, addr 0x47c09f0, size 0x3c, virtual false, abstract: false, final false
inline void StopRecording() ;

/// @brief Method StringToHash, addr 0x47bf8a8, size 0x3c, virtual false, abstract: false, final false
static inline int32_t StringToHash(::StringW  name) ;

/// @brief Method Update, addr 0x47c1024, size 0x4c, virtual false, abstract: false, final false
inline void Update(float_t  deltaTime) ;

/// @brief Method WriteDefaultPose, addr 0x47c0fe8, size 0x3c, virtual false, abstract: false, final false
inline void WriteDefaultPose() ;

/// @brief Method WriteDefaultValues, addr 0x47bfc78, size 0x3c, virtual false, abstract: false, final false
inline void WriteDefaultValues() ;

/// @brief Method .ctor, addr 0x47c1648, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_allowConstantClipSamplingOptimization, addr 0x47bd59c, size 0x3c, virtual false, abstract: false, final false
inline bool get_allowConstantClipSamplingOptimization() ;

/// @brief Method get_angularVelocity, addr 0x47bd040, size 0x5c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_angularVelocity() ;

/// @brief Method get_angularVelocity_Injected, addr 0x47bd09c, size 0x44, virtual false, abstract: false, final false
inline void get_angularVelocity_Injected(ByRef<::UnityEngine::Vector3>  ret) ;

/// @brief Method get_animatePhysics, addr 0x47bd44c, size 0x48, virtual false, abstract: false, final false
inline bool get_animatePhysics() ;

/// @brief Method get_applyRootMotion, addr 0x47bd34c, size 0x3c, virtual false, abstract: false, final false
inline bool get_applyRootMotion() ;

/// @brief Method get_avatar, addr 0x47c0734, size 0x3c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Avatar> get_avatar() ;

/// @brief Method get_avatarRoot, addr 0x47c0438, size 0x3c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_avatarRoot() ;

/// @brief Method get_bodyPosition, addr 0x47bd658, size 0x18, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_bodyPosition() ;

/// @brief Method get_bodyPositionInternal, addr 0x47bd740, size 0x5c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_bodyPositionInternal() ;

/// @brief Method get_bodyPositionInternal_Injected, addr 0x47bd830, size 0x44, virtual false, abstract: false, final false
inline void get_bodyPositionInternal_Injected(ByRef<::UnityEngine::Vector3>  ret) ;

/// @brief Method get_bodyRotation, addr 0x47bd8b8, size 0x18, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion get_bodyRotation() ;

/// @brief Method get_bodyRotationInternal, addr 0x47bd8d0, size 0x58, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion get_bodyRotationInternal() ;

/// @brief Method get_bodyRotationInternal_Injected, addr 0x47bd9c4, size 0x44, virtual false, abstract: false, final false
inline void get_bodyRotationInternal_Injected(ByRef<::UnityEngine::Quaternion>  ret) ;

/// @brief Method get_cullingMode, addr 0x47c082c, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::AnimatorCullingMode get_cullingMode() ;

/// @brief Method get_deltaPosition, addr 0x47bce64, size 0x5c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_deltaPosition() ;

/// @brief Method get_deltaPosition_Injected, addr 0x47bcec0, size 0x44, virtual false, abstract: false, final false
inline void get_deltaPosition_Injected(ByRef<::UnityEngine::Vector3>  ret) ;

/// @brief Method get_deltaRotation, addr 0x47bcf04, size 0x58, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion get_deltaRotation() ;

/// @brief Method get_deltaRotation_Injected, addr 0x47bcf5c, size 0x44, virtual false, abstract: false, final false
inline void get_deltaRotation_Injected(ByRef<::UnityEngine::Quaternion>  ret) ;

/// @brief Method get_feetPivotActive, addr 0x47bf31c, size 0x3c, virtual false, abstract: false, final false
inline float_t get_feetPivotActive() ;

/// @brief Method get_fireEvents, addr 0x47c1328, size 0x3c, virtual false, abstract: false, final false
inline bool get_fireEvents() ;

/// @brief Method get_gravityWeight, addr 0x47bd61c, size 0x3c, virtual false, abstract: false, final false
inline float_t get_gravityWeight() ;

/// @brief Method get_hasBoundPlayables, addr 0x47c0be0, size 0x3c, virtual false, abstract: false, final false
inline bool get_hasBoundPlayables() ;

/// @brief Method get_hasRootMotion, addr 0x47bc174, size 0x3c, virtual false, abstract: false, final false
inline bool get_hasRootMotion() ;

/// @brief Method get_hasTransformHierarchy, addr 0x47bd560, size 0x3c, virtual false, abstract: false, final false
inline bool get_hasTransformHierarchy() ;

/// @brief Method get_humanScale, addr 0x47bc1ec, size 0x3c, virtual false, abstract: false, final false
inline float_t get_humanScale() ;

/// @brief Method get_isHuman, addr 0x47bc138, size 0x3c, virtual false, abstract: false, final false
inline bool get_isHuman() ;

/// @brief Method get_isInitialized, addr 0x47bc228, size 0x3c, virtual false, abstract: false, final false
inline bool get_isInitialized() ;

/// @brief Method get_isMatchingTarget, addr 0x47bf6a0, size 0x3c, virtual false, abstract: false, final false
inline bool get_isMatchingTarget() ;

/// @brief Method get_isOptimizable, addr 0x47bc0fc, size 0x3c, virtual false, abstract: false, final false
inline bool get_isOptimizable() ;

/// @brief Method get_isRootPositionOrRotationControlledByCurves, addr 0x47bc1b0, size 0x3c, virtual false, abstract: false, final false
inline bool get_isRootPositionOrRotationControlledByCurves() ;

/// @brief Method get_keepAnimatorControllerStateOnDisable, addr 0x47c13a8, size 0x3c, virtual false, abstract: false, final false
inline bool get_keepAnimatorControllerStateOnDisable() ;

/// @brief Method get_keepAnimatorStateOnDisable, addr 0x47c13e4, size 0x3c, virtual false, abstract: false, final false
inline bool get_keepAnimatorStateOnDisable() ;

/// @brief Method get_layerCount, addr 0x47beac0, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_layerCount() ;

/// @brief Method get_layersAffectMassCenter, addr 0x47c0e3c, size 0x3c, virtual false, abstract: false, final false
inline bool get_layersAffectMassCenter() ;

/// @brief Method get_leftFeetBottomHeight, addr 0x47c0ebc, size 0x3c, virtual false, abstract: false, final false
inline float_t get_leftFeetBottomHeight() ;

/// @brief Method get_linearVelocityBlending, addr 0x47bd3cc, size 0x3c, virtual false, abstract: false, final false
inline bool get_linearVelocityBlending() ;

/// @brief Method get_logWarnings, addr 0x47c0dc4, size 0x3c, virtual false, abstract: false, final false
inline bool get_logWarnings() ;

/// @brief Method get_parameterCount, addr 0x47bf1cc, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_parameterCount() ;

/// @brief Method get_parameters, addr 0x47bf190, size 0x3c, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::AnimatorControllerParameter*,::Array<::UnityEngine::AnimatorControllerParameter*>*> get_parameters() ;

/// @brief Method get_pivotPosition, addr 0x47bf3e0, size 0x5c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_pivotPosition() ;

/// @brief Method get_pivotPosition_Injected, addr 0x47bf43c, size 0x44, virtual false, abstract: false, final false
inline void get_pivotPosition_Injected(ByRef<::UnityEngine::Vector3>  ret) ;

/// @brief Method get_pivotWeight, addr 0x47bf3a4, size 0x3c, virtual false, abstract: false, final false
inline float_t get_pivotWeight() ;

/// @brief Method get_playableGraph, addr 0x47c0d2c, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::Playables::PlayableGraph get_playableGraph() ;

/// @brief Method get_playbackTime, addr 0x47c0924, size 0x3c, virtual false, abstract: false, final false
inline float_t get_playbackTime() ;

/// @brief Method get_recorderMode, addr 0x47c0b24, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::AnimatorRecorderMode get_recorderMode() ;

/// @brief Method get_recorderStartTime, addr 0x47c0a2c, size 0x3c, virtual false, abstract: false, final false
inline float_t get_recorderStartTime() ;

/// @brief Method get_recorderStopTime, addr 0x47c0aa8, size 0x3c, virtual false, abstract: false, final false
inline float_t get_recorderStopTime() ;

/// @brief Method get_rightFeetBottomHeight, addr 0x47c0ef8, size 0x3c, virtual false, abstract: false, final false
inline float_t get_rightFeetBottomHeight() ;

/// @brief Method get_rootPosition, addr 0x47bd0e0, size 0x5c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_rootPosition() ;

/// @brief Method get_rootPosition_Injected, addr 0x47bd13c, size 0x44, virtual false, abstract: false, final false
inline void get_rootPosition_Injected(ByRef<::UnityEngine::Vector3>  ret) ;

/// @brief Method get_rootRotation, addr 0x47bd218, size 0x58, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion get_rootRotation() ;

/// @brief Method get_rootRotation_Injected, addr 0x47bd270, size 0x44, virtual false, abstract: false, final false
inline void get_rootRotation_Injected(ByRef<::UnityEngine::Quaternion>  ret) ;

/// @brief Method get_runtimeAnimatorController, addr 0x47c0b60, size 0x3c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::RuntimeAnimatorController> get_runtimeAnimatorController() ;

/// @brief Method get_speed, addr 0x47bf6dc, size 0x3c, virtual false, abstract: false, final false
inline float_t get_speed() ;

/// @brief Method get_stabilizeFeet, addr 0x47bea40, size 0x3c, virtual false, abstract: false, final false
inline bool get_stabilizeFeet() ;

/// @brief Method get_supportsOnAnimatorMove, addr 0x47c0f34, size 0x3c, virtual false, abstract: false, final false
inline bool get_supportsOnAnimatorMove() ;

/// @brief Method get_targetPosition, addr 0x47c02b0, size 0x5c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_targetPosition() ;

/// @brief Method get_targetPosition_Injected, addr 0x47c030c, size 0x44, virtual false, abstract: false, final false
inline void get_targetPosition_Injected(ByRef<::UnityEngine::Vector3>  ret) ;

/// @brief Method get_targetRotation, addr 0x47c0350, size 0x58, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion get_targetRotation() ;

/// @brief Method get_targetRotation_Injected, addr 0x47c03a8, size 0x44, virtual false, abstract: false, final false
inline void get_targetRotation_Injected(ByRef<::UnityEngine::Quaternion>  ret) ;

/// @brief Method get_updateMode, addr 0x47bd494, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::AnimatorUpdateMode get_updateMode() ;

/// @brief Method get_velocity, addr 0x47bcfa0, size 0x5c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_velocity() ;

/// @brief Method get_velocity_Injected, addr 0x47bcffc, size 0x44, virtual false, abstract: false, final false
inline void get_velocity_Injected(ByRef<::UnityEngine::Vector3>  ret) ;

/// @brief Method get_writeDefaultValuesOnDisable, addr 0x47c14a8, size 0x3c, virtual false, abstract: false, final false
inline bool get_writeDefaultValuesOnDisable() ;

/// @brief Method set_allowConstantClipSamplingOptimization, addr 0x47bd5d8, size 0x44, virtual false, abstract: false, final false
inline void set_allowConstantClipSamplingOptimization(bool  value) ;

/// @brief Method set_animatePhysics, addr 0x47bd4d0, size 0x4c, virtual false, abstract: false, final false
inline void set_animatePhysics(bool  value) ;

/// @brief Method set_applyRootMotion, addr 0x47bd388, size 0x44, virtual false, abstract: false, final false
inline void set_applyRootMotion(bool  value) ;

/// @brief Method set_avatar, addr 0x47c0cac, size 0x44, virtual false, abstract: false, final false
inline void set_avatar(::UnityEngine::Avatar*  value) ;

/// @brief Method set_bodyPosition, addr 0x47bd79c, size 0x40, virtual false, abstract: false, final false
inline void set_bodyPosition(::UnityEngine::Vector3  value) ;

/// @brief Method set_bodyPositionInternal, addr 0x47bd7dc, size 0x54, virtual false, abstract: false, final false
inline void set_bodyPositionInternal(::UnityEngine::Vector3  value) ;

/// @brief Method set_bodyPositionInternal_Injected, addr 0x47bd874, size 0x44, virtual false, abstract: false, final false
inline void set_bodyPositionInternal_Injected(ByRef<::UnityEngine::Vector3>  value) ;

/// @brief Method set_bodyRotation, addr 0x47bd928, size 0x48, virtual false, abstract: false, final false
inline void set_bodyRotation(::UnityEngine::Quaternion  value) ;

/// @brief Method set_bodyRotationInternal, addr 0x47bd970, size 0x54, virtual false, abstract: false, final false
inline void set_bodyRotationInternal(::UnityEngine::Quaternion  value) ;

/// @brief Method set_bodyRotationInternal_Injected, addr 0x47bda08, size 0x44, virtual false, abstract: false, final false
inline void set_bodyRotationInternal_Injected(ByRef<::UnityEngine::Quaternion>  value) ;

/// @brief Method set_cullingMode, addr 0x47c0868, size 0x44, virtual false, abstract: false, final false
inline void set_cullingMode(::UnityEngine::AnimatorCullingMode  value) ;

/// @brief Method set_feetPivotActive, addr 0x47bf358, size 0x4c, virtual false, abstract: false, final false
inline void set_feetPivotActive(float_t  value) ;

/// @brief Method set_fireEvents, addr 0x47c1364, size 0x44, virtual false, abstract: false, final false
inline void set_fireEvents(bool  value) ;

/// @brief Method set_keepAnimatorControllerStateOnDisable, addr 0x47c1420, size 0x44, virtual false, abstract: false, final false
inline void set_keepAnimatorControllerStateOnDisable(bool  value) ;

/// @brief Method set_keepAnimatorStateOnDisable, addr 0x47c1464, size 0x44, virtual false, abstract: false, final false
inline void set_keepAnimatorStateOnDisable(bool  value) ;

/// @brief Method set_layersAffectMassCenter, addr 0x47c0e78, size 0x44, virtual false, abstract: false, final false
inline void set_layersAffectMassCenter(bool  value) ;

/// @brief Method set_linearVelocityBlending, addr 0x47bd408, size 0x44, virtual false, abstract: false, final false
inline void set_linearVelocityBlending(bool  value) ;

/// @brief Method set_logWarnings, addr 0x47c12e4, size 0x44, virtual false, abstract: false, final false
inline void set_logWarnings(bool  value) ;

/// @brief Method set_playbackTime, addr 0x47c0960, size 0x4c, virtual false, abstract: false, final false
inline void set_playbackTime(float_t  value) ;

/// @brief Method set_recorderStartTime, addr 0x47c0aa4, size 0x4, virtual false, abstract: false, final false
inline void set_recorderStartTime(float_t  value) ;

/// @brief Method set_recorderStopTime, addr 0x47c0b20, size 0x4, virtual false, abstract: false, final false
inline void set_recorderStopTime(float_t  value) ;

/// @brief Method set_rootPosition, addr 0x47bd180, size 0x54, virtual false, abstract: false, final false
inline void set_rootPosition(::UnityEngine::Vector3  value) ;

/// @brief Method set_rootPosition_Injected, addr 0x47bd1d4, size 0x44, virtual false, abstract: false, final false
inline void set_rootPosition_Injected(ByRef<::UnityEngine::Vector3>  value) ;

/// @brief Method set_rootRotation, addr 0x47bd2b4, size 0x54, virtual false, abstract: false, final false
inline void set_rootRotation(::UnityEngine::Quaternion  value) ;

/// @brief Method set_rootRotation_Injected, addr 0x47bd308, size 0x44, virtual false, abstract: false, final false
inline void set_rootRotation_Injected(ByRef<::UnityEngine::Quaternion>  value) ;

/// @brief Method set_runtimeAnimatorController, addr 0x47c0b9c, size 0x44, virtual false, abstract: false, final false
inline void set_runtimeAnimatorController(::UnityEngine::RuntimeAnimatorController*  value) ;

/// @brief Method set_speed, addr 0x47bf718, size 0x4c, virtual false, abstract: false, final false
inline void set_speed(float_t  value) ;

/// @brief Method set_stabilizeFeet, addr 0x47bea7c, size 0x44, virtual false, abstract: false, final false
inline void set_stabilizeFeet(bool  value) ;

/// @brief Method set_updateMode, addr 0x47bd51c, size 0x44, virtual false, abstract: false, final false
inline void set_updateMode(::UnityEngine::AnimatorUpdateMode  value) ;

/// @brief Method set_writeDefaultValuesOnDisable, addr 0x47c14e4, size 0x44, virtual false, abstract: false, final false
inline void set_writeDefaultValuesOnDisable(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Animator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Animator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Animator(Animator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Animator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Animator(Animator const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Animator, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::Animator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animator*, "UnityEngine", "Animator");
