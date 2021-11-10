#include "pch.h"
#include "User.h"
#if __has_include("User.g.cpp")
#include "User.g.cpp"
#endif

namespace winrt::CustomerManagementAppService::implementation
{
    User::User(int32_t id, hstring const& username, hstring const& password, hstring const& company)
        : Id(id), Username(username), Password(password), Company(company)
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

    hstring User::GetCompany()
    {
        return Company;
    }

    void User::SetId(int64_t id)
    {
        Id = id;
    }

    void User::SetUsername(hstring const& username)
    {
        Username = username;
    }

    void User::SetPassword(hstring const& password)
    {
        Password = password;
    }

    void User::SetCompany(hstring company)
    {
        Company = company;
    }
}
