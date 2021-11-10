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
        hstring Company;

        //Accesible Functions
        User() : Id(0), Username(L""), Password(L""), Company(L"") {};
        User(int32_t id, hstring const& username, hstring const& password, hstring const& company);

        int64_t GetId();
        hstring GetUsername();
        hstring GetPassword();
        hstring GetCompany();
        void SetId(int64_t id);
        void SetUsername(hstring const& username);
        void SetPassword(hstring const& password);
        void SetCompany(hstring company);
    };
}

namespace winrt::CustomerManagementAppService::factory_implementation
{
    struct User : UserT<User, implementation::User>
    {
    };
}
