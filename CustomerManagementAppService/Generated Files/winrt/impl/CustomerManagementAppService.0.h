// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.211028.7

#pragma once
#ifndef WINRT_CustomerManagementAppService_0_H
#define WINRT_CustomerManagementAppService_0_H
WINRT_EXPORT namespace winrt::CustomerManagementAppService
{
    struct IUser;
    struct IUserService;
    struct User;
    struct UserService;
}
namespace winrt::impl
{
    template <> struct category<winrt::CustomerManagementAppService::IUser>{ using type = interface_category; };
    template <> struct category<winrt::CustomerManagementAppService::IUserService>{ using type = interface_category; };
    template <> struct category<winrt::CustomerManagementAppService::User>{ using type = class_category; };
    template <> struct category<winrt::CustomerManagementAppService::UserService>{ using type = class_category; };
    template <> inline constexpr auto& name_v<winrt::CustomerManagementAppService::User> = L"CustomerManagementAppService.User";
    template <> inline constexpr auto& name_v<winrt::CustomerManagementAppService::UserService> = L"CustomerManagementAppService.UserService";
    template <> inline constexpr auto& name_v<winrt::CustomerManagementAppService::IUser> = L"CustomerManagementAppService.IUser";
    template <> inline constexpr auto& name_v<winrt::CustomerManagementAppService::IUserService> = L"CustomerManagementAppService.IUserService";
    template <> inline constexpr guid guid_v<winrt::CustomerManagementAppService::IUser>{ 0x906CDA73,0xB8E2,0x5593,{ 0xA2,0x4E,0xB3,0x5A,0xDD,0x27,0xE0,0xB3 } }; // 906CDA73-B8E2-5593-A24E-B35ADD27E0B3
    template <> inline constexpr guid guid_v<winrt::CustomerManagementAppService::IUserService>{ 0xC1859CB3,0x11FD,0x59C8,{ 0xAA,0xEA,0x0F,0xA4,0xC5,0x1A,0x66,0xA1 } }; // C1859CB3-11FD-59C8-AAEA-0FA4C51A66A1
    template <> struct default_interface<winrt::CustomerManagementAppService::User>{ using type = winrt::CustomerManagementAppService::IUser; };
    template <> struct default_interface<winrt::CustomerManagementAppService::UserService>{ using type = winrt::CustomerManagementAppService::IUserService; };
    template <> struct abi<winrt::CustomerManagementAppService::IUser>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Id(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Username(void**) noexcept = 0;
            virtual int32_t __stdcall put_Username(void*) noexcept = 0;
            virtual int32_t __stdcall get_Password(void**) noexcept = 0;
            virtual int32_t __stdcall put_Password(void*) noexcept = 0;
            virtual int32_t __stdcall get_CompanyID(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_CompanyID(int64_t) noexcept = 0;
        };
    };
    template <> struct abi<winrt::CustomerManagementAppService::IUserService>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetUserByID(int32_t, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_CustomerManagementAppService_IUser
    {
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) Id() const;
        WINRT_IMPL_AUTO(void) Id(int32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Username() const;
        WINRT_IMPL_AUTO(void) Username(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Password() const;
        WINRT_IMPL_AUTO(void) Password(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(int64_t) CompanyID() const;
        WINRT_IMPL_AUTO(void) CompanyID(int64_t value) const;
    };
    template <> struct consume<winrt::CustomerManagementAppService::IUser>
    {
        template <typename D> using type = consume_CustomerManagementAppService_IUser<D>;
    };
    template <typename D>
    struct consume_CustomerManagementAppService_IUserService
    {
        WINRT_IMPL_AUTO(winrt::CustomerManagementAppService::User) GetUserByID(int32_t Id) const;
    };
    template <> struct consume<winrt::CustomerManagementAppService::IUserService>
    {
        template <typename D> using type = consume_CustomerManagementAppService_IUserService<D>;
    };
}
#endif
