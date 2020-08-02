//============================================================================
// reads in scores and name of players
//outputs example, chooses the highest of the scores.
//gordan, 15
//============================================================================

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	string names;
	int scores;
	int highestScore;
	fstream inputStream;
	inputStream.open("scoresEX.txt");
	while(inputStream >> names){
		cout << names <<endl;
	}

	inputStream.close();
	
	
	
	return 0;
}
