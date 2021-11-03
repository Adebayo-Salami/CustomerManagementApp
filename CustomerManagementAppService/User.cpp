﻿#include "pch.h"
#include "User.h"
#if __has_include("User.g.cpp")
#include "User.g.cpp"
#endif

namespace winrt::CustomerManagementAppService::implementation
{
    User::User(int32_t id, hstring const& username, hstring const& password, int64_t companyId) 
        : Id(id), Username(username), Password(password), CompanyId(companyId)
    {
        
    }

    int64_t User::GetId()
    {
        return Id;
    }
    hstring User::GetUsername()
    {
        return Username;
    }
    hstring User::GetPassword()
    {
        return Password;
    }
    int64_t User::GetCompanyId()
    {
        return CompanyId;
    }
}
