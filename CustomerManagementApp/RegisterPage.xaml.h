//
// RegisterPage.xaml.h
// Declaration of the RegisterPage class
//

#pragma once

#include "RegisterPage.g.h"

namespace CustomerManagementApp
{
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>
	[Windows::Foundation::Metadata::WebHostHidden]
	public ref class RegisterPage sealed
	{
	public:
		RegisterPage();
	private:
		void RegisterUserAccount(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
	};
}
