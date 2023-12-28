#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkPacketSerializer_2)
namespace System {
template <typename T1, typename T2, typename T3> class Action_3;
}
namespace GlobalNamespace {
template <typename TType, typename TData, typename TPacket> class __NetworkPacketSerializer_2____c__6_1;
}
namespace GlobalNamespace {
template <typename TType, typename TData> class __NetworkPacketSerializer_2____c__DisplayClass10_0;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace GlobalNamespace {
template <typename TType, typename TData, typename TPacket> class __NetworkPacketSerializer_2____c__DisplayClass4_0_1;
}
namespace System {
class Type;
}
namespace GlobalNamespace {
template <typename TData> class INetworkPacketSubSerializer_1;
}
namespace GlobalNamespace {
template <typename TType, typename TData, typename TPacket> class __NetworkPacketSerializer_2____c__DisplayClass8_0_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace GlobalNamespace {
template <typename TData> class INetworkPacketSerializer_1;
}
namespace GlobalNamespace {
template <typename TType, typename TData, typename TPacket> class __NetworkPacketSerializer_2____c__DisplayClass7_0_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
template <typename T> class Action_1;
}
namespace GlobalNamespace {
template <typename TType, typename TData, typename TPacket> class __NetworkPacketSerializer_2____c__DisplayClass5_0_1;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace System {
template <typename T1, typename T2, typename T3, typename TResult> class Func_4;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename TType, typename TData> class NetworkPacketSerializer_2;
}
namespace GlobalNamespace {
template <typename TType, typename TData, typename TPacket> class __NetworkPacketSerializer_2____c__6_1;
}
namespace GlobalNamespace {
template <typename TType, typename TData> class __NetworkPacketSerializer_2____c__DisplayClass10_0;
}
namespace GlobalNamespace {
template <typename TType, typename TData, typename TPacket> class __NetworkPacketSerializer_2____c__DisplayClass4_0_1;
}
namespace GlobalNamespace {
template <typename TType, typename TData, typename TPacket> class __NetworkPacketSerializer_2____c__DisplayClass5_0_1;
}
namespace GlobalNamespace {
template <typename TType, typename TData, typename TPacket> class __NetworkPacketSerializer_2____c__DisplayClass7_0_1;
}
namespace GlobalNamespace {
template <typename TType, typename TData, typename TPacket> class __NetworkPacketSerializer_2____c__DisplayClass8_0_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::NetworkPacketSerializer_2);
MARK_GEN_REF_PTR_T(::GlobalNamespace::__NetworkPacketSerializer_2____c__6_1);
MARK_GEN_REF_PTR_T(::GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass10_0);
MARK_GEN_REF_PTR_T(::GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass4_0_1);
MARK_GEN_REF_PTR_T(::GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass5_0_1);
MARK_GEN_REF_PTR_T(::GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass7_0_1);
MARK_GEN_REF_PTR_T(::GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass8_0_1);
// Type: ::<>c__DisplayClass4_0`1
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename TType, typename TData, typename TPacket>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12892))
// CS Name: ::NetworkPacketSerializer`2::<>c__DisplayClass4_0`1<TType,TData,TPacket>*
class CORDL_TYPE __NetworkPacketSerializer_2____c__DisplayClass4_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field callback, offset 0x10, size 0x8
  __declspec(property(get = __get_callback, put = __set_callback))::System::Action_1<TPacket>* callback;

  constexpr ::System::Action_1<TPacket>*& __get_callback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<TPacket>*> const& __get_callback() const;

  constexpr void __set_callback(::System::Action_1<TPacket>* value);

  static inline ::GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass4_0_1<TType, TData, TPacket>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  /// @brief Method <RegisterCallback>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _RegisterCallback_b__0(TPacket packet, TData data);

