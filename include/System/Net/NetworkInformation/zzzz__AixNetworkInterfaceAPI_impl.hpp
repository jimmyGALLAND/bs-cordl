#pragma once
#include "System/Net/NetworkInformation/zzzz__UnixNetworkInterfaceAPI_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__AixNetworkInterfaceAPI_def.hpp"
#include "System/Net/NetworkInformation/zzzz__AixAddressFamily_def.hpp"
#include "System/Net/NetworkInformation/AixStructs/zzzz__ifreq_flags_def.hpp"
#include "System/Net/NetworkInformation/AixStructs/zzzz__ifconf_def.hpp"
#include "System/Net/NetworkInformation/AixStructs/zzzz__ifreq_mtu_def.hpp"
#include "System/Net/NetworkInformation/zzzz__NetworkInterface_def.hpp"
#include "System/Net/NetworkInformation/zzzz__AixIoctlRequest_def.hpp"
//  Writing Method size for method: ::System::Net::NetworkInformation::AixNetworkInterfaceAPI.socket
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::Net::NetworkInformation::AixAddressFamily, int32_t, int32_t)>(
    &::System::Net::NetworkInformation::AixNetworkInterfaceAPI::socket)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x29ec3a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::AixNetworkInterfaceAPI*>::get(), "socket", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::NetworkInformation::AixAddressFamily>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::AixNetworkInterfaceAPI.close
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::System::Net::NetworkInformation::AixNetworkInterfaceAPI::close)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x29ec448;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::AixNetworkInterfaceAPI*>::get(), "close",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::AixNetworkInterfaceAPI.ioctl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t, ::System::Net::NetworkInformation::AixIoctlRequest, ByRef<int32_t>)>(
    &::System::Net::NetworkInformation::AixNetworkInterfaceAPI::ioctl)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x29ec4c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::AixNetworkInterfaceAPI*>::get(), "ioctl", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::NetworkInformation::AixIoctlRequest>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::AixNetworkInterfaceAPI.ioctl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(
    int32_t, ::System::Net::NetworkInformation::AixIoctlRequest, ByRef<::System::Net::NetworkInformation::AixStructs::ifconf>)>(&::System::Net::NetworkInformation::AixNetworkInterfaceAPI::ioctl)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x29ec560;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::AixNetworkInterfaceAPI*>::get(), "ioctl", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::NetworkInformation::AixIoctlRequest>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Net::NetworkInformation::AixStructs::ifconf>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::AixNetworkInterfaceAPI.ioctl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(int32_t, ::System::Net::NetworkInformation::AixIoctlRequest, ByRef<::System::Net::NetworkInformation::AixStructs::ifreq_flags>)>(
        &::System::Net::NetworkInformation::AixNetworkInterfaceAPI::ioctl)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x29ec600;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::AixNetworkInterfaceAPI*>::get(), "ioctl", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::NetworkInformation::AixIoctlRequest>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Net::NetworkInformation::AixStructs::ifreq_flags>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::AixNetworkInterfaceAPI.ioctl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(
    int32_t, ::System::Net::NetworkInformation::AixIoctlRequest, ByRef<::System::Net::NetworkInformation::AixStructs::ifreq_mtu>)>(&::System::Net::NetworkInformation::AixNetworkInterfaceAPI::ioctl)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x29ec6a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::AixNetworkInterfaceAPI*>::get(), "ioctl", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::NetworkInformation::AixIoctlRequest>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Net::NetworkInformation::AixStructs::ifreq_mtu>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::AixNetworkInterfaceAPI.ByteArrayCopy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::Ptr<uint8_t>, ::cordl_internals::Ptr<uint8_t>, int32_t)>(
    &::System::Net::NetworkInformation::AixNetworkInterfaceAPI::ByteArrayCopy)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x29ec740;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::AixNetworkInterfaceAPI*>::get(), "ByteArrayCopy", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::AixNetworkInterfaceAPI.GetAllNetworkInterfaces
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::ArrayW<::System::Net::NetworkInformation::NetworkInterface*, ::Array<::System::Net::NetworkInformation::NetworkInterface*>*> (::System::Net::NetworkInformation::AixNetworkInterfaceAPI::*)()>(
    &::System::Net::NetworkInformation::AixNetworkInterfaceAPI::GetAllNetworkInterfaces)> {
  constexpr static std::size_t size = 0xe8c;
  constexpr static std::size_t addrs = 0x29ec75c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::AixNetworkInterfaceAPI*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::AixNetworkInterfaceAPI*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::AixNetworkInterfaceAPI._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::NetworkInformation::AixNetworkInterfaceAPI::*)()>(
    &::System::Net::NetworkInformation::AixNetworkInterfaceAPI::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29ed854;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::AixNetworkInterfaceAPI*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline int32_t System::Net::NetworkInformation::AixNetworkInterfaceAPI::socket(::System::Net::NetworkInformation::AixAddressFamily family, int32_t type, int32_t protocol) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::AixNetworkInterfaceAPI*>::get(), "socket", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::NetworkInformation::AixAddressFamily>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, family, type, protocol);
}
inline int32_t System::Net::NetworkInformation::AixNetworkInterfaceAPI::close(int32_t fd) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::AixNetworkInterfaceAPI*>::get(), "close",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, fd);
}
inline int32_t System::Net::NetworkInformation::AixNetworkInterfaceAPI::ioctl(int32_t fd, ::System::Net::NetworkInformation::AixIoctlRequest request, ByRef<int32_t> arg) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::AixNetworkInterfaceAPI*>::get(), "ioctl", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::NetworkInformation::AixIoctlRequest>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, fd, request, arg);
}
inline int32_t System::Net::NetworkInformation::AixNetworkInterfaceAPI::ioctl(int32_t fd, ::System::Net::NetworkInformation::AixIoctlRequest request,
                                                                              ByRef<::System::Net::NetworkInformation::AixStructs::ifconf> arg) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::AixNetworkInterfaceAPI*>::get(), "ioctl", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::NetworkInformation::AixIoctlRequest>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Net::NetworkInformation::AixStructs::ifconf>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, fd, request, arg);
}
inline int32_t System::Net::NetworkInformation::AixNetworkInterfaceAPI::ioctl(int32_t fd, ::System::Net::NetworkInformation::AixIoctlRequest request,
                                                                              ByRef<::System::Net::NetworkInformation::AixStructs::ifreq_flags> arg) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::AixNetworkInterfaceAPI*>::get(), "ioctl", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::NetworkInformation::AixIoctlRequest>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Net::NetworkInformation::AixStructs::ifreq_flags>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, fd, request, arg);
}
inline int32_t System::Net::NetworkInformation::AixNetworkInterfaceAPI::ioctl(int32_t fd, ::System::Net::NetworkInformation::AixIoctlRequest request,
                                                                              ByRef<::System::Net::NetworkInformation::AixStructs::ifreq_mtu> arg) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::AixNetworkInterfaceAPI*>::get(), "ioctl", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::NetworkInformation::AixIoctlRequest>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Net::NetworkInformation::AixStructs::ifreq_mtu>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, fd, request, arg);
}
inline void System::Net::NetworkInformation::AixNetworkInterfaceAPI::ByteArrayCopy(::cordl_internals::Ptr<uint8_t> dst, ::cordl_internals::Ptr<uint8_t> src, int32_t elements) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::AixNetworkInterfaceAPI*>::get(), "ByteArrayCopy", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, dst, src, elements);
}
inline ::ArrayW<::System::Net::NetworkInformation::NetworkInterface*, ::Array<::System::Net::NetworkInformation::NetworkInterface*>*>
System::Net::NetworkInformation::AixNetworkInterfaceAPI::GetAllNetworkInterfaces() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::AixNetworkInterfaceAPI*>::get(),
                                                                             "GetAllNetworkInterfaces", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Net::NetworkInformation::NetworkInterface*, ::Array<::System::Net::NetworkInformation::NetworkInterface*>*>, false>(this,
                                                                                                                                                                                    ___internal_method);
}
inline ::System::Net::NetworkInformation::AixNetworkInterfaceAPI* System::Net::NetworkInformation::AixNetworkInterfaceAPI::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::NetworkInformation::AixNetworkInterfaceAPI*>());
}
inline void System::Net::NetworkInformation::AixNetworkInterfaceAPI::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::AixNetworkInterfaceAPI*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::AixNetworkInterfaceAPI::AixNetworkInterfaceAPI() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
