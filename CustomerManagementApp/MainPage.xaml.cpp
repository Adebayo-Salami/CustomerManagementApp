//
// MainPage.xaml.cpp
// Implementation of the MainPage class.
//

#include "pch.h"
#include "MainPage.xaml.h"

using namespace Windows::UI::Popups;
using namespace CustomerManagementApp;
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

// The Blank Page item template is documented at https://go.microsoft.com/fwlink/?LinkId=402352&clcid=0x409

MainPage::MainPage()
{
	InitializeComponent();
}


void CustomerManagementApp::MainPage::Btn_AddCustomer(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	//auto isLoggedIn = user().Authenticate()
	MessageDialog mesageDialogue("C++ -- Customer Added Succesfully! -- ");
	mesageDialogue.ShowAsync();
}
