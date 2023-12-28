#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EncodingTable)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Globalization {
struct InternalCodePageDataItem;
}
namespace System::Globalization {
class CodePageDataItem;
}
namespace System::Globalization {
struct InternalEncodingDataItem;
}
// Forward declare root types
namespace System::Globalization {
class EncodingTable;
}
// Write type traits
MARK_REF_PTR_T(::System::Globalization::EncodingTable);
// Type: System.Globalization::EncodingTable
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Globalization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3715))
// CS Name: ::System.Globalization::EncodingTable*
class CORDL_TYPE EncodingTable : public ::System::Object {
public:
  // Declarations
  /// @brief Field encodingDataPtr, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_encodingDataPtr,
                             put = setStaticF_encodingDataPtr))::ArrayW<::System::Globalization::InternalEncodingDataItem, ::Array<::System::Globalization::InternalEncodingDataItem>*> encodingDataPtr;

  /// @brief Field codePageDataPtr, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_codePageDataPtr,
                             put = setStaticF_codePageDataPtr))::ArrayW<::System::Globalization::InternalCodePageDataItem, ::Array<::System::Globalization::InternalCodePageDataItem>*> codePageDataPtr;

  /// @brief Field lastEncodingItem, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_lastEncodingItem, put = setStaticF_lastEncodingItem)) int32_t lastEncodingItem;

  /// @brief Field hashByName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_hashByName, put = setStaticF_hashByName))::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* hashByName;

  /// @brief Field hashByCodePage, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_hashByCodePage,
                             put = setStaticF_hashByCodePage))::System::Collections::Generic::Dictionary_2<int32_t, ::System::Globalization::CodePageDataItem*>* hashByCodePage;

  static inline void setStaticF_encodingDataPtr(::ArrayW<::System::Globalization::InternalEncodingDataItem, ::Array<::System::Globalization::InternalEncodingDataItem>*> value);

  static inline ::ArrayW<::System::Globalization::InternalEncodingDataItem, ::Array<::System::Globalization::InternalEncodingDataItem>*> getStaticF_encodingDataPtr();

  static inline void setStaticF_codePageDataPtr(::ArrayW<::System::Globalization::InternalCodePageDataItem, ::Array<::System::Globalization::InternalCodePageDataItem>*> value);

  static inline ::ArrayW<::System::Globalization::InternalCodePageDataItem, ::Array<::System::Globalization::InternalCodePageDataItem>*> getStaticF_codePageDataPtr();

  static inline void setStaticF_lastEncodingItem(int32_t value);

  static inline int32_t getStaticF_lastEncodingItem();

  static inline void setStaticF_hashByName(::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* value);

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* getStaticF_hashByName();

  static inline void setStaticF_hashByCodePage(::System::Collections::Generic::Dictionary_2<int32_t, ::System::Globalization::CodePageDataItem*>* value);

  static inline ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Globalization::CodePageDataItem*>* getStaticF_hashByCodePage();

  /// @brief Method GetNumEncodingItems addr 0x256c824 size 0x64 virtual false final false
  static inline int32_t GetNumEncodingItems();

  /// @brief Method ENC addr 0x256c888 size 0x8 virtual false final false
  static inline ::System::Globalization::InternalEncodingDataItem ENC(::StringW name, uint16_t cp);

  /// @brief Method MapCodePageDataItem addr 0x256c890 size 0x14 virtual false final false
  static inline ::System::Globalization::InternalCodePageDataItem MapCodePageDataItem(uint16_t cp, uint16_t fcp, ::StringW names, uint32_t flags);

  /// @brief Method internalGetCodePageFromName addr 0x2571d5c size 0x258 virtual false final false
  static inline int32_t internalGetCodePageFromName(::StringW name);

  /// @brief Method GetCodePageFromName addr 0x2571fb4 size 0x284 virtual false final false
  static inline int32_t GetCodePageFromName(::StringW name);

  /// @brief Method GetCodePageDataItem addr 0x2572238 size 0x2e8 virtual false final false
  static inline ::System::Globalization::CodePageDataItem* GetCodePageDataItem(int32_t codepage);

  // Ctor Parameters [CppParam { name: "", ty: "EncodingTable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EncodingTable(EncodingTable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EncodingTable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EncodingTable(EncodingTable const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EncodingTable();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::EncodingTable, 0x10>, "Size mismatch!");

} // namespace System::Globalization
NEED_NO_BOX(::System::Globalization::EncodingTable);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::EncodingTable*, "System.Globalization", "EncodingTable");
