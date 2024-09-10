#pragma once
// IWYU pragma private; include "System/Data/Common/BigIntegerStorage.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/Common/zzzz__DataStorage_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BigIntegerStorage)
namespace System::Collections {
class BitArray;
}
namespace System::Data {
struct AggregateType;
}
namespace System::Data {
class DataColumn;
}
namespace System::Numerics {
struct BigInteger;
}
namespace System {
class IFormatProvider;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Data::Common {
class BigIntegerStorage;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::Common::BigIntegerStorage);
// Type: System.Data.Common::BigIntegerStorage
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Data::Common {
// Is value type: false
// CS Name: ::System.Data.Common::BigIntegerStorage*
class CORDL_TYPE BigIntegerStorage : public ::System::Data::Common::DataStorage {
public:
// Declarations
/// @brief Field _values, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__values, put=__cordl_internal_set__values)) ::ArrayW<::System::Numerics::BigInteger,::Array<::System::Numerics::BigInteger>*>  _values;

/// @brief Method Aggregate, addr 0x41498d4, size 0x30, virtual true, abstract: false, final false
inline ::System::Object* Aggregate(::ArrayW<int32_t,::Array<int32_t>*>  records, ::System::Data::AggregateType  kind) ;

/// @brief Method Compare, addr 0x4149904, size 0x118, virtual true, abstract: false, final false
inline int32_t Compare(int32_t  recordNo1, int32_t  recordNo2) ;

/// @brief Method CompareValueTo, addr 0x4149a8c, size 0x128, virtual true, abstract: false, final false
inline int32_t CompareValueTo(int32_t  recordNo, ::System::Object*  value) ;

/// @brief Method ConvertFromBigInteger, addr 0x414a3b0, size 0x794, virtual false, abstract: false, final false
static inline ::System::Object* ConvertFromBigInteger(::System::Numerics::BigInteger  value, ::System::Type*  type, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method ConvertObjectToXml, addr 0x414b0c0, size 0xf0, virtual true, abstract: false, final false
inline ::StringW ConvertObjectToXml(::System::Object*  value) ;

/// @brief Method ConvertToBigInteger, addr 0x4149bdc, size 0x7d4, virtual false, abstract: false, final false
static inline ::System::Numerics::BigInteger ConvertToBigInteger(::System::Object*  value, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method ConvertValue, addr 0x414ab44, size 0xa0, virtual true, abstract: false, final false
inline ::System::Object* ConvertValue(::System::Object*  value) ;

/// @brief Method ConvertXmlToObject, addr 0x414b010, size 0xb0, virtual true, abstract: false, final false
inline ::System::Object* ConvertXmlToObject(::StringW  s) ;

/// @brief Method Copy, addr 0x414ac00, size 0x54, virtual true, abstract: false, final false
inline void Copy(int32_t  recordNo1, int32_t  recordNo2) ;

/// @brief Method CopyValue, addr 0x414b1f8, size 0x104, virtual true, abstract: false, final false
inline void CopyValue(int32_t  record, ::System::Object*  store, ::System::Collections::BitArray*  nullbits, int32_t  storeIndex) ;

/// @brief Method Get, addr 0x414ac94, size 0xbc, virtual true, abstract: false, final false
inline ::System::Object* Get(int32_t  record) ;

/// @brief Method GetEmptyStorage, addr 0x414b1b0, size 0x48, virtual true, abstract: false, final false
inline ::System::Object* GetEmptyStorage(int32_t  recordCount) ;

static inline ::System::Data::Common::BigIntegerStorage* New_ctor(::System::Data::DataColumn*  column) ;

/// @brief Method Set, addr 0x414ad88, size 0x12c, virtual true, abstract: false, final false
inline void Set(int32_t  record, ::System::Object*  value) ;

/// @brief Method SetCapacity, addr 0x414aed4, size 0xc0, virtual true, abstract: false, final false
inline void SetCapacity(int32_t  capacity) ;

/// @brief Method SetStorage, addr 0x414b2fc, size 0x94, virtual true, abstract: false, final false
inline void SetStorage(::System::Object*  store, ::System::Collections::BitArray*  nullbits) ;

constexpr ::ArrayW<::System::Numerics::BigInteger,::Array<::System::Numerics::BigInteger>*> const& __cordl_internal_get__values() const;

constexpr ::ArrayW<::System::Numerics::BigInteger,::Array<::System::Numerics::BigInteger>*>& __cordl_internal_get__values() ;

constexpr void __cordl_internal_set__values(::ArrayW<::System::Numerics::BigInteger,::Array<::System::Numerics::BigInteger>*>  value) ;

/// @brief Method .ctor, addr 0x4149700, size 0x140, virtual false, abstract: false, final false
inline void _ctor(::System::Data::DataColumn*  column) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BigIntegerStorage() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BigIntegerStorage", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BigIntegerStorage(BigIntegerStorage && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BigIntegerStorage", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BigIntegerStorage(BigIntegerStorage const& ) = delete;

/// @brief Field _values, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::System::Numerics::BigInteger,::Array<::System::Numerics::BigInteger>*>  ____values;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::Common::BigIntegerStorage, 0x58>, "Size mismatch!");

static_assert(offsetof(::System::Data::Common::BigIntegerStorage, ____values) == 0x50, "Offset mismatch!");

} // namespace end def System::Data::Common
NEED_NO_BOX(::System::Data::Common::BigIntegerStorage);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::Common::BigIntegerStorage*, "System.Data.Common", "BigIntegerStorage");
