#pragma once
// IWYU pragma private; include "BeatSaber/BeatAvatarSDK/AvatarDataModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AvatarDataModel)
namespace BeatSaber::BeatAvatarSDK {
class AvatarData;
}
namespace BeatSaber::BeatAvatarSDK {
class AvatarPartsModel;
}
namespace BeatSaber::BeatAvatarSDK {
class AvatarSaveData;
}
namespace BeatSaber::BeatAvatarSDK {
struct __AvatarDataModel___DeleteAsyncInternal_d__20;
}
namespace BeatSaber::BeatAvatarSDK {
struct __AvatarDataModel___LoadInternalAsync_d__16;
}
namespace BeatSaber::BeatAvatarSDK {
struct __AvatarDataModel___SaveInternalAsync_d__14;
}
namespace GlobalNamespace {
class IFileStorage;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace BeatSaber::BeatAvatarSDK {
class AvatarDataModel;
}
namespace BeatSaber::BeatAvatarSDK {
struct __AvatarDataModel___DeleteAsyncInternal_d__20;
}
namespace BeatSaber::BeatAvatarSDK {
struct __AvatarDataModel___LoadInternalAsync_d__16;
}
namespace BeatSaber::BeatAvatarSDK {
struct __AvatarDataModel___SaveInternalAsync_d__14;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::BeatAvatarSDK::AvatarDataModel);
MARK_VAL_T(::BeatSaber::BeatAvatarSDK::__AvatarDataModel___DeleteAsyncInternal_d__20);
MARK_VAL_T(::BeatSaber::BeatAvatarSDK::__AvatarDataModel___LoadInternalAsync_d__16);
MARK_VAL_T(::BeatSaber::BeatAvatarSDK::__AvatarDataModel___SaveInternalAsync_d__14);
// Type: ::<DeleteAsyncInternal>d__20
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::BeatAvatarSDK {
// Is value type: true
// CS Name: ::AvatarDataModel::<DeleteAsyncInternal>d__20
struct CORDL_TYPE __AvatarDataModel___DeleteAsyncInternal_d__20 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x2218b4c, size 0x290, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x2218ddc, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr __AvatarDataModel___DeleteAsyncInternal_d__20() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::BeatSaber::BeatAvatarSDK::AvatarDataModel*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr __AvatarDataModel___DeleteAsyncInternal_d__20(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder, ::BeatSaber::BeatAvatarSDK::AvatarDataModel*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::BeatSaber::BeatAvatarSDK::AvatarDataModel*  __4__this;

/// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::BeatAvatarSDK::__AvatarDataModel___DeleteAsyncInternal_d__20, 0x30>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::__AvatarDataModel___DeleteAsyncInternal_d__20, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::__AvatarDataModel___DeleteAsyncInternal_d__20, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::__AvatarDataModel___DeleteAsyncInternal_d__20, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::__AvatarDataModel___DeleteAsyncInternal_d__20, __u__1) == 0x28, "Offset mismatch!");

} // namespace end def BeatSaber::BeatAvatarSDK
// Type: ::<LoadInternalAsync>d__16
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::BeatAvatarSDK {
// Is value type: true
// CS Name: ::AvatarDataModel::<LoadInternalAsync>d__16
struct CORDL_TYPE __AvatarDataModel___LoadInternalAsync_d__16 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x2218e58, size 0x250, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x22190a8, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr __AvatarDataModel___LoadInternalAsync_d__16() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::BeatSaber::BeatAvatarSDK::AvatarDataModel*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::BeatAvatarSDK::AvatarSaveData*>", modifiers: "", def_value: None }]
constexpr __AvatarDataModel___LoadInternalAsync_d__16(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder, ::BeatSaber::BeatAvatarSDK::AvatarDataModel*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::BeatAvatarSDK::AvatarSaveData*>  __u__1) noexcept;

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::BeatSaber::BeatAvatarSDK::AvatarDataModel*  __4__this;

/// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::BeatAvatarSDK::AvatarSaveData*>  __u__1;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::BeatAvatarSDK::__AvatarDataModel___LoadInternalAsync_d__16, 0x30>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::__AvatarDataModel___LoadInternalAsync_d__16, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::__AvatarDataModel___LoadInternalAsync_d__16, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::__AvatarDataModel___LoadInternalAsync_d__16, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::__AvatarDataModel___LoadInternalAsync_d__16, __u__1) == 0x28, "Offset mismatch!");

} // namespace end def BeatSaber::BeatAvatarSDK
// Type: ::<SaveInternalAsync>d__14
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::BeatAvatarSDK {
// Is value type: true
// CS Name: ::AvatarDataModel::<SaveInternalAsync>d__14
struct CORDL_TYPE __AvatarDataModel___SaveInternalAsync_d__14 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x2219124, size 0x360, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x221948c, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr __AvatarDataModel___SaveInternalAsync_d__14() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::BeatSaber::BeatAvatarSDK::AvatarDataModel*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr __AvatarDataModel___SaveInternalAsync_d__14(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder, ::BeatSaber::BeatAvatarSDK::AvatarDataModel*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::BeatSaber::BeatAvatarSDK::AvatarDataModel*  __4__this;

/// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::BeatAvatarSDK::__AvatarDataModel___SaveInternalAsync_d__14, 0x30>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::__AvatarDataModel___SaveInternalAsync_d__14, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::__AvatarDataModel___SaveInternalAsync_d__14, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::__AvatarDataModel___SaveInternalAsync_d__14, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::__AvatarDataModel___SaveInternalAsync_d__14, __u__1) == 0x28, "Offset mismatch!");

} // namespace end def BeatSaber::BeatAvatarSDK
// Type: BeatSaber.BeatAvatarSDK::AvatarDataModel
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::BeatAvatarSDK {
// Is value type: false
// CS Name: ::BeatSaber.BeatAvatarSDK::AvatarDataModel*
class CORDL_TYPE AvatarDataModel : public ::System::Object {
public:
// Declarations
using _DeleteAsyncInternal_d__20 = ::BeatSaber::BeatAvatarSDK::__AvatarDataModel___DeleteAsyncInternal_d__20;

using _LoadInternalAsync_d__16 = ::BeatSaber::BeatAvatarSDK::__AvatarDataModel___LoadInternalAsync_d__16;

using _SaveInternalAsync_d__14 = ::BeatSaber::BeatAvatarSDK::__AvatarDataModel___SaveInternalAsync_d__14;

/// @brief Field _avatarCreatedTask, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__avatarCreatedTask, put=__cordl_internal_set__avatarCreatedTask)) ::System::Threading::Tasks::Task_1<bool>*  _avatarCreatedTask;

/// @brief Field _avatarData, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__avatarData, put=__cordl_internal_set__avatarData)) ::BeatSaber::BeatAvatarSDK::AvatarData*  _avatarData;

/// @brief Field _avatarPartsModel, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__avatarPartsModel, put=__cordl_internal_set__avatarPartsModel)) ::BeatSaber::BeatAvatarSDK::AvatarPartsModel*  _avatarPartsModel;

/// @brief Field _fileStorage, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__fileStorage, put=__cordl_internal_set__fileStorage)) ::GlobalNamespace::IFileStorage*  _fileStorage;

 __declspec(property(get=get_avatarData, put=set_avatarData)) ::BeatSaber::BeatAvatarSDK::AvatarData*  avatarData;

/// @brief Field didChangeAvatarDataEvent, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_didChangeAvatarDataEvent, put=__cordl_internal_set_didChangeAvatarDataEvent)) ::System::Action_1<::BeatSaber::BeatAvatarSDK::AvatarData*>*  didChangeAvatarDataEvent;

/// @brief Method CreateDefaultAvatarData, addr 0x221886c, size 0x4, virtual false, abstract: false, final false
inline ::BeatSaber::BeatAvatarSDK::AvatarData* CreateDefaultAvatarData() ;

/// @brief Method CreateRandomAvatarData, addr 0x2218978, size 0xac, virtual false, abstract: false, final false
inline ::BeatSaber::BeatAvatarSDK::AvatarData* CreateRandomAvatarData() ;

/// @brief Method DeleteAsync, addr 0x2218870, size 0x18, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* DeleteAsync() ;

/// @brief Method DeleteAsyncInternal, addr 0x2218888, size 0xf0, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<bool>* DeleteAsyncInternal() ;

/// @brief Method Init, addr 0x2218320, size 0xc8, virtual false, abstract: false, final false
inline void Init() ;

/// @brief Method Load, addr 0x221866c, size 0x50, virtual false, abstract: false, final false
inline bool Load(::BeatSaber::BeatAvatarSDK::AvatarSaveData*  avatarSaveData) ;

/// @brief Method LoadAsync, addr 0x22184f8, size 0x18, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* LoadAsync() ;

/// @brief Method LoadFromCurrentVersion, addr 0x22186bc, size 0x1b0, virtual false, abstract: false, final false
static inline ::BeatSaber::BeatAvatarSDK::AvatarData* LoadFromCurrentVersion(::BeatSaber::BeatAvatarSDK::AvatarSaveData*  avatarSaveData) ;

/// @brief Method LoadFromSaveDataAsync, addr 0x2218600, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::BeatSaber::BeatAvatarSDK::AvatarSaveData*>* LoadFromSaveDataAsync(::GlobalNamespace::IFileStorage*  fileStorage) ;

/// @brief Method LoadInternalAsync, addr 0x2218510, size 0xf0, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<bool>* LoadInternalAsync() ;

static inline ::BeatSaber::BeatAvatarSDK::AvatarDataModel* New_ctor() ;

/// @brief Method ReportAvatarChanged, addr 0x22181a0, size 0x20, virtual false, abstract: false, final false
inline void ReportAvatarChanged() ;

/// @brief Method RequestIsAvatarCreatedAsync, addr 0x22183e8, size 0x8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<bool>* RequestIsAvatarCreatedAsync() ;

/// @brief Method SaveAsync, addr 0x22183f0, size 0x18, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* SaveAsync() ;

/// @brief Method SaveInternalAsync, addr 0x2218408, size 0xf0, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<bool>* SaveInternalAsync() ;

constexpr ::System::Threading::Tasks::Task_1<bool>*& __cordl_internal_get__avatarCreatedTask() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<bool>*> const& __cordl_internal_get__avatarCreatedTask() const;

constexpr ::BeatSaber::BeatAvatarSDK::AvatarData*& __cordl_internal_get__avatarData() ;

constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarSDK::AvatarData*> const& __cordl_internal_get__avatarData() const;

constexpr ::BeatSaber::BeatAvatarSDK::AvatarPartsModel*& __cordl_internal_get__avatarPartsModel() ;

constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarSDK::AvatarPartsModel*> const& __cordl_internal_get__avatarPartsModel() const;

constexpr ::GlobalNamespace::IFileStorage*& __cordl_internal_get__fileStorage() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IFileStorage*> const& __cordl_internal_get__fileStorage() const;

constexpr ::System::Action_1<::BeatSaber::BeatAvatarSDK::AvatarData*>*& __cordl_internal_get_didChangeAvatarDataEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::BeatSaber::BeatAvatarSDK::AvatarData*>*> const& __cordl_internal_get_didChangeAvatarDataEvent() const;

constexpr void __cordl_internal_set__avatarCreatedTask(::System::Threading::Tasks::Task_1<bool>*  value) ;

constexpr void __cordl_internal_set__avatarData(::BeatSaber::BeatAvatarSDK::AvatarData*  value) ;

constexpr void __cordl_internal_set__avatarPartsModel(::BeatSaber::BeatAvatarSDK::AvatarPartsModel*  value) ;

constexpr void __cordl_internal_set__fileStorage(::GlobalNamespace::IFileStorage*  value) ;

constexpr void __cordl_internal_set_didChangeAvatarDataEvent(::System::Action_1<::BeatSaber::BeatAvatarSDK::AvatarData*>*  value) ;

/// @brief Method .ctor, addr 0x2218ad0, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_didChangeAvatarDataEvent, addr 0x22181c0, size 0xb0, virtual false, abstract: false, final false
inline void add_didChangeAvatarDataEvent(::System::Action_1<::BeatSaber::BeatAvatarSDK::AvatarData*>*  value) ;

/// @brief Method get_avatarData, addr 0x2218120, size 0x8, virtual false, abstract: false, final false
inline ::BeatSaber::BeatAvatarSDK::AvatarData* get_avatarData() ;

/// @brief Method remove_didChangeAvatarDataEvent, addr 0x2218270, size 0xb0, virtual false, abstract: false, final false
inline void remove_didChangeAvatarDataEvent(::System::Action_1<::BeatSaber::BeatAvatarSDK::AvatarData*>*  value) ;

/// @brief Method set_avatarData, addr 0x2218128, size 0x78, virtual false, abstract: false, final false
inline void set_avatarData(::BeatSaber::BeatAvatarSDK::AvatarData*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AvatarDataModel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AvatarDataModel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AvatarDataModel(AvatarDataModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AvatarDataModel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AvatarDataModel(AvatarDataModel const& ) = delete;

/// @brief Field didChangeAvatarDataEvent, offset: 0x10, size: 0x8, def value: None
 ::System::Action_1<::BeatSaber::BeatAvatarSDK::AvatarData*>*  ___didChangeAvatarDataEvent;

/// @brief Field _avatarPartsModel, offset: 0x18, size: 0x8, def value: None
 ::BeatSaber::BeatAvatarSDK::AvatarPartsModel*  ____avatarPartsModel;

/// @brief Field _fileStorage, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::IFileStorage*  ____fileStorage;

/// @brief Field _avatarData, offset: 0x28, size: 0x8, def value: None
 ::BeatSaber::BeatAvatarSDK::AvatarData*  ____avatarData;

/// @brief Field _avatarCreatedTask, offset: 0x30, size: 0x8, def value: None
 ::System::Threading::Tasks::Task_1<bool>*  ____avatarCreatedTask;

/// @brief Field kAvatarDataFileName offset 0xffffffff size 0x8
static constexpr ::ConstString  kAvatarDataFileName{u"AvatarData.dat"};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::BeatAvatarSDK::AvatarDataModel, 0x38>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarDataModel, ___didChangeAvatarDataEvent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarDataModel, ____avatarPartsModel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarDataModel, ____fileStorage) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarDataModel, ____avatarData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarDataModel, ____avatarCreatedTask) == 0x30, "Offset mismatch!");

} // namespace end def BeatSaber::BeatAvatarSDK
NEED_NO_BOX(::BeatSaber::BeatAvatarSDK::AvatarDataModel);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::BeatAvatarSDK::AvatarDataModel*, "BeatSaber.BeatAvatarSDK", "AvatarDataModel");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::BeatAvatarSDK::__AvatarDataModel___DeleteAsyncInternal_d__20, "BeatSaber.BeatAvatarSDK", "AvatarDataModel/<DeleteAsyncInternal>d__20");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::BeatAvatarSDK::__AvatarDataModel___LoadInternalAsync_d__16, "BeatSaber.BeatAvatarSDK", "AvatarDataModel/<LoadInternalAsync>d__16");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::BeatAvatarSDK::__AvatarDataModel___SaveInternalAsync_d__14, "BeatSaber.BeatAvatarSDK", "AvatarDataModel/<SaveInternalAsync>d__14");