  // Ctor Parameters [CppParam { name: "", ty: "__NetworkPacketSerializer_2____c__DisplayClass4_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NetworkPacketSerializer_2____c__DisplayClass4_0_1(__NetworkPacketSerializer_2____c__DisplayClass4_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NetworkPacketSerializer_2____c__DisplayClass4_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NetworkPacketSerializer_2____c__DisplayClass4_0_1(__NetworkPacketSerializer_2____c__DisplayClass4_0_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NetworkPacketSerializer_2____c__DisplayClass4_0_1();

public:
  /// @brief Field callback, offset: 0x10, size: 0x8, def value: None
  ::System::Action_1<TPacket>* ___callback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass5_0`1
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename TType, typename TData, typename TPacket>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12893))
// CS Name: ::NetworkPacketSerializer`2::<>c__DisplayClass5_0`1<TType,TData,TPacket>*
class CORDL_TYPE __NetworkPacketSerializer_2____c__DisplayClass5_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field callback, offset 0x10, size 0x8
  __declspec(property(get = __get_callback, put = __set_callback))::System::Action_1<TPacket>* callback;

  /// @brief Field constructor, offset 0x18, size 0x8
  __declspec(property(get = __get_constructor, put = __set_constructor))::System::Func_1<TPacket>* constructor;

  constexpr ::System::Action_1<TPacket>*& __get_callback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<TPacket>*> const& __get_callback() const;

  constexpr void __set_callback(::System::Action_1<TPacket>* value);

  constexpr ::System::Func_1<TPacket>*& __get_constructor();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_1<TPacket>*> const& __get_constructor() const;

  constexpr void __set_constructor(::System::Func_1<TPacket>* value);

  static inline ::GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass5_0_1<TType, TData, TPacket>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  /// @brief Method <RegisterCallback>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _RegisterCallback_b__0(TPacket packet, TData data);

  /// @brief Method <RegisterCallback>b__1 addr 0x0 size 0xffffffffffffffff virtual false final false
  inline TPacket _RegisterCallback_b__1(TData data);

  // Ctor Parameters [CppParam { name: "", ty: "__NetworkPacketSerializer_2____c__DisplayClass5_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NetworkPacketSerializer_2____c__DisplayClass5_0_1(__NetworkPacketSerializer_2____c__DisplayClass5_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NetworkPacketSerializer_2____c__DisplayClass5_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NetworkPacketSerializer_2____c__DisplayClass5_0_1(__NetworkPacketSerializer_2____c__DisplayClass5_0_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NetworkPacketSerializer_2____c__DisplayClass5_0_1();

public:
  /// @brief Field callback, offset: 0x10, size: 0x8, def value: None
  ::System::Action_1<TPacket>* ___callback;

  /// @brief Field constructor, offset: 0x18, size: 0x8, def value: None
  ::System::Func_1<TPacket>* ___constructor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::<>c__6`1
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename TType, typename TData, typename TPacket>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12894))
// CS Name: ::NetworkPacketSerializer`2::<>c__6`1<TType,TData,TPacket>*
class CORDL_TYPE __NetworkPacketSerializer_2____c__6_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__NetworkPacketSerializer_2____c__6_1<TType, TData, TPacket>* __9;

  /// @brief Field <>9__6_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__6_0, put = setStaticF___9__6_0))::System::Func_2<TData, TPacket>* __9__6_0;

  static inline void setStaticF___9(::GlobalNamespace::__NetworkPacketSerializer_2____c__6_1<TType, TData, TPacket>* value);

  static inline ::GlobalNamespace::__NetworkPacketSerializer_2____c__6_1<TType, TData, TPacket>* getStaticF___9();

  static inline void setStaticF___9__6_0(::System::Func_2<TData, TPacket>* value);

  static inline ::System::Func_2<TData, TPacket>* getStaticF___9__6_0();

  static inline ::GlobalNamespace::__NetworkPacketSerializer_2____c__6_1<TType, TData, TPacket>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  /// @brief Method <RegisterCallback>b__6_0 addr 0x0 size 0xffffffffffffffff virtual false final false
  inline TPacket _RegisterCallback_b__6_0(TData data);

  // Ctor Parameters [CppParam { name: "", ty: "__NetworkPacketSerializer_2____c__6_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NetworkPacketSerializer_2____c__6_1(__NetworkPacketSerializer_2____c__6_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NetworkPacketSerializer_2____c__6_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NetworkPacketSerializer_2____c__6_1(__NetworkPacketSerializer_2____c__6_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NetworkPacketSerializer_2____c__6_1();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass7_0`1
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename TType, typename TData, typename TPacket>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12895))
// CS Name: ::NetworkPacketSerializer`2::<>c__DisplayClass7_0`1<TType,TData,TPacket>*
class CORDL_TYPE __NetworkPacketSerializer_2____c__DisplayClass7_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field constructor, offset 0x10, size 0x8
  __declspec(property(get = __get_constructor, put = __set_constructor))::System::Func_1<TPacket>* constructor;

  constexpr ::System::Func_1<TPacket>*& __get_constructor();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_1<TPacket>*> const& __get_constructor() const;

  constexpr void __set_constructor(::System::Func_1<TPacket>* value);

  static inline ::GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass7_0_1<TType, TData, TPacket>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  /// @brief Method <RegisterCallback>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
  inline TPacket _RegisterCallback_b__0(TData data);

  // Ctor Parameters [CppParam { name: "", ty: "__NetworkPacketSerializer_2____c__DisplayClass7_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NetworkPacketSerializer_2____c__DisplayClass7_0_1(__NetworkPacketSerializer_2____c__DisplayClass7_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NetworkPacketSerializer_2____c__DisplayClass7_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NetworkPacketSerializer_2____c__DisplayClass7_0_1(__NetworkPacketSerializer_2____c__DisplayClass7_0_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NetworkPacketSerializer_2____c__DisplayClass7_0_1();

