//
// RegisterPage.xaml.cpp
// Implementation of the RegisterPage class
//

#include "pch.h"
#include "RegisterPage.xaml.h"

using namespace CustomerManagementApp;
using namespace Windows::UI::Popups;
using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;
using namespace CustomerManagementAppService;

// The Blank Page item template is documented at https://go.microsoft.com/fwlink/?LinkId=234238

RegisterPage::RegisterPage()
{
	InitializeComponent();
}


void CustomerManagementApp::RegisterPage::RegisterUserAccount(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	UserService userService{};
	MessageDialog mesageDialogue("Account Creat6ed Succesfully, Kindly proceed with login.");
	auto createResp = userService.CreateUser(txtUsername->Text, txtPassword->Password->ToString(), txtCompany->Text);
	if (createResp->IsSuccessful) {
		mesageDialogue.ShowAsync();
	}
	else {
		mesageDialogue.Content = createResp->Message;
		mesageDialogue.ShowAsync();
	}
}
