#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LevelMissionParser)
namespace GlobalNamespace {
class __LevelMissionParser__ParserFunction;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
class AsyncCallback;
}
namespace System {
class Object;
}
namespace System {
class IAsyncResult;
}
// Forward declare root types
namespace GlobalNamespace {
class LevelMissionParser;
}
namespace GlobalNamespace {
class __LevelMissionParser__ParserFunction;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LevelMissionParser);
MARK_REF_PTR_T(::GlobalNamespace::__LevelMissionParser__ParserFunction);
// Type: ::ParserFunction
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4237))
// CS Name: ::LevelMissionParser::ParserFunction*
class CORDL_TYPE __LevelMissionParser__ParserFunction : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::GlobalNamespace::__LevelMissionParser__ParserFunction* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x232ca9c size 0xd8 virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x232cb74 size 0x14 virtual true final false
  inline bool Invoke(::ArrayW<float_t, ::Array<float_t>*> functionParams, int32_t paramCount);

  /// @brief Method BeginInvoke addr 0x232cb88 size 0x94 virtual true final false
  inline ::System::IAsyncResult* BeginInvoke(::ArrayW<float_t, ::Array<float_t>*> functionParams, int32_t paramCount, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke addr 0x232cc1c size 0x28 virtual true final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__LevelMissionParser__ParserFunction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LevelMissionParser__ParserFunction(__LevelMissionParser__ParserFunction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LevelMissionParser__ParserFunction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LevelMissionParser__ParserFunction(__LevelMissionParser__ParserFunction const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LevelMissionParser__ParserFunction();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LevelMissionParser__ParserFunction, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::LevelMissionParser
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4238))
// CS Name: ::LevelMissionParser*
class CORDL_TYPE LevelMissionParser : public ::System::Object {
public:
  // Declarations
  using ParserFunction = ::GlobalNamespace::__LevelMissionParser__ParserFunction;

  /// @brief Field _functions, offset 0x10, size 0x8
  __declspec(property(get = __get__functions, put = __set__functions))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__LevelMissionParser__ParserFunction*>* _functions;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__LevelMissionParser__ParserFunction*>*& __get__functions();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__LevelMissionParser__ParserFunction*>*> const& __get__functions() const;

  constexpr void __set__functions(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__LevelMissionParser__ParserFunction*>* value);

  static inline ::GlobalNamespace::LevelMissionParser* New_ctor();

  /// @brief Method .ctor addr 0x232c3d8 size 0x84 virtual false final false
  inline void _ctor();

  /// @brief Method AddFunction addr 0x232c45c size 0x68 virtual false final false
  inline void AddFunction(::StringW name, ::GlobalNamespace::__LevelMissionParser__ParserFunction* function);

  /// @brief Method Parse addr 0x232c4c4 size 0x1c virtual false final false
  inline bool Parse(::StringW s);

  /// @brief Method Parse addr 0x232c4e0 size 0x2c8 virtual false final false
  inline bool Parse(::StringW s, int32_t start, int32_t length);

  /// @brief Method ParseFunction addr 0x232c7a8 size 0x2f4 virtual false final false
  inline bool ParseFunction(::StringW s, int32_t start, int32_t length);

  // Ctor Parameters [CppParam { name: "", ty: "LevelMissionParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LevelMissionParser(LevelMissionParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LevelMissionParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LevelMissionParser(LevelMissionParser const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelMissionParser();

public:
  /// @brief Field _functions, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__LevelMissionParser__ParserFunction*>* ____functions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelMissionParser, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LevelMissionParser);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelMissionParser*, "", "LevelMissionParser");
NEED_NO_BOX(::GlobalNamespace::__LevelMissionParser__ParserFunction);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LevelMissionParser__ParserFunction*, "", "LevelMissionParser/ParserFunction");
