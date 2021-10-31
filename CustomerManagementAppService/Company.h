#pragma once

#include "Company.g.h"

namespace winrt::CustomerManagementAppService::implementation
{
    struct Company : CompanyT<Company>
    {
        Company() = default;

        bool AddCompany(hstring const& companyName, hstring const& companyLocation);
    };
}

namespace winrt::CustomerManagementAppService::factory_implementation
{
    struct Company : CompanyT<Company, implementation::Company>
    {
    };
}
