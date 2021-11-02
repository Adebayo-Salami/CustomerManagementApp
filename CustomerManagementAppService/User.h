#pragma once

#include "User.g.h"

namespace winrt::CustomerManagementAppService::implementation
{
    struct User : UserT<User>
    {
        User() = default;

        int32_t Id();
        void Id(int32_t value);
        hstring Username();
        void Username(hstring const& value);
        hstring Password();
        void Password(hstring const& value);
        int64_t CompanyID();
        void CompanyID(int64_t value);
    };
}

namespace winrt::CustomerManagementAppService::factory_implementation
{
    struct User : UserT<User, implementation::User>
    {
    };
}
