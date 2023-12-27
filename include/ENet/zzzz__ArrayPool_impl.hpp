#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "ENet/zzzz__ArrayPool_def.hpp"
//  Writing Method size for method: ::ENet::ArrayPool.GetByteBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)()>(&::ENet::ArrayPool::GetByteBuffer)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x21ef5f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ENet::ArrayPool*>::get(), "GetByteBuffer",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::ArrayPool.GetPointerBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<void*, ::Array<void*>*> (*)()>(&::ENet::ArrayPool::GetPointerBuffer)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x21ef68c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ENet::ArrayPool*>::get(), "GetPointerBuffer",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline void ENet::ArrayPool::setStaticF_byteBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "byteBuffer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ENet::ArrayPool*>::get>(
      std::forward<::ArrayW<uint8_t, ::Array<uint8_t>*>>(value));
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ENet::ArrayPool::getStaticF_byteBuffer() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "byteBuffer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ENet::ArrayPool*>::get>();
}
inline void ENet::ArrayPool::setStaticF_pointerBuffer(::ArrayW<void*, ::Array<void*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<void*, ::Array<void*>*>, "pointerBuffer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ENet::ArrayPool*>::get>(
      std::forward<::ArrayW<void*, ::Array<void*>*>>(value));
}
inline ::ArrayW<void*, ::Array<void*>*> ENet::ArrayPool::getStaticF_pointerBuffer() {
  return ::cordl_internals::getStaticField<::ArrayW<void*, ::Array<void*>*>, "pointerBuffer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ENet::ArrayPool*>::get>();
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ENet::ArrayPool::GetByteBuffer() {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ENet::ArrayPool*>::get(), "GetByteBuffer", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method);
}
inline ::ArrayW<void*, ::Array<void*>*> ENet::ArrayPool::GetPointerBuffer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ENet::ArrayPool*>::get(), "GetPointerBuffer",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<void*, ::Array<void*>*>, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::ENet::ArrayPool::ArrayPool() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
