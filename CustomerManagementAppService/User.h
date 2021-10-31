#pragma once

#include "User.g.h"

namespace winrt::CustomerManagementAppService::implementation
{
    struct User : UserT<User>
    {
        User() = default;

        bool Authenticate(hstring const& username, hstring const& password, int64_t companyID, winrt::CustomerManagementAppService::User const& userInfo);
    };
}

namespace winrt::CustomerManagementAppService::factory_implementation
{
    struct User : UserT<User, implementation::User>
    {
    };
}
