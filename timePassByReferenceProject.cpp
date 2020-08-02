/*
Write a program that converts from 24-hour notation to 12-hour notation. For
example, it should convert 14:25 to 2:25 P.M. The input is given as two integers.
There should be at least three functions: one for input, one to do the conversion,
and one for output. Record the A.M./P.M. information as a value of
type char, ’A’ for A.M. and ’P’ for P.M. Thus, the function for doing the conversions
will have a call-by-reference formal parameter of type char to record
whether it is A.M. or P.M. (The function will have other parameters as well.)
Include a loop that lets the user repeat this computation for new input values
again and again until the user says he or she wants to end the program.
*/

#include <iostream>

using namespace std;

//function prototypes
void input(int&, int&, char&);
void convert(int&, int&, char&);
void output(int&, int&, char&);

int main()
{
	int hours
	int minutes;
	char ampm; //variable char
	char again; //loop variable

	//do-while loop, runs program once then repeats based on users choice
	do
	{

		input(hours, minutes, ampm);
		convert(hours, minutes, ampm);
		output(hours, minutes, ampm);

		cout << endl << "Enter Y to run again, any other key to exit: ";
		cin >> again;
	}
	while(again == 'y' || again == 'Y');

	return 0;
}

void input(int& hours, int& minutes, char& ampm)
{
	//loop to ensure valid input
	do
	{
		cout << "Enter hours: ";
		cin >> hours;
		if(hours > 23) cout << "Please enter a value between 0 and 23" << endl;
	}
	while(hours > 23);

	//loop to ensure valid input
	do
	{
		cout << "Enter minutes: ";
		cin >> minutes;
		if(minutes > 59) cout << "Please enter a value between 0 and 59" << endl;
	}
	while(minutes > 59);
}

void convert(int& hours, int& minutes, char& ampm)
{
	//checks for AM/PM
	if(hours > 12)
	{
		hours = hours - 12;
		ampm = 'p';
	}
	else if(hours == 12) ampm = 'p';
	else ampm = 'a';
}

void output(int& hours, int& minutes, char& ampm)
{
	if(ampm == 'p')
	{
		if(minutes < 10) cout << hours << ":0" << minutes << " P.M."; //adds leading 0 if minutes is 1-9
		else cout << hours << ":" << minutes << " P.M.";
	}
	else
	{
		if(minutes < 10) cout << hours << ":0" << minutes << " A.M."; //adds leading 0 if minutes is 1-9
		else cout << hours << ":" << minutes << " A.M.";
	}
}
