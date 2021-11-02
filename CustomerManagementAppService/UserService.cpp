#include "pch.h"
#include "UserService.h"
#if __has_include("UserService.g.cpp")
#include "UserService.g.cpp"
#endif

namespace winrt::CustomerManagementAppService::implementation
{
    winrt::CustomerManagementAppService::User UserService::GetUserByID(int32_t Id)
    {
        throw hresult_not_implemented();
    }
}
