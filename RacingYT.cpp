#include <iostream>
#include <stdlib.h>

using namespace std;
int main()
{
	//char a = 0;
	int var =0;
	
	cout << "Cuàl canal?" << endl;
	cout << "1) Formula E" << endl;
	cout << "2) Autosport" << endl;
	cout << "3) Cambio de marcha" << endl;
	cout << "4) Chain Bear F1" << endl;
	cout << "5) Dakar" << endl;
	cout << "6) DTM" << endl;
	cout << "7) Efeuno" << endl;
	cout << "8) ELMS" << endl;
	cout << "9) FIA WRC" << endl;
	cout << "10) FIA WEC" << endl;
	cout << "11) Formula 1" << endl;
	cout << "12) FTotal" << endl;
	cout << "13) Formula Fons" << endl;
	cout << "14) La Q4" << endl;
	cout << "15) Motor.es" << endl;
	cout << "16) Indycar" << endl;
	cout << "17) SoyMotor" << endl;
	cout << "18) WTF1" << endl;	
		
	cout << endl;
	cin >> var;

	switch(var){
		case 1:
			cout << "Formula E" << endl;
			system("firefox https://www.youtube.com/channel/UC-DuRqsBQOEk_5o1q4Ze-Fg/videos");
		break;

		case 2:
			cout << "Autosport" << endl;
			system("firefox https://www.youtube.com/channel/UCxuksozHJD_f1w9nVa6UhAw/videos");
		break;	
		
		case 3:
                        cout << "Cambio de Marcha" << endl;
                        system("firefox https://www.youtube.com/channel/UCCPGz8pzhvalUiAAwyC_7zg/videos");
                break;

		case 4:
                        cout << "Chain Bear F1" << endl;
                        system("firefox https://www.youtube.com/channel/UC7u-Dg0jb7g9s7XjmtJrtpg/videos");
                break;

		case 5:
                        cout << "DAKAR" << endl;
                        system("firefox https://www.youtube.com/channel/UCJVKwvv58Xo3Rt4rF3NiL9w/videos");
                break;

		case 6:
                        cout << "DTM" << endl;
                        system("firefox https://www.youtube.com/channel/UCwKq447rYMVI5dAQWMmFnfg/videos");
                break;

		case 7:
                        cout << "Efeuno" << endl;
                        system("firefox https://www.youtube.com/channel/UC89aCe0fFyScFU-NegT2CFQ/videos");
                break;

		case 8:
                        cout << "ELMS" << endl;
                        system("firefox https://www.youtube.com/channel/UCU8C8RqGhqH4nhk4mlN1Vwg/videos");
                break;

		case 9:
                        cout << "FIA WRC" << endl;
                        system("firefox https://www.youtube.com/channel/UC5G6kTnHXDz0WIBC2VGBOqg/videos");
                break;

		case 10:
                        cout << "FIA WEC" << endl;
                        system("firefox https://www.youtube.com/channel/UCwU7U7PiarcJKLjDJTnANjw/videos");
                break;

		case 11:
                        cout << "Formula 1" << endl;
                        system("firefox https://www.youtube.com/channel/UCB_qr75-ydFVKSF9Dmo6izg/videos");
                break;

		case 12:
                        cout << "FTotal" << endl;
                        system("firefox https://www.youtube.com/channel/UC7mKjCP6ZePoGRKTfJQXdpA/videos");
                break;

		case 13:
                        cout << "Formula Fons" << endl;
                        system("firefox https://www.youtube.com/channel/UCx62tlKvRIQuBGb96DnDUrQ/videos");
                break;

		case 14:
                        cout << "La Q4" << endl;
                        system("firefox https://www.youtube.com/channel/UCUFtDvlfr6tPL_R2sNS3uHw/videos");
                break;

		case 15:
                        cout << "Motor.es" << endl;
                        system("firefox https://www.youtube.com/channel/UCu6xusAl5kDmJXc9Sbr928Q/videos");
                break;

		case 16:
                        cout << "Indycar" << endl;
                        system("firefox https://www.youtube.com/channel/UCy1F61QvUUQXAXi2Voa_fUw/videos");
                break;

		case 17:
                        cout << "Soy Motor" << endl;
                        system("firefox https://www.youtube.com/channel/UCriizUOvtsM4mhLw1KGVzvQ/videos");
                break;

		case 18:
                        cout << "WTF1" << endl;
                        system("firefox https://www.youtube.com/channel/UCDxm-FbK9nmZKqHI19j-DOw/videos");
                break;

		default:
                        cout << "ERROR" << endl;
                break;

	}
	

	return(0);
}
