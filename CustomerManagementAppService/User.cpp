#include "pch.h"
#include "User.h"
#if __has_include("User.g.cpp")
#include "User.g.cpp"
#endif

namespace winrt::CustomerManagementAppService::implementation
{
    bool User::Authenticate(hstring const& username, hstring const& password, int64_t companyID, winrt::CustomerManagementAppService::User const& userInfo)
    {
        throw hresult_not_implemented();
    }
}
