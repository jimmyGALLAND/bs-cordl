#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReaderWriterLockSlim)
namespace System::Threading {
class ReaderWriterCount;
}
namespace System::Threading {
struct LockRecursionPolicy;
}
namespace System {
class IDisposable;
}
namespace System::Threading {
struct __ReaderWriterLockSlim__TimeoutTracker;
}
namespace System::Threading {
class EventWaitHandle;
}
// Forward declare root types
namespace System::Threading {
class ReaderWriterLockSlim;
}
namespace System::Threading {
struct __ReaderWriterLockSlim__TimeoutTracker;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::ReaderWriterLockSlim);
MARK_VAL_T(::System::Threading::__ReaderWriterLockSlim__TimeoutTracker);
// Type: ::TimeoutTracker
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14319))
// CS Name: ::ReaderWriterLockSlim::TimeoutTracker
struct CORDL_TYPE __ReaderWriterLockSlim__TimeoutTracker {
public:
  // Declarations
  __declspec(property(get = get_RemainingMilliseconds)) int32_t RemainingMilliseconds;

  __declspec(property(get = get_IsExpired)) bool IsExpired;

  /// @brief Method .ctor addr 0x28141f8 size 0x88 virtual false final false
  inline void _ctor(int32_t millisecondsTimeout);

  /// @brief Method get_RemainingMilliseconds addr 0x2815e0c size 0x48 virtual false final false
  inline int32_t get_RemainingMilliseconds();

  /// @brief Method get_IsExpired addr 0x281499c size 0x18 virtual false final false
  inline bool get_IsExpired();

  // Ctor Parameters [CppParam { name: "m_total", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_start", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ReaderWriterLockSlim__TimeoutTracker(int32_t m_total, int32_t m_start) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ReaderWriterLockSlim__TimeoutTracker();

  /// @brief Field m_total, offset: 0x0, size: 0x4, def value: None
  int32_t m_total;

  /// @brief Field m_start, offset: 0x4, size: 0x4, def value: None
  int32_t m_start;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::__ReaderWriterLockSlim__TimeoutTracker, 0x8>, "Size mismatch!");

} // namespace System::Threading
// Type: System.Threading::ReaderWriterLockSlim
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 105, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14320))
// CS Name: ::System.Threading::ReaderWriterLockSlim*
class CORDL_TYPE ReaderWriterLockSlim : public ::System::Object {
public:
  // Declarations
  using TimeoutTracker = ::System::Threading::__ReaderWriterLockSlim__TimeoutTracker;

  /// @brief Field fIsReentrant, offset 0x10, size 0x1
  __declspec(property(get = __get_fIsReentrant, put = __set_fIsReentrant)) bool fIsReentrant;

  /// @brief Field myLock, offset 0x14, size 0x4
  __declspec(property(get = __get_myLock, put = __set_myLock)) int32_t myLock;

  /// @brief Field numWriteWaiters, offset 0x18, size 0x4
  __declspec(property(get = __get_numWriteWaiters, put = __set_numWriteWaiters)) uint32_t numWriteWaiters;

  /// @brief Field numReadWaiters, offset 0x1c, size 0x4
  __declspec(property(get = __get_numReadWaiters, put = __set_numReadWaiters)) uint32_t numReadWaiters;

  /// @brief Field numWriteUpgradeWaiters, offset 0x20, size 0x4
  __declspec(property(get = __get_numWriteUpgradeWaiters, put = __set_numWriteUpgradeWaiters)) uint32_t numWriteUpgradeWaiters;

  /// @brief Field numUpgradeWaiters, offset 0x24, size 0x4
  __declspec(property(get = __get_numUpgradeWaiters, put = __set_numUpgradeWaiters)) uint32_t numUpgradeWaiters;

  /// @brief Field fNoWaiters, offset 0x28, size 0x1
  __declspec(property(get = __get_fNoWaiters, put = __set_fNoWaiters)) bool fNoWaiters;

  /// @brief Field upgradeLockOwnerId, offset 0x2c, size 0x4
  __declspec(property(get = __get_upgradeLockOwnerId, put = __set_upgradeLockOwnerId)) int32_t upgradeLockOwnerId;

  /// @brief Field writeLockOwnerId, offset 0x30, size 0x4
  __declspec(property(get = __get_writeLockOwnerId, put = __set_writeLockOwnerId)) int32_t writeLockOwnerId;

