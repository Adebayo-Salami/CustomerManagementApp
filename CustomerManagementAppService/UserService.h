#pragma once

#include "UserService.g.h"

//using namespace MySql::Data;

namespace winrt::CustomerManagementAppService::implementation
{
    struct UserService : UserServiceT<UserService>
    {
        UserService() = default;

        winrt::CustomerManagementAppService::AuthUserResultVM GetUserByID(int32_t Id);
        winrt::CustomerManagementAppService::AuthUserResultVM AuthenticateUser(hstring const& username, hstring const& password, int64_t companyId);
    };
}

namespace winrt::CustomerManagementAppService::factory_implementation
{
    struct UserService : UserServiceT<UserService, implementation::UserService>
    {
    };
}
