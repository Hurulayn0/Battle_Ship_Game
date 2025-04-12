#include <iostream>
#include <string>
using namespace std;
int main() {
	bool ships[4][4] = {
		{0,0,1,1},
		{0,0,0,0},
		{0,0,0,1},
		{0,1,0,0}
	};
	int hits = 0, numberofturns = 0,row,column;
	
	while (hits < 4) {
		cout << "Selecting cordinates\n";
		cout << "Choose a row number between 0 and 3:";
		cin >> row;
		cout << "Choose a column number between 0 and 3:";
		cin >> column;
		if (ships[row][column]) {   //eðer içindeki deðer 1 e eþit olursa true döner ve bu sütün çalýþýr
			ships[row][column] = 0; //geminin vurulduðunu bu gösteriyor
			hits++;
			cout << "You hit! " << (4 - hits) << "left\n\n";
		}
		else
			cout << "You missed\n\n";
		numberofturns++;
	
	}

	cout << "Victory!!\n";
	cout << "You won in" << numberofturns << "turns\n";
	return 0;
}