  /// @brief Field writeEvent, offset 0x38, size 0x8
  __declspec(property(get = __get_writeEvent, put = __set_writeEvent))::System::Threading::EventWaitHandle* writeEvent;

  /// @brief Field readEvent, offset 0x40, size 0x8
  __declspec(property(get = __get_readEvent, put = __set_readEvent))::System::Threading::EventWaitHandle* readEvent;

  /// @brief Field upgradeEvent, offset 0x48, size 0x8
  __declspec(property(get = __get_upgradeEvent, put = __set_upgradeEvent))::System::Threading::EventWaitHandle* upgradeEvent;

  /// @brief Field waitUpgradeEvent, offset 0x50, size 0x8
  __declspec(property(get = __get_waitUpgradeEvent, put = __set_waitUpgradeEvent))::System::Threading::EventWaitHandle* waitUpgradeEvent;

  /// @brief Field lockID, offset 0x58, size 0x8
  __declspec(property(get = __get_lockID, put = __set_lockID)) int64_t lockID;

  /// @brief Field fUpgradeThreadHoldingRead, offset 0x60, size 0x1
  __declspec(property(get = __get_fUpgradeThreadHoldingRead, put = __set_fUpgradeThreadHoldingRead)) bool fUpgradeThreadHoldingRead;

  /// @brief Field owners, offset 0x64, size 0x4
  __declspec(property(get = __get_owners, put = __set_owners)) uint32_t owners;

  /// @brief Field fDisposed, offset 0x68, size 0x1
  __declspec(property(get = __get_fDisposed, put = __set_fDisposed)) bool fDisposed;

  /// @brief Field s_nextLockID, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_nextLockID, put = setStaticF_s_nextLockID)) int64_t s_nextLockID;

  /// @brief Field t_rwc, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_t_rwc, put = setStaticF_t_rwc))::System::Threading::ReaderWriterCount* t_rwc;

  __declspec(property(get = get_IsReadLockHeld)) bool IsReadLockHeld;

  __declspec(property(get = get_IsUpgradeableReadLockHeld)) bool IsUpgradeableReadLockHeld;

  __declspec(property(get = get_IsWriteLockHeld)) bool IsWriteLockHeld;

  __declspec(property(get = get_RecursiveReadCount)) int32_t RecursiveReadCount;

  __declspec(property(get = get_RecursiveUpgradeCount)) int32_t RecursiveUpgradeCount;

  __declspec(property(get = get_RecursiveWriteCount)) int32_t RecursiveWriteCount;

  __declspec(property(get = get_WaitingReadCount)) int32_t WaitingReadCount;

  __declspec(property(get = get_WaitingUpgradeCount)) int32_t WaitingUpgradeCount;

  __declspec(property(get = get_WaitingWriteCount)) int32_t WaitingWriteCount;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr bool& __get_fIsReentrant();

  constexpr bool const& __get_fIsReentrant() const;

  constexpr void __set_fIsReentrant(bool value);

  constexpr int32_t& __get_myLock();

  constexpr int32_t const& __get_myLock() const;

  constexpr void __set_myLock(int32_t value);

  constexpr uint32_t& __get_numWriteWaiters();

  constexpr uint32_t const& __get_numWriteWaiters() const;

  constexpr void __set_numWriteWaiters(uint32_t value);

  constexpr uint32_t& __get_numReadWaiters();

  constexpr uint32_t const& __get_numReadWaiters() const;

  constexpr void __set_numReadWaiters(uint32_t value);

  constexpr uint32_t& __get_numWriteUpgradeWaiters();

  constexpr uint32_t const& __get_numWriteUpgradeWaiters() const;

  constexpr void __set_numWriteUpgradeWaiters(uint32_t value);

  constexpr uint32_t& __get_numUpgradeWaiters();

  constexpr uint32_t const& __get_numUpgradeWaiters() const;

  constexpr void __set_numUpgradeWaiters(uint32_t value);

  constexpr bool& __get_fNoWaiters();

  constexpr bool const& __get_fNoWaiters() const;

  constexpr void __set_fNoWaiters(bool value);

  constexpr int32_t& __get_upgradeLockOwnerId();

  constexpr int32_t const& __get_upgradeLockOwnerId() const;

  constexpr void __set_upgradeLockOwnerId(int32_t value);

  constexpr int32_t& __get_writeLockOwnerId();

  constexpr int32_t const& __get_writeLockOwnerId() const;

  constexpr void __set_writeLockOwnerId(int32_t value);

