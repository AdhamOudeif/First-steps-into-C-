//============================================================================
/*An employee is paid at a rate of $16.78 per hour for
 regular hours worked in a week. Any hours over that
 are paid at the overtime rate of one and one-half times
 that. From the worker’s gross pay, 6% is withheld for
 Social Security tax, 14% is withheld for federal income tax,
 5% is withheld for state income tax, and $10 per week is
 withheld for union dues. If the worker has three or more
 dependents, then an additional $35 is withheld to cover
 the extra cost of health insurance beyond what the
 employer pays. Write a program that will read in the
 number of hours worked in a week and the number of
 dependents as input and that will then output the worker’s
 gross pay, each withholding amount, and the net take-home
 pay for the week.*/
//============================================================================

#include <iostream>
using namespace std;

int main() {
	double payRate = 16.78;
	double hours;
	double grossPay;
	double netPay;
	int dependents;
	int Union = 10;
	int dep;
	cout << "Your hourly pay rate is $" <<payRate<<endl
			<<"How many hours did you work this week?";
	cin >> hours;
	cout << "How many dependents do you have?";
		cin >> dependents;
	grossPay = hours * payRate;
	double SS = (0.06 * grossPay);
	double fedTax = (0.14 * grossPay);
	double incomeTax = ( 0.05 * grossPay);
	if(dependents>=3){
			dep = 35;
		}else{
			dep = 0;
		}
	//dep = (dependents>=3) ? 35 : 0;
	netPay = grossPay - (SS + fedTax + incomeTax + Union + dep);



	cout<<"Gross Pay: $"<<grossPay<<endl;
	cout<<"Social Security: $"<<SS<<endl;
	cout<<"Income Tax: $"<<incomeTax<<endl;
	cout<<"Federal Tax: $"<<fedTax<<endl;
	cout<<"Union: $"<<Union<<endl;
	cout<<"Dependents: "<<dep<<endl;
	cout<<"Total withheld: - $"<<(SS + fedTax + incomeTax + Union + dep)<<endl;
	cout<<"Net Pay: $" << netPay;



	return 0;
}