public:
  /// @brief Field constructor, offset: 0x10, size: 0x8, def value: None
  ::System::Func_1<TPacket>* ___constructor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass8_0`1
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename TType, typename TData, typename TPacket>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12896))
// CS Name: ::NetworkPacketSerializer`2::<>c__DisplayClass8_0`1<TType,TData,TPacket>*
class CORDL_TYPE __NetworkPacketSerializer_2____c__DisplayClass8_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field constructor, offset 0x10, size 0x8
  __declspec(property(get = __get_constructor, put = __set_constructor))::System::Func_2<TData, TPacket>* constructor;

  /// @brief Field callback, offset 0x18, size 0x8
  __declspec(property(get = __get_callback, put = __set_callback))::System::Action_2<TPacket, TData>* callback;

  /// @brief Field deserialize, offset 0x20, size 0x8
  __declspec(property(get = __get_deserialize, put = __set_deserialize))::System::Func_4<::LiteNetLib::Utils::NetDataReader*, int32_t, TData, TPacket>* deserialize;

  constexpr ::System::Func_2<TData, TPacket>*& __get_constructor();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TData, TPacket>*> const& __get_constructor() const;

  constexpr void __set_constructor(::System::Func_2<TData, TPacket>* value);

  constexpr ::System::Action_2<TPacket, TData>*& __get_callback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<TPacket, TData>*> const& __get_callback() const;

  constexpr void __set_callback(::System::Action_2<TPacket, TData>* value);

  constexpr ::System::Func_4<::LiteNetLib::Utils::NetDataReader*, int32_t, TData, TPacket>*& __get_deserialize();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_4<::LiteNetLib::Utils::NetDataReader*, int32_t, TData, TPacket>*> const& __get_deserialize() const;

  constexpr void __set_deserialize(::System::Func_4<::LiteNetLib::Utils::NetDataReader*, int32_t, TData, TPacket>* value);

  static inline ::GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass8_0_1<TType, TData, TPacket>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  /// @brief Method <RegisterCallback>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
  inline TPacket _RegisterCallback_b__0(::LiteNetLib::Utils::NetDataReader* reader, int32_t size, TData data);

  /// @brief Method <RegisterCallback>b__1 addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _RegisterCallback_b__1(::LiteNetLib::Utils::NetDataReader* reader, int32_t size, TData data);

  // Ctor Parameters [CppParam { name: "", ty: "__NetworkPacketSerializer_2____c__DisplayClass8_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NetworkPacketSerializer_2____c__DisplayClass8_0_1(__NetworkPacketSerializer_2____c__DisplayClass8_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NetworkPacketSerializer_2____c__DisplayClass8_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NetworkPacketSerializer_2____c__DisplayClass8_0_1(__NetworkPacketSerializer_2____c__DisplayClass8_0_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NetworkPacketSerializer_2____c__DisplayClass8_0_1();

public:
  /// @brief Field constructor, offset: 0x10, size: 0x8, def value: None
  ::System::Func_2<TData, TPacket>* ___constructor;

  /// @brief Field callback, offset: 0x18, size: 0x8, def value: None
  ::System::Action_2<TPacket, TData>* ___callback;

  /// @brief Field deserialize, offset: 0x20, size: 0x8, def value: None
  ::System::Func_4<::LiteNetLib::Utils::NetDataReader*, int32_t, TData, TPacket>* ___deserialize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass10_0
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename TType, typename TData>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12897))
// CS Name: ::NetworkPacketSerializer`2::<>c__DisplayClass10_0<TType,TData>*
class CORDL_TYPE __NetworkPacketSerializer_2____c__DisplayClass10_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field subSubSerializer, offset 0x10, size 0x8
  __declspec(property(get = __get_subSubSerializer, put = __set_subSubSerializer))::GlobalNamespace::INetworkPacketSubSerializer_1<TData>* subSubSerializer;

  constexpr ::GlobalNamespace::INetworkPacketSubSerializer_1<TData>*& __get_subSubSerializer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::INetworkPacketSubSerializer_1<TData>*> const& __get_subSubSerializer() const;

  constexpr void __set_subSubSerializer(::GlobalNamespace::INetworkPacketSubSerializer_1<TData>* value);

  static inline ::GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass10_0<TType, TData>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  /// @brief Method <RegisterSubSerializer>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _RegisterSubSerializer_b__0(::LiteNetLib::Utils::NetDataReader* reader, int32_t size, TData data);

  // Ctor Parameters [CppParam { name: "", ty: "__NetworkPacketSerializer_2____c__DisplayClass10_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NetworkPacketSerializer_2____c__DisplayClass10_0(__NetworkPacketSerializer_2____c__DisplayClass10_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NetworkPacketSerializer_2____c__DisplayClass10_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NetworkPacketSerializer_2____c__DisplayClass10_0(__NetworkPacketSerializer_2____c__DisplayClass10_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NetworkPacketSerializer_2____c__DisplayClass10_0();

