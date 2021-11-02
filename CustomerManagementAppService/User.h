#pragma once

#include "User.g.h"

namespace winrt::CustomerManagementAppService::implementation
{
    struct User : UserT<User>
    {
        User() = default;

        int32_t MyProperty();
        void MyProperty(int32_t value);
    };
}

namespace winrt::CustomerManagementAppService::factory_implementation
{
    struct User : UserT<User, implementation::User>
    {
    };
}
