#pragma once

#include "Customer.g.h"

namespace winrt::CustomerManagementAppService::implementation
{
    struct Customer : CustomerT<Customer>
    {
        Customer() = default;

        Customer(hstring const& email, hstring const& mobile, hstring const& fullname);
        void AddCustomer(winrt::CustomerManagementAppService::Customer const& customer);
    };
}

namespace winrt::CustomerManagementAppService::factory_implementation
{
    struct Customer : CustomerT<Customer, implementation::Customer>
    {
    };
}
