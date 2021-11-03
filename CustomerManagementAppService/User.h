#pragma once

#include "User.g.h"

using namespace std;

namespace winrt::CustomerManagementAppService::implementation
{
    struct User : UserT<User>
    {
        //Private
        long Id;
        hstring Username;
        hstring Password;
        long CompanyId;

        //Accesible Functions
        User() : Id(0), Username(L""), Password(L""), CompanyId(0) {};
        User(int32_t id, hstring const& username, hstring const& password, int64_t companyId);

        int64_t GetId();
        hstring GetUsername();
        hstring GetPassword();
        int64_t GetCompanyId();
    };
}

namespace winrt::CustomerManagementAppService::factory_implementation
{
    struct User : UserT<User, implementation::User>
    {
    };
}
