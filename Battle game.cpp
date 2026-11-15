#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
	char ships[5][5] = { {'~','~','S','~','~'},
		{'S','~','~','~','~'},
		{'~','~','~','S','~'},
		{'~','S','~','~','~'},
		{'~','~','~','~','S'} };
	int i;
	int row, col;
	int totalShips = 5;
	int hits = 0;
	for(i=0;i<6;i++)
	{ 
		cout << "Enter row and column to fire (0-4):";
		cin >> row >> col;
		if (row < 0 || row > 4 || col < 0 || col > 4)
		{
			cout << "Invalid coordinates. Please enter values between 0 and 4." << endl;
			i--;
			continue;
		}
				if (ships[row][col] == 'S')
		{
			cout << "Hit!" << endl;
			ships[row][col] = 'H'; 
			hits++;
		}
		else if (ships[row][col] == '~')
		{
			cout << "Miss!" << endl;
			ships[row][col] = 'M'; 
		}
		else
		{
		    cout << "You already fired at this location. Try again." << endl;
			i--;
			continue;
		}
		if (totalShips == hits)
		{
			cout << "Congratulations! You sunk all the ships!" << endl;
			break;
		}

	}
	for (int i = 0;i < 5;i++)
	{
		for (int j = 0;j < 5;j++)
		{
			cout << setw(2) << ships[i][j] << " ";
		}
		cout << endl;
	}
	if (i == 5)
	{
		cout << "Game over! You have used all your shots." << endl;
	}
	system("pause");
}