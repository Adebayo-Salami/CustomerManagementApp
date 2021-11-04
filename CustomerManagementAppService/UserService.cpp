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

    winrt::CustomerManagementAppService::AuthUserResultVM UserService::CreateUser(hstring const& username, hstring const& password, int64_t companyId)
    {
        vector<User> users{};
        ifstream UserDatabaseFile(userTable);
        string line;
        if (UserDatabaseFile.is_open()) {
            while (getline(UserDatabaseFile, line)) {
                User user{};
                int position;
                std::string outstr, token;
                std::vector<string> words{};
                while ((position = line.find(",")) != std::string::npos) {
                    token = line.substr(0, position);

                    //Remove the extra space from the front of the splitted string
                    words.push_back(token.erase(0, token.find_first_not_of(" ")));
                    line.erase(0, position + line.length());
                }

                users.push_back(user);
            }
        }



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
