//============================================================================
// Name        : loanPayment.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <ostream>
#include <string>
using namespace std;

int main() {
	string item;
	int c=0;
	double interest;
	double remainder;
	double newCost;
	double cost;
	double interestRatePerMonth = 0.015;
	double totalInterest = 0;
	cout << "What is your item?"<<endl;
	cin >> item;
	cout << "How much does it cost?"<<endl;
	cin >> cost;
	double monthlyPay = cost * 0.05;
	cout <<"your interest rate per month will be 1.5%, and your monthly payment will be "<< monthlyPay<<endl;

	        /*interest = (cost * interestRatePerMonth);
			totalInterest= totalInterest + interest;
			remainder = monthlyPay - interest;
			cost = cost - remainder;
			cout<<interest<<endl;
			cout<<totalInterest<<endl;
			cout<<remainder<<endl;
			cout<<cost<<endl;*/

	for(int i = 0; i<=c; i++){
	    interest = (cost * interestRatePerMonth);
	    cout<<"Interest: "<<interest<<endl;
		totalInterest= totalInterest + interest;
		remainder = monthlyPay - interest;
		cout<<"Remaining: "<<remainder<<endl;
		cost = cost - remainder;
		cout<<"still have a balance of: "<<cost<<endl;
		if(cost > 0){
			c++;
		}
	}
	cout<<"you paid off your debt in this many months "<<c<<endl;
	cout<<"you paid a total interest of $"<<totalInterest<<endl;
	return 0;
}
