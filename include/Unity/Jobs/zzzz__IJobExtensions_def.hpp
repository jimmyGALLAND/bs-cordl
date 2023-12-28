#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IJobExtensions)
namespace System {
class Object;
}
namespace Unity::Jobs::LowLevel::Unsafe {
struct JobRanges;
}
namespace Unity::Jobs {
template <typename T> struct __IJobExtensions__JobStruct_1;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace GlobalNamespace {
template <typename T> class __IJobExtensions__JobStruct_1__ExecuteJobFunction;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename T> class __IJobExtensions__JobStruct_1__ExecuteJobFunction;
}
namespace Unity::Jobs {
class IJobExtensions;
}
namespace Unity::Jobs {
template <typename T> struct __IJobExtensions__JobStruct_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction);
MARK_REF_PTR_T(::Unity::Jobs::IJobExtensions);
MARK_GEN_VAL_T(::Unity::Jobs::__IJobExtensions__JobStruct_1);
// Type: ::ExecuteJobFunction
// SizeInfo { instance_size: 128, native_size: 128, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9974))
// CS Name: ::IJobExtensions::JobStruct`1::ExecuteJobFunction<T>*
class CORDL_TYPE __IJobExtensions__JobStruct_1__ExecuteJobFunction : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<T>* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Invoke(ByRef<T> data, void* additionalPtr, void* bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex);

  // Ctor Parameters [CppParam { name: "", ty: "__IJobExtensions__JobStruct_1__ExecuteJobFunction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IJobExtensions__JobStruct_1__ExecuteJobFunction(__IJobExtensions__JobStruct_1__ExecuteJobFunction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IJobExtensions__JobStruct_1__ExecuteJobFunction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IJobExtensions__JobStruct_1__ExecuteJobFunction(__IJobExtensions__JobStruct_1__ExecuteJobFunction const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IJobExtensions__JobStruct_1__ExecuteJobFunction();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::JobStruct`1
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace Unity::Jobs {
// cpp template
template <typename T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2603))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9975))
// CS Name: ::IJobExtensions::JobStruct`1<T>
#pragma pack(push, 0)
struct CORDL_TYPE __IJobExtensions__JobStruct_1 {
public:
  // Declarations
  using ExecuteJobFunction = ::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<T>;

  /// @brief Field jobReflectionData, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_jobReflectionData, put = setStaticF_jobReflectionData)) void* jobReflectionData;

  static inline void setStaticF_jobReflectionData(void* value);

  static inline void* getStaticF_jobReflectionData();

  /// @brief Method Execute addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline void Execute(ByRef<T> data, void* additionalPtr, void* bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __IJobExtensions__JobStruct_1();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
} // namespace Unity::Jobs
// Type: Unity.Jobs::IJobExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Jobs {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9976))
// CS Name: ::Unity.Jobs::IJobExtensions*
class CORDL_TYPE IJobExtensions : public ::System::Object {
public:
  // Declarations
  template <typename T> using JobStruct_1 = ::Unity::Jobs::__IJobExtensions__JobStruct_1<T>;

  /// @brief Method Schedule addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline ::Unity::Jobs::JobHandle Schedule(T jobData, ::Unity::Jobs::JobHandle dependsOn);

  // Ctor Parameters [CppParam { name: "", ty: "IJobExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IJobExtensions(IJobExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IJobExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IJobExtensions(IJobExtensions const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IJobExtensions();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Jobs::IJobExtensions, 0x10>, "Size mismatch!");

} // namespace Unity::Jobs
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction, "Unity.Jobs", "IJobExtensions/JobStruct`1/ExecuteJobFunction");
NEED_NO_BOX(::Unity::Jobs::IJobExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Jobs::IJobExtensions*, "Unity.Jobs", "IJobExtensions");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Jobs::__IJobExtensions__JobStruct_1, "Unity.Jobs", "IJobExtensions/JobStruct`1");