public:
  /// @brief Field subSubSerializer, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::INetworkPacketSubSerializer_1<TData>* ___subSubSerializer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::NetworkPacketSerializer`2
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename TType, typename TData>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12898))
// CS Name: ::NetworkPacketSerializer`2<TType,TData>*
class CORDL_TYPE NetworkPacketSerializer_2 : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass10_0 = ::GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass10_0<TType, TData>;

  template <typename TPacket> using __c__DisplayClass8_0_1 = ::GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass8_0_1<TType, TData, TPacket>;

  template <typename TPacket> using __c__DisplayClass7_0_1 = ::GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass7_0_1<TType, TData, TPacket>;

  template <typename TPacket> using __c__6_1 = ::GlobalNamespace::__NetworkPacketSerializer_2____c__6_1<TType, TData, TPacket>;

  template <typename TPacket> using __c__DisplayClass5_0_1 = ::GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass5_0_1<TType, TData, TPacket>;

  template <typename TPacket> using __c__DisplayClass4_0_1 = ::GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass4_0_1<TType, TData, TPacket>;

  /// @brief Field _messsageHandlers, offset 0x10, size 0x8
  __declspec(property(get = __get__messsageHandlers,
                      put = __set__messsageHandlers))::System::Collections::Generic::Dictionary_2<uint8_t, ::System::Action_3<::LiteNetLib::Utils::NetDataReader*, int32_t, TData>*>* _messsageHandlers;

  /// @brief Field _typeRegistry, offset 0x18, size 0x8
  __declspec(property(get = __get__typeRegistry, put = __set__typeRegistry))::System::Collections::Generic::Dictionary_2<::System::Type*, uint8_t>* _typeRegistry;

  /// @brief Field _subSerializerRegistry, offset 0x20, size 0x8
  __declspec(property(get = __get__subSerializerRegistry,
                      put = __set__subSerializerRegistry))::System::Collections::Generic::Dictionary_2<::GlobalNamespace::INetworkPacketSubSerializer_1<TData>*, uint8_t>* _subSerializerRegistry;

  /// @brief Field _internalWriter, offset 0x28, size 0x8
  __declspec(property(get = __get__internalWriter, put = __set__internalWriter))::LiteNetLib::Utils::NetDataWriter* _internalWriter;

  /// @brief Convert operator to "::GlobalNamespace::INetworkPacketSerializer_1<TData>"
  constexpr operator ::GlobalNamespace::INetworkPacketSerializer_1<TData>*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::INetworkPacketSubSerializer_1<TData>"
  constexpr operator ::GlobalNamespace::INetworkPacketSubSerializer_1<TData>*() noexcept;

  constexpr ::System::Collections::Generic::Dictionary_2<uint8_t, ::System::Action_3<::LiteNetLib::Utils::NetDataReader*, int32_t, TData>*>*& __get__messsageHandlers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<uint8_t, ::System::Action_3<::LiteNetLib::Utils::NetDataReader*, int32_t, TData>*>*> const&
  __get__messsageHandlers() const;

  constexpr void __set__messsageHandlers(::System::Collections::Generic::Dictionary_2<uint8_t, ::System::Action_3<::LiteNetLib::Utils::NetDataReader*, int32_t, TData>*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, uint8_t>*& __get__typeRegistry();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Type*, uint8_t>*> const& __get__typeRegistry() const;

  constexpr void __set__typeRegistry(::System::Collections::Generic::Dictionary_2<::System::Type*, uint8_t>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::INetworkPacketSubSerializer_1<TData>*, uint8_t>*& __get__subSerializerRegistry();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::INetworkPacketSubSerializer_1<TData>*, uint8_t>*> const&
  __get__subSerializerRegistry() const;

  constexpr void __set__subSerializerRegistry(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::INetworkPacketSubSerializer_1<TData>*, uint8_t>* value);

  constexpr ::LiteNetLib::Utils::NetDataWriter*& __get__internalWriter();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::Utils::NetDataWriter*> const& __get__internalWriter() const;

  constexpr void __set__internalWriter(::LiteNetLib::Utils::NetDataWriter* value);

  /// @brief Method RegisterCallback addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TPacket> inline void RegisterCallback(TType packetType, ::System::Action_1<TPacket>* callback);

  /// @brief Method RegisterCallback addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TPacket> inline void RegisterCallback(TType packetType, ::System::Action_1<TPacket>* callback, ::System::Func_1<TPacket>* constructor);

  /// @brief Method RegisterCallback addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TPacket> inline void RegisterCallback(TType packetType, ::System::Action_2<TPacket, TData>* callback);

  /// @brief Method RegisterCallback addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TPacket> inline void RegisterCallback(TType packetType, ::System::Action_2<TPacket, TData>* callback, ::System::Func_1<TPacket>* constructor);

  /// @brief Method RegisterCallback addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TPacket> inline void RegisterCallback(TType packetType, ::System::Action_2<TPacket, TData>* callback, ::System::Func_2<TData, TPacket>* constructor);

  /// @brief Method UnregisterCallback addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TPacket> inline void UnregisterCallback(TType packetType);

  /// @brief Method RegisterSubSerializer addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void RegisterSubSerializer(TType packetType, ::GlobalNamespace::INetworkPacketSubSerializer_1<TData>* subSubSerializer);

  /// @brief Method UnregisterSubSerializer addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void UnregisterSubSerializer(TType packetType, ::GlobalNamespace::INetworkPacketSubSerializer_1<TData>* subSubSerializer);

  /// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void CopyFrom(::GlobalNamespace::NetworkPacketSerializer_2<TType, TData>* other);

  /// @brief Method SerializePacket addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void SerializePacket(::LiteNetLib::Utils::NetDataWriter* writer, ::LiteNetLib::Utils::INetSerializable* packet);

  /// @brief Method SerializePacketInternal addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void SerializePacketInternal(::LiteNetLib::Utils::NetDataWriter* externalWriter, ::LiteNetLib::Utils::INetSerializable* packet, bool prependLength);

  /// @brief Method ProcessAllPackets addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void ProcessAllPackets(::LiteNetLib::Utils::NetDataReader* reader, TData data);

  /// @brief Method ProcessPacket addr 0x0 size 0xffffffffffffffff virtual false final false
  inline bool ProcessPacket(::LiteNetLib::Utils::NetDataReader* reader, TData data);

  /// @brief Method ProcessPacketInternal addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void ProcessPacketInternal(::LiteNetLib::Utils::NetDataReader* reader, int32_t length, TData data);

  /// @brief Method TryGetPacketType addr 0x0 size 0xffffffffffffffff virtual false final false
  inline bool TryGetPacketType(::System::Type* type, ByRef<uint8_t> packetType, ByRef<::GlobalNamespace::INetworkPacketSubSerializer_1<TData>*> subSerializer);

  /// @brief Method HandlesType addr 0x0 size 0xffffffffffffffff virtual true final true
  inline bool HandlesType(::System::Type* type);

  /// @brief Method INetworkPacketSubSerializer<TData>.Serialize addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void INetworkPacketSubSerializer_TData__Serialize(::LiteNetLib::Utils::NetDataWriter* writer, ::LiteNetLib::Utils::INetSerializable* packet);

  /// @brief Method INetworkPacketSubSerializer<TData>.Deserialize addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void INetworkPacketSubSerializer_TData__Deserialize(::LiteNetLib::Utils::NetDataReader* reader, int32_t length, TData data);

  /// @brief Method Log addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void Log(::StringW message);

  static inline ::GlobalNamespace::NetworkPacketSerializer_2<TType, TData>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "NetworkPacketSerializer_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetworkPacketSerializer_2(NetworkPacketSerializer_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetworkPacketSerializer_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetworkPacketSerializer_2(NetworkPacketSerializer_2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetworkPacketSerializer_2();

public:
  /// @brief Field _messsageHandlers, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<uint8_t, ::System::Action_3<::LiteNetLib::Utils::NetDataReader*, int32_t, TData>*>* ____messsageHandlers;

  /// @brief Field _typeRegistry, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Type*, uint8_t>* ____typeRegistry;

  /// @brief Field _subSerializerRegistry, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::INetworkPacketSubSerializer_1<TData>*, uint8_t>* ____subSerializerRegistry;

  /// @brief Field _internalWriter, offset: 0x28, size: 0x8, def value: None
  ::LiteNetLib::Utils::NetDataWriter* ____internalWriter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::NetworkPacketSerializer_2, "", "NetworkPacketSerializer`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__NetworkPacketSerializer_2____c__6_1, "", "NetworkPacketSerializer`2/<>c__6`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass10_0, "", "NetworkPacketSerializer`2/<>c__DisplayClass10_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass4_0_1, "", "NetworkPacketSerializer`2/<>c__DisplayClass4_0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass5_0_1, "", "NetworkPacketSerializer`2/<>c__DisplayClass5_0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass7_0_1, "", "NetworkPacketSerializer`2/<>c__DisplayClass7_0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass8_0_1, "", "NetworkPacketSerializer`2/<>c__DisplayClass8_0`1");
