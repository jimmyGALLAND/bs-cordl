#pragma once
// IWYU pragma private; include "System/Data/Common/Int16Storage.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/Common/zzzz__DataStorage_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Int16Storage)
namespace System::Collections {
class BitArray;
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
class Int16Storage;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::Common::Int16Storage);
// Type: System.Data.Common::Int16Storage
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Data::Common {
// Is value type: false
// CS Name: ::System.Data.Common::Int16Storage*
class CORDL_TYPE Int16Storage : public ::System::Data::Common::DataStorage {
public:
// Declarations
/// @brief Field _values, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__values, put=__cordl_internal_set__values)) ::ArrayW<int16_t,::Array<int16_t>*>  _values;

/// @brief Method Aggregate, addr 0x4155b78, size 0x848, virtual true, abstract: false, final false
inline ::System::Object* Aggregate(::ArrayW<int32_t,::Array<int32_t>*>  records, ::System::Data::AggregateType  kind) ;

/// @brief Method Compare, addr 0x41563c0, size 0x60, virtual true, abstract: false, final false
inline int32_t Compare(int32_t  recordNo1, int32_t  recordNo2) ;

/// @brief Method CompareValueTo, addr 0x4156420, size 0xf0, virtual true, abstract: false, final false
inline int32_t CompareValueTo(int32_t  recordNo, ::System::Object*  value) ;

/// @brief Method ConvertObjectToXml, addr 0x4156a20, size 0x98, virtual true, abstract: false, final false
inline ::StringW ConvertObjectToXml(::System::Object*  value) ;

/// @brief Method ConvertValue, addr 0x4156510, size 0x150, virtual true, abstract: false, final false
inline ::System::Object* ConvertValue(::System::Object*  value) ;

/// @brief Method ConvertXmlToObject, addr 0x4156994, size 0x8c, virtual true, abstract: false, final false
inline ::System::Object* ConvertXmlToObject(::StringW  s) ;

/// @brief Method Copy, addr 0x4156660, size 0x54, virtual true, abstract: false, final false
inline void Copy(int32_t  recordNo1, int32_t  recordNo2) ;

/// @brief Method CopyValue, addr 0x4156b00, size 0xfc, virtual true, abstract: false, final false
inline void CopyValue(int32_t  record, ::System::Object*  store, ::System::Collections::BitArray*  nullbits, int32_t  storeIndex) ;

/// @brief Method Get, addr 0x41566b4, size 0x9c, virtual true, abstract: false, final false
inline ::System::Object* Get(int32_t  record) ;

/// @brief Method GetEmptyStorage, addr 0x4156ab8, size 0x48, virtual true, abstract: false, final false
inline ::System::Object* GetEmptyStorage(int32_t  recordCount) ;

static inline ::System::Data::Common::Int16Storage* New_ctor(::System::Data::DataColumn*  column) ;

/// @brief Method Set, addr 0x4156750, size 0x184, virtual true, abstract: false, final false
inline void Set(int32_t  record, ::System::Object*  value) ;

/// @brief Method SetCapacity, addr 0x41568d4, size 0xc0, virtual true, abstract: false, final false
inline void SetCapacity(int32_t  capacity) ;

/// @brief Method SetStorage, addr 0x4156bfc, size 0x94, virtual true, abstract: false, final false
inline void SetStorage(::System::Object*  store, ::System::Collections::BitArray*  nullbits) ;

constexpr ::ArrayW<int16_t,::Array<int16_t>*> const& __cordl_internal_get__values() const;

constexpr ::ArrayW<int16_t,::Array<int16_t>*>& __cordl_internal_get__values() ;

constexpr void __cordl_internal_set__values(::ArrayW<int16_t,::Array<int16_t>*>  value) ;

/// @brief Method .ctor, addr 0x414ed04, size 0xf4, virtual false, abstract: false, final false
inline void _ctor(::System::Data::DataColumn*  column) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Int16Storage() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Int16Storage", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Int16Storage(Int16Storage && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Int16Storage", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Int16Storage(Int16Storage const& ) = delete;

/// @brief Field _values, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<int16_t,::Array<int16_t>*>  ____values;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::Common::Int16Storage, 0x58>, "Size mismatch!");

static_assert(offsetof(::System::Data::Common::Int16Storage, ____values) == 0x50, "Offset mismatch!");

} // namespace end def System::Data::Common
NEED_NO_BOX(::System::Data::Common::Int16Storage);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::Common::Int16Storage*, "System.Data.Common", "Int16Storage");
