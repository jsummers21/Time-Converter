/*
Name: Jared Summers
Program: Time Converter
Desc: converts 12 hour time to 24 hour and 24 to 12 hour time
*/

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

void Choice(int intTimeChoice){
	if (intTimeChoice == 1) {
		int int24Hour;
		int int24Min;
		
		do {
			cout << "Type the Hour:" << endl;
			cin >> int24Hour;
		} while (int24Hour > 24);

		do {
			cout << "Type the Minutes:" << endl;
			cin >> int24Min;
		} while (int24Min > 59);


		if (int24Hour <= 12) {
			if (int24Min > 9) {
				cout << "Here is the Time: " << int24Hour << ":" << int24Min << " AM" << endl;
			}
			else if (int24Min < 10) {
				cout << "Here is the Time: " << int24Hour << ":0" << int24Min << " AM" << endl;
			}
		}
		else if (int24Hour > 12){
			int24Hour = (int24Hour - 12);
			if (int24Min > 9) {
				cout << "Here is the Time: " << int24Hour << ":" << int24Min << " PM" << endl;
			}
			else if (int24Min < 10) {
				cout << "Here is the Time: " << int24Hour << ":0" << int24Min << " PM" << endl;
			}
		}
	}



	else if (intTimeChoice == 2) {
		int int12Hour;
		int int12Min;
		char charAMPM = ('A','P');

		do {
			cout << "Type the Hour:" << endl;
			cin >> int12Hour;
		} while (int12Hour > 12);

		do {
			cout << "Type the Minutes:" << endl;
			cin >> int12Min;
		} while (int12Min > 59);

		do {
			cout << "Is it AM (A) or PM (P)?" << endl;
			cin >> charAMPM;
		} while ((charAMPM != 'A') && (charAMPM != 'P'));


		if(charAMPM == 'A'){
			if (int12Min > 9) {
				cout << "Here is the Time: " << int12Hour << ":" << int12Min << endl;
			}
			else if (int12Min < 10) {
				cout << "Here is the Time: " << int12Hour << ":0" << int12Min << endl;
			}
		}

		else if (charAMPM == 'P') {

			
			if (int12Min > 9) {
				cout << "Here is the Time: " << (int12Hour + 12) << ":" << int12Min << endl;
			}
			else if (int12Min < 10) {
				cout << "Here is the Time: " << (int12Hour + 12) << ":0" << int12Min << endl;
			}
		}
	}
}

int main()
{
	int intTimeChoice;
	do {
		cout << "Welcome to the Time Converter!" << endl << "Would you like to convert from 24 hour or 12 hour time?(1 for 24, 2 for 12)" << endl << "1) 24 Hour Time"
			<< endl << "2) 12 Hour Time" << endl;
		cin >> intTimeChoice;
	} while ((intTimeChoice != 1) && (intTimeChoice != 2));
	Choice(intTimeChoice);


	return 0;
}

