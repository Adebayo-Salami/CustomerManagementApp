#include "pch.h"
#include "AuthUserResultVM.h"
#if __has_include("AuthUserResultVM.g.cpp")
#include "AuthUserResultVM.g.cpp"
#endif

namespace winrt::CustomerManagementAppService::implementation
{
    bool AuthUserResultVM::IsSuccessful()
    {
        throw hresult_not_implemented();
    }
    void AuthUserResultVM::IsSuccessful(bool value)
    {
        throw hresult_not_implemented();
    }
    hstring AuthUserResultVM::Message()
    {
        throw hresult_not_implemented();
    }
    void AuthUserResultVM::Message(hstring const& value)
    {
        throw hresult_not_implemented();
    }
    winrt::CustomerManagementAppService::User AuthUserResultVM::UserInfo()
    {
        throw hresult_not_implemented();
    }
    void AuthUserResultVM::UserInfo(winrt::CustomerManagementAppService::User const& value)
    {
        throw hresult_not_implemented();
    }
}
