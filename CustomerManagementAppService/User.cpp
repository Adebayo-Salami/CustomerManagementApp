#include "pch.h"
#include "User.h"
#if __has_include("User.g.cpp")
#include "User.g.cpp"
#endif

namespace winrt::CustomerManagementAppService::implementation
{
    int32_t User::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void User::MyProperty(int32_t /*value*/)
    {
        throw hresult_not_implemented();
    }
}
