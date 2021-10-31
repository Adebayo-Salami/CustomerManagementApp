#include "pch.h"
#include "User.h"

User::User()
{
	auto folderTask = create_task(_localFolder->CreateFolderAsync(folderName, Windows::Storage::CreationCollisionOption::FailIfExists));
	create_task(_localFolder->GetFolderAsync(folderName));
}

string User::GetUsername()
{
	return string();
}

bool User::RegisterUser(string const& username, string const& password, string const& company)
{
	return false;
}

User User::AuthenticateUser(string const& username, string const& password)
{
	return User();
}