  constexpr ::System::Threading::EventWaitHandle*& __get_writeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::EventWaitHandle*> const& __get_writeEvent() const;

  constexpr void __set_writeEvent(::System::Threading::EventWaitHandle* value);

  constexpr ::System::Threading::EventWaitHandle*& __get_readEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::EventWaitHandle*> const& __get_readEvent() const;

  constexpr void __set_readEvent(::System::Threading::EventWaitHandle* value);

  constexpr ::System::Threading::EventWaitHandle*& __get_upgradeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::EventWaitHandle*> const& __get_upgradeEvent() const;

  constexpr void __set_upgradeEvent(::System::Threading::EventWaitHandle* value);

  constexpr ::System::Threading::EventWaitHandle*& __get_waitUpgradeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::EventWaitHandle*> const& __get_waitUpgradeEvent() const;

  constexpr void __set_waitUpgradeEvent(::System::Threading::EventWaitHandle* value);

  constexpr int64_t& __get_lockID();

  constexpr int64_t const& __get_lockID() const;

  constexpr void __set_lockID(int64_t value);

  constexpr bool& __get_fUpgradeThreadHoldingRead();

  constexpr bool const& __get_fUpgradeThreadHoldingRead() const;

  constexpr void __set_fUpgradeThreadHoldingRead(bool value);

  constexpr uint32_t& __get_owners();

  constexpr uint32_t const& __get_owners() const;

  constexpr void __set_owners(uint32_t value);

  constexpr bool& __get_fDisposed();

  constexpr bool const& __get_fDisposed() const;

  constexpr void __set_fDisposed(bool value);

  static inline void setStaticF_s_nextLockID(int64_t value);

  static inline int64_t getStaticF_s_nextLockID();

  static inline void setStaticF_t_rwc(::System::Threading::ReaderWriterCount* value);

  static inline ::System::Threading::ReaderWriterCount* getStaticF_t_rwc();

  /// @brief Method InitializeThreadCounts addr 0x2813fa4 size 0xc virtual false final false
  inline void InitializeThreadCounts();

  static inline ::System::Threading::ReaderWriterLockSlim* New_ctor(::System::Threading::LockRecursionPolicy recursionPolicy);

  /// @brief Method .ctor addr 0x2813fb0 size 0x84 virtual false final false
  inline void _ctor(::System::Threading::LockRecursionPolicy recursionPolicy);

  /// @brief Method IsRWEntryEmpty addr 0x2814034 size 0x40 virtual false final false
  static inline bool IsRWEntryEmpty(::System::Threading::ReaderWriterCount* rwc);

  /// @brief Method IsRwHashEntryChanged addr 0x2814074 size 0x24 virtual false final false
  inline bool IsRwHashEntryChanged(::System::Threading::ReaderWriterCount* lrwc);

  /// @brief Method GetThreadRWCount addr 0x2814098 size 0x12c virtual false final false
  inline ::System::Threading::ReaderWriterCount* GetThreadRWCount(bool dontAllocate);

  /// @brief Method EnterReadLock addr 0x28141c4 size 0x8 virtual false final false
  inline void EnterReadLock();

  /// @brief Method TryEnterReadLock addr 0x28141cc size 0x2c virtual false final false
  inline bool TryEnterReadLock(int32_t millisecondsTimeout);

  /// @brief Method TryEnterReadLock addr 0x2814280 size 0x4 virtual false final false
  inline bool TryEnterReadLock(::System::Threading::__ReaderWriterLockSlim__TimeoutTracker timeout);

  /// @brief Method TryEnterReadLockCore addr 0x2814284 size 0x700 virtual false final false
  inline bool TryEnterReadLockCore(::System::Threading::__ReaderWriterLockSlim__TimeoutTracker timeout);

  /// @brief Method EnterWriteLock addr 0x2814c74 size 0x8 virtual false final false
  inline void EnterWriteLock();

  /// @brief Method TryEnterWriteLock addr 0x2814c7c size 0x2c virtual false final false
  inline bool TryEnterWriteLock(int32_t millisecondsTimeout);

  /// @brief Method TryEnterWriteLock addr 0x2814ca8 size 0x4 virtual false final false
  inline bool TryEnterWriteLock(::System::Threading::__ReaderWriterLockSlim__TimeoutTracker timeout);

  /// @brief Method TryEnterWriteLockCore addr 0x2814cac size 0x668 virtual false final false
  inline bool TryEnterWriteLockCore(::System::Threading::__ReaderWriterLockSlim__TimeoutTracker timeout);

