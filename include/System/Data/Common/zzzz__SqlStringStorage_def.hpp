#pragma once
// IWYU pragma private; include "System/Data/Common/SqlStringStorage.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/Common/zzzz__DataStorage_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SqlStringStorage)
namespace System::Collections {
class BitArray;
}
namespace System::Data::SqlTypes {
struct SqlString;
}
namespace System::Data {
struct AggregateType;
}
namespace System::Data {
class DataColumn;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Data::Common {
class SqlStringStorage;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::Common::SqlStringStorage);
// Type: System.Data.Common::SqlStringStorage
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Data::Common {
// Is value type: false
// CS Name: ::System.Data.Common::SqlStringStorage*
class CORDL_TYPE SqlStringStorage : public ::System::Data::Common::DataStorage {
public:
// Declarations
/// @brief Field _values, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__values, put=__cordl_internal_set__values)) ::ArrayW<::System::Data::SqlTypes::SqlString,::Array<::System::Data::SqlTypes::SqlString>*>  _values;

/// @brief Method Aggregate, addr 0x41727fc, size 0x41c, virtual true, abstract: false, final false
inline ::System::Object* Aggregate(::ArrayW<int32_t,::Array<int32_t>*>  recordNos, ::System::Data::AggregateType  kind) ;

/// @brief Method Compare, addr 0x4172c18, size 0x70, virtual true, abstract: false, final false
inline int32_t Compare(int32_t  recordNo1, int32_t  recordNo2) ;

/// @brief Method Compare, addr 0x4172c88, size 0x13c, virtual false, abstract: false, final false
inline int32_t Compare(::System::Data::SqlTypes::SqlString  valueNo1, ::System::Data::SqlTypes::SqlString  valueNo2) ;

/// @brief Method CompareValueTo, addr 0x4172dc4, size 0xc4, virtual true, abstract: false, final false
inline int32_t CompareValueTo(int32_t  recordNo, ::System::Object*  value) ;

/// @brief Method ConvertObjectToXml, addr 0x4173540, size 0x2a0, virtual true, abstract: false, final false
inline ::StringW ConvertObjectToXml(::System::Object*  value) ;

/// @brief Method ConvertValue, addr 0x4172e88, size 0x80, virtual true, abstract: false, final false
inline ::System::Object* ConvertValue(::System::Object*  value) ;

/// @brief Method ConvertXmlToObject, addr 0x4173254, size 0x2ec, virtual true, abstract: false, final false
inline ::System::Object* ConvertXmlToObject(::StringW  s) ;

/// @brief Method Copy, addr 0x4172f08, size 0x58, virtual true, abstract: false, final false
inline void Copy(int32_t  recordNo1, int32_t  recordNo2) ;

/// @brief Method CopyValue, addr 0x4173828, size 0x118, virtual true, abstract: false, final false
inline void CopyValue(int32_t  record, ::System::Object*  store, ::System::Collections::BitArray*  nullbits, int32_t  storeIndex) ;

/// @brief Method Get, addr 0x4172f60, size 0x84, virtual true, abstract: false, final false
inline ::System::Object* Get(int32_t  record) ;

/// @brief Method GetEmptyStorage, addr 0x41737e0, size 0x48, virtual true, abstract: false, final false
inline ::System::Object* GetEmptyStorage(int32_t  recordCount) ;

/// @brief Method GetStringLength, addr 0x4172fe4, size 0xcc, virtual true, abstract: false, final false
inline int32_t GetStringLength(int32_t  record) ;

/// @brief Method IsNull, addr 0x41730b0, size 0x80, virtual true, abstract: false, final false
inline bool IsNull(int32_t  record) ;

static inline ::System::Data::Common::SqlStringStorage* New_ctor(::System::Data::DataColumn*  column) ;

/// @brief Method Set, addr 0x4173130, size 0x6c, virtual true, abstract: false, final false
inline void Set(int32_t  record, ::System::Object*  value) ;

/// @brief Method SetCapacity, addr 0x417319c, size 0xb8, virtual true, abstract: false, final false
inline void SetCapacity(int32_t  capacity) ;

/// @brief Method SetStorage, addr 0x4173940, size 0x98, virtual true, abstract: false, final false
inline void SetStorage(::System::Object*  store, ::System::Collections::BitArray*  nullbits) ;

constexpr ::ArrayW<::System::Data::SqlTypes::SqlString,::Array<::System::Data::SqlTypes::SqlString>*> const& __cordl_internal_get__values() const;

constexpr ::ArrayW<::System::Data::SqlTypes::SqlString,::Array<::System::Data::SqlTypes::SqlString>*>& __cordl_internal_get__values() ;

constexpr void __cordl_internal_set__values(::ArrayW<::System::Data::SqlTypes::SqlString,::Array<::System::Data::SqlTypes::SqlString>*>  value) ;

/// @brief Method .ctor, addr 0x41726bc, size 0x140, virtual false, abstract: false, final false
inline void _ctor(::System::Data::DataColumn*  column) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SqlStringStorage() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SqlStringStorage", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SqlStringStorage(SqlStringStorage && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SqlStringStorage", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SqlStringStorage(SqlStringStorage const& ) = delete;

/// @brief Field _values, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::System::Data::SqlTypes::SqlString,::Array<::System::Data::SqlTypes::SqlString>*>  ____values;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::Common::SqlStringStorage, 0x58>, "Size mismatch!");

static_assert(offsetof(::System::Data::Common::SqlStringStorage, ____values) == 0x50, "Offset mismatch!");

} // namespace end def System::Data::Common
NEED_NO_BOX(::System::Data::Common::SqlStringStorage);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::Common::SqlStringStorage*, "System.Data.Common", "SqlStringStorage");
