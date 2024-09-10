#pragma once
// IWYU pragma private; include "System/Data/Common/SqlInt16Storage.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/Common/zzzz__DataStorage_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SqlInt16Storage)
namespace System::Collections {
class BitArray;
}
namespace System::Data::SqlTypes {
struct SqlInt16;
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
class SqlInt16Storage;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::Common::SqlInt16Storage);
// Type: System.Data.Common::SqlInt16Storage
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Data::Common {
// Is value type: false
// CS Name: ::System.Data.Common::SqlInt16Storage*
class CORDL_TYPE SqlInt16Storage : public ::System::Data::Common::DataStorage {
public:
// Declarations
/// @brief Field _values, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__values, put=__cordl_internal_set__values)) ::ArrayW<::System::Data::SqlTypes::SqlInt16,::Array<::System::Data::SqlTypes::SqlInt16>*>  _values;

/// @brief Method Aggregate, addr 0x416a034, size 0xe58, virtual true, abstract: false, final false
inline ::System::Object* Aggregate(::ArrayW<int32_t,::Array<int32_t>*>  records, ::System::Data::AggregateType  kind) ;

/// @brief Method Compare, addr 0x416ae8c, size 0xa0, virtual true, abstract: false, final false
inline int32_t Compare(int32_t  recordNo1, int32_t  recordNo2) ;

/// @brief Method CompareValueTo, addr 0x416af2c, size 0xbc, virtual true, abstract: false, final false
inline int32_t CompareValueTo(int32_t  recordNo, ::System::Object*  value) ;

/// @brief Method ConvertObjectToXml, addr 0x416b580, size 0x2a0, virtual true, abstract: false, final false
inline ::StringW ConvertObjectToXml(::System::Object*  value) ;

/// @brief Method ConvertValue, addr 0x416afe8, size 0x78, virtual true, abstract: false, final false
inline ::System::Object* ConvertValue(::System::Object*  value) ;

/// @brief Method ConvertXmlToObject, addr 0x416b298, size 0x2e8, virtual true, abstract: false, final false
inline ::System::Object* ConvertXmlToObject(::StringW  s) ;

/// @brief Method Copy, addr 0x416b060, size 0x3c, virtual true, abstract: false, final false
inline void Copy(int32_t  recordNo1, int32_t  recordNo2) ;

/// @brief Method CopyValue, addr 0x416b868, size 0x100, virtual true, abstract: false, final false
inline void CopyValue(int32_t  record, ::System::Object*  store, ::System::Collections::BitArray*  nullbits, int32_t  storeIndex) ;

/// @brief Method Get, addr 0x416b09c, size 0x80, virtual true, abstract: false, final false
inline ::System::Object* Get(int32_t  record) ;

/// @brief Method GetEmptyStorage, addr 0x416b820, size 0x48, virtual true, abstract: false, final false
inline ::System::Object* GetEmptyStorage(int32_t  recordCount) ;

/// @brief Method IsNull, addr 0x416b11c, size 0x7c, virtual true, abstract: false, final false
inline bool IsNull(int32_t  record) ;

static inline ::System::Data::Common::SqlInt16Storage* New_ctor(::System::Data::DataColumn*  column) ;

/// @brief Method Set, addr 0x416b198, size 0x48, virtual true, abstract: false, final false
inline void Set(int32_t  record, ::System::Object*  value) ;

/// @brief Method SetCapacity, addr 0x416b1e0, size 0xb8, virtual true, abstract: false, final false
inline void SetCapacity(int32_t  capacity) ;

/// @brief Method SetStorage, addr 0x416b968, size 0x98, virtual true, abstract: false, final false
inline void SetStorage(::System::Object*  store, ::System::Collections::BitArray*  nullbits) ;

constexpr ::ArrayW<::System::Data::SqlTypes::SqlInt16,::Array<::System::Data::SqlTypes::SqlInt16>*> const& __cordl_internal_get__values() const;

constexpr ::ArrayW<::System::Data::SqlTypes::SqlInt16,::Array<::System::Data::SqlTypes::SqlInt16>*>& __cordl_internal_get__values() ;

constexpr void __cordl_internal_set__values(::ArrayW<::System::Data::SqlTypes::SqlInt16,::Array<::System::Data::SqlTypes::SqlInt16>*>  value) ;

/// @brief Method .ctor, addr 0x4169efc, size 0x138, virtual false, abstract: false, final false
inline void _ctor(::System::Data::DataColumn*  column) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SqlInt16Storage() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SqlInt16Storage", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SqlInt16Storage(SqlInt16Storage && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SqlInt16Storage", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SqlInt16Storage(SqlInt16Storage const& ) = delete;

/// @brief Field _values, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::System::Data::SqlTypes::SqlInt16,::Array<::System::Data::SqlTypes::SqlInt16>*>  ____values;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::Common::SqlInt16Storage, 0x58>, "Size mismatch!");

static_assert(offsetof(::System::Data::Common::SqlInt16Storage, ____values) == 0x50, "Offset mismatch!");

} // namespace end def System::Data::Common
NEED_NO_BOX(::System::Data::Common::SqlInt16Storage);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::Common::SqlInt16Storage*, "System.Data.Common", "SqlInt16Storage");
