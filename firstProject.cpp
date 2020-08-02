//============================================================================
// Name        : firstProject.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
using namespace std;
int main()
{
	const double RATE = 6.9;
	double deposit;
	char answer;
	bool repeat;
do{
	cout << "Enter the amount of your deposit $";
	cin >> deposit;

	double newBalance;
	newBalance = deposit + deposit*(RATE/100);
	cout << "In one year, that deposit will grow to \n"
		 << "$" << newBalance << " an amount worth waiting for. \n";
	cout<<"would you like to try that again?(Y/N)";
	cin >> answer;
	if (answer == 'Y'){
		repeat = true;
	}else{
		repeat = false;
		cout << "GoodBye";
	}
}while(repeat == true);

	return 0;
}

