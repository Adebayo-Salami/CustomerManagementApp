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

    winrt::CustomerManagementAppService::AuthUserResultVM UserService::AuthenticateUser(hstring const& username, hstring const& password, hstring const& company)
    {
        throw hresult_not_implemented();
    }

    winrt::CustomerManagementAppService::AuthUserResultVM UserService::CreateUser(hstring const& username, hstring const& password, hstring const& company)
    {
        vector<User> users{};
        ifstream UserDatabaseFile(userTable);
        string line;
        int uniqueId = 0;
        if (UserDatabaseFile.is_open()) {
            while (getline(UserDatabaseFile, line)) {
                uniqueId++;
                User user{};
                int position;
                string token;
                vector<string> words{};
                int index = 0;
                char* pEnd;
                while ((position = line.find(",")) != std::string::npos) {
                    token = line.substr(0, position);
                    if (index == 0) {
                        char c[3];
                        strcpy_s(c, token.c_str());
                        user.SetId(strtoll(c, NULL, 0));
                    }
                    else if (index == 1)
                        user.SetUsername(to_hstring(token));
                    else if (index == 2)
                        user.SetPassword(to_hstring(token));
                    else if (index == 3) {
                        char c[3];
                        strcpy_s(c, token.c_str());
                        //user.SetCompany(strtoll(c, NULL, 0));
                    }

                    line.erase(0, position + line.length());
                }

                users.push_back(user);
            }
        }

        //users.push_back(User(++uniqueId, to_hstring(username), to_hstring(password), companyId));

        throw hresult_not_implemented();
    }

    RPC_WSTR UserService::GenerateGuid()
    {
        RPC_WSTR generatedId;
        UUID newId;
        auto createGuid = UuidCreate(&newId);
        if (createGuid == S_OK) {
            auto convert = UuidToString(&newId, &generatedId);
            if (convert == S_OK)
                return generatedId;
        }
        return NULL;
    }
}
