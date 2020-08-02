//============================================================================
//Excerise 7 from ch.1
//============================================================================

#include <iostream>
using namespace std;
/*
 *  Write a complete C++ program that reads two
	whole numbers into two variables of type
	int and then outputs both the whole number
	part and the remainder when the first number
	is divided by the second. This can be done
	using the operators / and %.
	*/

int main() {
	int x;
	int y;
	cout<<"Enter Number 1: ";
	cin >> x;
	cout<<"Enter Number 2: ";
	cin >> y;
	int number = (x/y);
	double remainder = (x%y);
	cout << "your answer is " << number;
	cout<< " R: " << remainder;

	double ans = static_cast<double>(y);
	double ansr = (x/ans);

	cout<<"or you can say this " << ansr;
	cout<<"thank you for listening"<<endl
		<<"goodbye"<<endl;

	return 0;
}


