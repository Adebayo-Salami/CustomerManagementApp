#pragma once

#include "UserService.g.h"

namespace winrt::CustomerManagementAppService::implementation
{
    struct UserService : UserServiceT<UserService>
    {
        UserService() = default;

        winrt::CustomerManagementAppService::User GetUserByID(int32_t Id);
    };
}

namespace winrt::CustomerManagementAppService::factory_implementation
{
    struct UserService : UserServiceT<UserService, implementation::UserService>
    {
    };
}
