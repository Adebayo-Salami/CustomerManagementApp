#include "pch.h"
#include "UserService.h"
#if __has_include("UserService.g.cpp")
#include "UserService.g.cpp"
#endif

namespace winrt::CustomerManagementAppService::implementation
{
    winrt::CustomerManagementAppService::AuthUserResultVM UserService::GetUserByID(int32_t Id)
    {
        throw hresult_not_implemented();
    }
    winrt::CustomerManagementAppService::AuthUserResultVM UserService::AuthenticateUser(hstring const& username, hstring const& password, int64_t companyId)
    {
        throw hresult_not_implemented();
    }
}