  /// @brief Method EnterUpgradeableReadLock addr 0x2815340 size 0x8 virtual false final false
  inline void EnterUpgradeableReadLock();

  /// @brief Method TryEnterUpgradeableReadLock addr 0x2815348 size 0x2c virtual false final false
  inline bool TryEnterUpgradeableReadLock(int32_t millisecondsTimeout);

  /// @brief Method TryEnterUpgradeableReadLock addr 0x2815374 size 0x4 virtual false final false
  inline bool TryEnterUpgradeableReadLock(::System::Threading::__ReaderWriterLockSlim__TimeoutTracker timeout);

  /// @brief Method TryEnterUpgradeableReadLockCore addr 0x2815378 size 0x504 virtual false final false
  inline bool TryEnterUpgradeableReadLockCore(::System::Threading::__ReaderWriterLockSlim__TimeoutTracker timeout);

  /// @brief Method ExitReadLock addr 0x281587c size 0x16c virtual false final false
  inline void ExitReadLock();

  /// @brief Method ExitWriteLock addr 0x2815a14 size 0x230 virtual false final false
  inline void ExitWriteLock();

  /// @brief Method ExitUpgradeableReadLock addr 0x2815c54 size 0x198 virtual false final false
  inline void ExitUpgradeableReadLock();

  /// @brief Method LazyCreateEvent addr 0x2814a4c size 0x100 virtual false final false
  inline void LazyCreateEvent(ByRef<::System::Threading::EventWaitHandle*> waitEvent, bool makeAutoResetEvent);

  /// @brief Method WaitOnEvent addr 0x2814b4c size 0x128 virtual false final false
  inline bool WaitOnEvent(::System::Threading::EventWaitHandle* waitEvent, ByRef<uint32_t> numWaiters, ::System::Threading::__ReaderWriterLockSlim__TimeoutTracker timeout, bool isWriteWaiter);

  /// @brief Method ExitAndWakeUpAppropriateWaiters addr 0x28159e8 size 0x2c virtual false final false
  inline void ExitAndWakeUpAppropriateWaiters();

  /// @brief Method ExitAndWakeUpAppropriateWaitersPreferringWriters addr 0x2815e54 size 0x84 virtual false final false
  inline void ExitAndWakeUpAppropriateWaitersPreferringWriters();

  /// @brief Method ExitAndWakeUpAppropriateReadWaiters addr 0x2815ed8 size 0x94 virtual false final false
  inline void ExitAndWakeUpAppropriateReadWaiters();

  /// @brief Method IsWriterAcquired addr 0x2815314 size 0x10 virtual false final false
  inline bool IsWriterAcquired();

  /// @brief Method SetWriterAcquired addr 0x2815324 size 0x10 virtual false final false
  inline void SetWriterAcquired();

  /// @brief Method ClearWriterAcquired addr 0x2815c44 size 0x10 virtual false final false
  inline void ClearWriterAcquired();

  /// @brief Method SetWritersWaiting addr 0x2815dec size 0x10 virtual false final false
  inline void SetWritersWaiting();

  /// @brief Method ClearWritersWaiting addr 0x2815f6c size 0x10 virtual false final false
  inline void ClearWritersWaiting();

  /// @brief Method SetUpgraderWaiting addr 0x2815dfc size 0x10 virtual false final false
  inline void SetUpgraderWaiting();

  /// @brief Method ClearUpgraderWaiting addr 0x2815f7c size 0x10 virtual false final false
  inline void ClearUpgraderWaiting();

  /// @brief Method GetNumReaders addr 0x2815334 size 0xc virtual false final false
  inline uint32_t GetNumReaders();

  /// @brief Method EnterMyLock addr 0x2815f8c size 0x34 virtual false final false
  inline void EnterMyLock();

  /// @brief Method EnterMyLockSpin addr 0x2815fc0 size 0xd8 virtual false final false
  inline void EnterMyLockSpin();

  /// @brief Method ExitMyLock addr 0x2814984 size 0x18 virtual false final false
  inline void ExitMyLock();

  /// @brief Method SpinWait addr 0x28149b4 size 0x98 virtual false final false
  static inline void SpinWait(int32_t SpinCount);

  /// @brief Method Dispose addr 0x2816098 size 0x8 virtual true final true
  inline void Dispose();

  /// @brief Method Dispose addr 0x28160a0 size 0x140 virtual false final false
  inline void Dispose(bool disposing);

