#pragma once

#include "AuthUserResultVM.g.h"

namespace winrt::CustomerManagementAppService::implementation
{
    struct AuthUserResultVM : AuthUserResultVMT<AuthUserResultVM>
    {
        AuthUserResultVM() = default;

        bool IsSuccessful();
        void IsSuccessful(bool value);
        hstring Message();
        void Message(hstring const& value);
        winrt::CustomerManagementAppService::User UserInfo();
        void UserInfo(winrt::CustomerManagementAppService::User const& value);
    };
}

namespace winrt::CustomerManagementAppService::factory_implementation
{
    struct AuthUserResultVM : AuthUserResultVMT<AuthUserResultVM, implementation::AuthUserResultVM>
    {
    };
}
