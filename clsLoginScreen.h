#pragma once
#include"clsScreen.h"
#include "clsUser.h"
#include"clsMainScreen.h"
#include"Global.h"
#include "clsInputValidate.h"
#include"fstream"
class clsLoginScreen : protected clsScreen
{
private:

	


	static bool _Login() {

		int Attempts = 0;
		bool FaildLogin = false;

		do {
			
			if (FaildLogin) {
				Attempts++;
				cout << "\nYou have ("<< (3-Attempts) <<") Trails Left \n\n\n";
			}

			if (Attempts == 3) {
				cout << "\nYou'r losked after 3 trials";

				return false; // åÐí ãÇÊØáÚ ÈÓ ãä ÇááæÈ Òí Çá Break
				        // Èá ÊØáÚ ãä Úáì ãÓÊæì ÇáÏÇáå ßÇãáå 
			}
			
			string UserName, Password;

			cout << "Enter User Name : ";
			UserName = clsInputValidate::ReadString();

			cout << "Enter Password : ";
			Password = clsInputValidate::ReadString();


			CurrentUser = clsUser::Find(UserName , Password);

			FaildLogin = CurrentUser.IsEmpty();

		} while (FaildLogin);
		CurrentUser.RegisterLogIn();
		clsMainScreen::ShowMainMenue();

}

public:

	static bool ShowLoginScreen() {
		
		system("cls");
		_DrawScreenHeader("\t Login Screen");	
			return _Login();

		

	}



};

