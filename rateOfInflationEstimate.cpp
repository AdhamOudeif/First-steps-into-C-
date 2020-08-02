//============================================================================
// Name        : rateOfInflationEstimate.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
double rateOfInflation (double x, double y);
double estimatePriceIncrease (double ROI, double modernPrice,double years);
int main() {
	double modernPrice;
	double oldPrice;
	double years;
	char answer = 'y';
	do{
	cout << "Welcome to the Rate of Inflation calculator" << endl;
	cout <<" What is the price of a gallon of standard oil today";
	cin >> modernPrice;
	cout <<"what was the price of a gallon of standard oil a year ago?";
	cin >> oldPrice;
	cout << "The rate of inflation is " << rateOfInflation(modernPrice,oldPrice) <<  "%";
	cout<<"Lets predict the price in x amount of years. you choose how many:"<<endl;
	cin >> years;
	cout<<" price in " << years << "years will be: " << estimatePriceIncrease(rateOfInflation,modernPrice,years)<<"";
	cout << "would you like to do another calculation?(y/n)";
	cin >> answer;
	}while(answer == 'y');
	cout<<"Goodbye.";
	return 0;
}
double rateOfInflation (double x, double y){
	double ROI = ((x-y)/y) * 100;
	return ROI;
}
double estimatePriceIncrease (double ROI, double modernPrice,double years){
	double x = (ROI/100)*modernPrice;
	double y = x+modernPrice;
	for(double i = 0; i<=years; i++){
		y = x+modernPrice;
	}
	return y;

}

