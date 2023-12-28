#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnsafeUtility)
namespace System {
class Array;
}
namespace System {
class Type;
}
namespace Unity::Collections::LowLevel::Unsafe {
template <typename T> struct __UnsafeUtility__AlignOfHelper_1;
}
namespace Unity::Collections {
struct Allocator;
}
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
class UnsafeUtility;
}
namespace Unity::Collections::LowLevel::Unsafe {
template <typename T> struct __UnsafeUtility__AlignOfHelper_1;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Collections::LowLevel::Unsafe::UnsafeUtility);
MARK_GEN_VAL_T(::Unity::Collections::LowLevel::Unsafe::__UnsafeUtility__AlignOfHelper_1);
// Type: ::AlignOfHelper`1
// SizeInfo { instance_size: 16, native_size: 32, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Collections::LowLevel::Unsafe {
// cpp template
template <typename T>
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10010))
// CS Name: ::UnsafeUtility::AlignOfHelper`1<T>
struct CORDL_TYPE __UnsafeUtility__AlignOfHelper_1 {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "dummy", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "data", ty: "T", modifiers: "", def_value: None }]
  constexpr __UnsafeUtility__AlignOfHelper_1(uint8_t dummy, T data) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnsafeUtility__AlignOfHelper_1();

  /// @brief Field dummy, offset: 0x0, size: 0x1, def value: None
  uint8_t dummy;

  /// @brief Field data, offset: 0x8, size: 0x8, def value: None
  T data;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Unity::Collections::LowLevel::Unsafe
// Type: Unity.Collections.LowLevel.Unsafe::UnsafeUtility
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10011))
// CS Name: ::Unity.Collections.LowLevel.Unsafe::UnsafeUtility*
class CORDL_TYPE UnsafeUtility : public ::System::Object {
public:
  // Declarations
  template <typename T> using AlignOfHelper_1 = ::Unity::Collections::LowLevel::Unsafe::__UnsafeUtility__AlignOfHelper_1<T>;

  /// @brief Method ReadArrayElement addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline T ReadArrayElement(::cordl_internals::Ptr<void> source, int32_t index);

  /// @brief Method ReadArrayElementWithStride addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline T ReadArrayElementWithStride(::cordl_internals::Ptr<void> source, int32_t index, int32_t stride);

  /// @brief Method WriteArrayElement addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline void WriteArrayElement(::cordl_internals::Ptr<void> destination, int32_t index, T value);

  /// @brief Method WriteArrayElementWithStride addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline void WriteArrayElementWithStride(::cordl_internals::Ptr<void> destination, int32_t index, int32_t stride, T value);

  /// @brief Method AddressOf addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline ::cordl_internals::Ptr<void> AddressOf(ByRef<T> output);

  /// @brief Method SizeOf addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline int32_t SizeOf();

  /// @brief Method EnumToInt addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline int32_t EnumToInt(T enumValue);

  /// @brief Method InternalEnumToInt addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline void InternalEnumToInt(ByRef<T> enumValue, ByRef<int32_t> intValue);

  /// @brief Method EnumEquals addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline bool EnumEquals(T lhs, T rhs);

  /// @brief Method IsBlittableValueType addr 0x2c9e0c4 size 0x60 virtual false final false
  static inline bool IsBlittableValueType(::System::Type* t);

  /// @brief Method GetReasonForTypeNonBlittableImpl addr 0x2c9e160 size 0x1bc virtual false final false
  static inline ::StringW GetReasonForTypeNonBlittableImpl(::System::Type* t, ::StringW name);

  /// @brief Method IsArrayBlittable addr 0x2c9e31c size 0x30 virtual false final false
  static inline bool IsArrayBlittable(::System::Array* arr);

  /// @brief Method IsGenericListBlittable addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline bool IsGenericListBlittable();

  /// @brief Method GetReasonForArrayNonBlittable addr 0x2c9e34c size 0x4c virtual false final false
  static inline ::StringW GetReasonForArrayNonBlittable(::System::Array* arr);

  /// @brief Method GetReasonForGenericListNonBlittable addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline ::StringW GetReasonForGenericListNonBlittable();

  /// @brief Method AlignOf addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline int32_t AlignOf();

  /// @brief Method IsBlittable addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline bool IsBlittable();

  /// @brief Method Malloc addr 0x2c9e398 size 0x54 virtual false final false
  static inline ::cordl_internals::Ptr<void> Malloc(int64_t size, int32_t alignment, ::Unity::Collections::Allocator allocator);

  /// @brief Method Free addr 0x2c9e024 size 0x44 virtual false final false
  static inline void Free(::cordl_internals::Ptr<void> memory, ::Unity::Collections::Allocator allocator);

  /// @brief Method MemCpy addr 0x2c9e3ec size 0x54 virtual false final false
  static inline void MemCpy(::cordl_internals::Ptr<void> destination, ::cordl_internals::Ptr<void> source, int64_t size);

  /// @brief Method MemCpyStride addr 0x2c9e440 size 0x74 virtual false final false
  static inline void MemCpyStride(::cordl_internals::Ptr<void> destination, int32_t destinationStride, ::cordl_internals::Ptr<void> source, int32_t sourceStride, int32_t elementSize, int32_t count);

  /// @brief Method MemMove addr 0x2c9e4b4 size 0x54 virtual false final false
  static inline void MemMove(::cordl_internals::Ptr<void> destination, ::cordl_internals::Ptr<void> source, int64_t size);

  /// @brief Method MemSet addr 0x2c9e508 size 0x54 virtual false final false
  static inline void MemSet(::cordl_internals::Ptr<void> destination, uint8_t value, int64_t size);

  /// @brief Method MemClear addr 0x2c9e55c size 0x48 virtual false final false
  static inline void MemClear(::cordl_internals::Ptr<void> destination, int64_t size);

  /// @brief Method MemCmp addr 0x2c9e5a4 size 0x54 virtual false final false
  static inline int32_t MemCmp(::cordl_internals::Ptr<void> ptr1, ::cordl_internals::Ptr<void> ptr2, int64_t size);

  /// @brief Method IsBlittable addr 0x2c9e124 size 0x3c virtual false final false
  static inline bool IsBlittable(::System::Type* type);

  // Ctor Parameters [CppParam { name: "", ty: "UnsafeUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnsafeUtility(UnsafeUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnsafeUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnsafeUtility(UnsafeUtility const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnsafeUtility();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility, 0x10>, "Size mismatch!");

} // namespace Unity::Collections::LowLevel::Unsafe
NEED_NO_BOX(::Unity::Collections::LowLevel::Unsafe::UnsafeUtility);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*, "Unity.Collections.LowLevel.Unsafe", "UnsafeUtility");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Collections::LowLevel::Unsafe::__UnsafeUtility__AlignOfHelper_1, "Unity.Collections.LowLevel.Unsafe", "UnsafeUtility/AlignOfHelper`1");
