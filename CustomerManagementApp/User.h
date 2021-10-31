#pragma once

#include <string>

using namespace std;
using namespace concurrency;
using namespace Platform;
using namespace Windows::Storage;

class User
{
private:
	StorageFolder^ _localFolder = ApplicationData::Current->LocalFolder;
	String^ fileName = "Users.txt";
	String^ folderName = "DatabaseFolder";

	int Id;
	string Firstname;
	string Lastname;

public:
	User();
	string GetUsername();
	bool RegisterUser(string const& username, string const& password, string const& company);
	User AuthenticateUser(string const& username, string const& password);
};