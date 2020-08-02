//============================================================================
 //Project that calculates the price incease of an item in a peroid of time due to inflation
//============================================================================

#include <iostream>
#include <string>
using namespace std;

int main() {
	double costOfItem;
	int years;
	double rateOfInflation;
	double newCost;
	string item;
	cout << "what is the item you plan to purchase? ";
	cin >> item;
	cout << "How Much does a "<<item<<" cost?";
	cin >> costOfItem;
	cout << "what is the current rate of inflation(%)?";
	cin >> rateOfInflation;
	cout<<"In how many years do you plan to buy a " << item;
	cin >> years;
	double percentInflation = rateOfInflation / 100;
	cout << percentInflation<<endl;

	for(int i = 0; i<=years; i++){
		newCost = (costOfItem * percentInflation) + costOfItem;
		costOfItem = newCost;

	}
	cout << "The cost of a "<<item<<" will be $"<<newCost << " in "<<years<<" years";
	return 0;
}
