#include "pch.h"
#include "Company.h"
#if __has_include("Company.g.cpp")
#include "Company.g.cpp"
#endif

namespace winrt::CustomerManagementAppService::implementation
{
    bool Company::AddCompany(hstring const& companyName, hstring const& companyLocation)
    {
        throw hresult_not_implemented();
    }
}