  /// @brief Method get_IsReadLockHeld addr 0x28161e0 size 0x18 virtual false final false
  inline bool get_IsReadLockHeld();

  /// @brief Method get_IsUpgradeableReadLockHeld addr 0x28161f8 size 0x18 virtual false final false
  inline bool get_IsUpgradeableReadLockHeld();

  /// @brief Method get_IsWriteLockHeld addr 0x2816210 size 0x18 virtual false final false
  inline bool get_IsWriteLockHeld();

  /// @brief Method get_RecursiveReadCount addr 0x2816228 size 0x80 virtual false final false
  inline int32_t get_RecursiveReadCount();

  /// @brief Method get_RecursiveUpgradeCount addr 0x28162a8 size 0xb0 virtual false final false
  inline int32_t get_RecursiveUpgradeCount();

  /// @brief Method get_RecursiveWriteCount addr 0x2816358 size 0xb0 virtual false final false
  inline int32_t get_RecursiveWriteCount();

  /// @brief Method get_WaitingReadCount addr 0x2816408 size 0x8 virtual false final false
  inline int32_t get_WaitingReadCount();

  /// @brief Method get_WaitingUpgradeCount addr 0x2816410 size 0x8 virtual false final false
  inline int32_t get_WaitingUpgradeCount();

  /// @brief Method get_WaitingWriteCount addr 0x2816418 size 0x8 virtual false final false
  inline int32_t get_WaitingWriteCount();

  // Ctor Parameters [CppParam { name: "", ty: "ReaderWriterLockSlim", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReaderWriterLockSlim(ReaderWriterLockSlim&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReaderWriterLockSlim", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReaderWriterLockSlim(ReaderWriterLockSlim const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReaderWriterLockSlim();

public:
  /// @brief Field fIsReentrant, offset: 0x10, size: 0x1, def value: None
  bool ___fIsReentrant;

  /// @brief Field myLock, offset: 0x14, size: 0x4, def value: None
  int32_t ___myLock;

  /// @brief Field numWriteWaiters, offset: 0x18, size: 0x4, def value: None
  uint32_t ___numWriteWaiters;

  /// @brief Field numReadWaiters, offset: 0x1c, size: 0x4, def value: None
  uint32_t ___numReadWaiters;

  /// @brief Field numWriteUpgradeWaiters, offset: 0x20, size: 0x4, def value: None
  uint32_t ___numWriteUpgradeWaiters;

  /// @brief Field numUpgradeWaiters, offset: 0x24, size: 0x4, def value: None
  uint32_t ___numUpgradeWaiters;

  /// @brief Field fNoWaiters, offset: 0x28, size: 0x1, def value: None
  bool ___fNoWaiters;

  /// @brief Field upgradeLockOwnerId, offset: 0x2c, size: 0x4, def value: None
  int32_t ___upgradeLockOwnerId;

  /// @brief Field writeLockOwnerId, offset: 0x30, size: 0x4, def value: None
  int32_t ___writeLockOwnerId;

  /// @brief Field writeEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Threading::EventWaitHandle* ___writeEvent;

  /// @brief Field readEvent, offset: 0x40, size: 0x8, def value: None
  ::System::Threading::EventWaitHandle* ___readEvent;

  /// @brief Field upgradeEvent, offset: 0x48, size: 0x8, def value: None
  ::System::Threading::EventWaitHandle* ___upgradeEvent;

  /// @brief Field waitUpgradeEvent, offset: 0x50, size: 0x8, def value: None
  ::System::Threading::EventWaitHandle* ___waitUpgradeEvent;

  /// @brief Field lockID, offset: 0x58, size: 0x8, def value: None
  int64_t ___lockID;

  /// @brief Field fUpgradeThreadHoldingRead, offset: 0x60, size: 0x1, def value: None
  bool ___fUpgradeThreadHoldingRead;

  /// @brief Field owners, offset: 0x64, size: 0x4, def value: None
  uint32_t ___owners;

  /// @brief Field fDisposed, offset: 0x68, size: 0x1, def value: None
  bool ___fDisposed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::ReaderWriterLockSlim, 0x70>, "Size mismatch!");

} // namespace System::Threading
NEED_NO_BOX(::System::Threading::ReaderWriterLockSlim);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::ReaderWriterLockSlim*, "System.Threading", "ReaderWriterLockSlim");
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::__ReaderWriterLockSlim__TimeoutTracker, "System.Threading", "ReaderWriterLockSlim/TimeoutTracker");
