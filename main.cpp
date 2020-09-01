/* This program is designed to learn more about data types and 
   facilitate the use of the IDE's debugging tools.
   Original code by Dr. Jan Pearce, Berea College */

#include <iostream>
using namespace std;

int main(){

	int userval = 500, noextra;	
	double finddigit, asiival;
	char digit, stopme;

	cout << "WELCOME TO DEBUGME! Your help is needed to make this program work correctly!\n" << endl;
	cout << "This program is designed to print the digits of a positive integer in reverse order." << endl;
	cout << "But, it sometimes fails and needs your help debugging!" << endl;
	cout << "\nEnter a negative number to end. " << endl;
	while (userval > 0) {

		cout << "To continue, please enter a positive number: ";
		cin >> userval;
		noextra = userval; //Implict "cast" from double that truncates userval if entered as double

		while (noextra > 0) {
			finddigit = noextra / 10.0;					//double 
			noextra = noextra / 10;						//int
			asiival = (finddigit - noextra) * 10 + 48;	//converts digit to ascii

			digit = asiival;							//converts to an integer
			cout << "digit: " << digit << endl;
		}
	}
	cout << "\nProgram complete. Close console.";
	cin >> stopme;
	return 0;
}
