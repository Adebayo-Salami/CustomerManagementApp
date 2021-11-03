#pragma once

#include "UserService.g.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

namespace winrt::CustomerManagementAppService::implementation
{
    struct UserService : UserServiceT<UserService>
    {
        UserService() = default;
        string userTable = "C:\\Users\\osalami\\Documents\\Applications\\CustomerManagementApp\\DatabaseFolder\\User.txt";

        winrt::CustomerManagementAppService::AuthUserResultVM GetUserByID(int32_t Id);
        winrt::CustomerManagementAppService::AuthUserResultVM AuthenticateUser(hstring const& username, hstring const& password, int64_t companyId);
        winrt::CustomerManagementAppService::AuthUserResultVM CreateUser(hstring const& username, hstring const& password, int64_t companyId);
        RPC_WSTR GenerateGuid();
    };
}

namespace winrt::CustomerManagementAppService::factory_implementation
{
    struct UserService : UserServiceT<UserService, implementation::UserService>
    {
    };
}
