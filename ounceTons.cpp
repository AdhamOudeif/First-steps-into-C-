//============================================================================
/*A metric ton is 35,273.92 ounces. Write a program that
will read the weight of a package of breakfast cereal in
ounces and output the weight in metric tons as well
as the number of boxes needed to yield one metric
ton of cereal.*/
//============================================================================

#include <iostream>
using namespace std;


int main() {
	double cerealWeight;
	double TonOunce = 35273.92;
	double weight;
	cout<<"What is the weight of your cereal package? (in ounces)";
	cin >> cerealWeight;
	weight = cerealWeight/TonOunce;
	cout<<"Your package in Tons is = " << weight;
	double amount = TonOunce / cerealWeight;
	cout<<"\n you need "<<amount<<" boxes of cereal to make one ton";
	
	//Practice switch example
	char day;
	cout<<"\n What day of the week is it?(M-F)";
	cin>>day;
	switch (day)
	{
	case 'M':
		cout<<"4 DAYS TILL FRIDAY";
		break;
	case 'T':
		cout<<"3 DAYS TILL FRIDAY";
		break;
	case 'W':
		cout<<"2 DAYS TILL FRIDAY";
		break;
	case 'g':
		cout<<"Tomorrow IS FRIDAY";
		break;
	case 'F':
		cout<<"ITS FRIGGA DAY";
		break;
	default:
		cout << "Summ aint right cheif";
	}
	return 0;
}
