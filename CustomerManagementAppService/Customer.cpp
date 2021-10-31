#include "pch.h"
#include "Customer.h"
#if __has_include("Customer.g.cpp")
#include "Customer.g.cpp"
#endif

namespace winrt::CustomerManagementAppService::implementation
{
    Customer::Customer(hstring const& email, hstring const& mobile, hstring const& fullname)
    {
        throw hresult_not_implemented();
    }
    void Customer::AddCustomer(winrt::CustomerManagementAppService::Customer const& customer)
    {
        throw hresult_not_implemented();
    }
}
