#include<iostream>
using namespace std;
int main()
{
	int abc[9] = { 0,1,2,3,4,5,6,7,8 }, d, t, i, c = 0;
	char val[9], player;
	int x;

	cout << "NAME: HASSAN JAMSHAID" << endl;
	cout << "Roll# : L1F22BSCS0422" << endl;
	cout << "INTRODUCTION TO COMPUTING" << endl;
	cout << "--------------------------------------PROJECT-1-------------------------------------------------" << endl;


	cout << "\t   Tic Tac Toe\t" << endl;
	cout << "\tFor Two Players\t" << endl;

	cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
	cout << endl;
	for (i = 0; i < 9; i++)
	{
		val[i] = ' ';
	}
	for (int s = 0; s < 1; s++)
	{
		cout << "     |     |     " << endl;
		cout << "  " << abc[0] << "  |  " << abc[1] << "  |  " << abc[2] << endl;

		cout << "_____|_____|_____" << endl;
		cout << "     |     |     " << endl;

		cout << "  " << abc[3] << "  |  " << abc[4] << "  |  " << abc[5] << endl;

		cout << "_____|_____|_____" << endl;
		cout << "     |     |     " << endl;

		cout << "  " << abc[6] << "  |  " << abc[7] << "  |  " << abc[8] << endl;

		cout << "     |     |     " << endl << endl;
		break;

	}


	for (t = 1; t <= 9; t++)
	{
		c++;
		if (t % 2 != 0)
		{

			cout << "Turn of Player 1(X):" << endl;
			player = 'X';
		}
		else
		{
			cout << endl << "Turn of Player 2 (0):" << endl;
			player = 'O';
		}


		cout << "Enter Value:";
		cin >> i;

		for (d = 0; d <= 1; d++)
		{
			if (abc[d] == i)
			{

				cout << " value has been entered before : " << endl;
			}
			else
			{
				cout << "Enter value again:";
				cin >> i;
				abc[d] = i;
			}
		}
		abc[c] = i;
		val[i] = player;

		for (x = 0; x < 9; x++)
		{
			if (x == 2 || x == 5 || x == 8)
			{
				cout << val[x] << endl;
				cout << "____________" << endl;
			}
			else
			{
				if (i == x)
				{
					cout << val[x] << "|";
				}
				else
				{
					cout << val[x] << "|";
				}
			}
		}
		if ((val[0] == val[1] && val[1] == val[2] && (val[0] == 'X' || val[0] == 'O'))
			|| (val[3] == val[4] && val[4] == val[5] && (val[3] == 'X' || val[3] == 'O'))
			|| (val[6] == val[7] && val[7] == val[8] && (val[6] == 'X' || val[6] == 'O'))
			|| (val[0] == val[3] && val[3] == val[6] && (val[0] == 'X' || val[0] == 'O'))
			|| (val[1] == val[4] && val[4] == val[7] && (val[1] == 'X' || val[1] == 'O'))
			|| (val[2] == val[5] && val[5] == val[8] && (val[2] == 'X' || val[2] == 'O'))
			|| (val[0] == val[4] && val[4] == val[8] && (val[0] == 'X' || val[0] == 'O'))
			|| (val[2] == val[4] && val[4] == val[6] && (val[2] == 'X' || val[2] == 'O')))
		{
			if (player == 'X')
			{
				cout << "Player 1(X) Winner " << endl;
				return 0;
			}
			else if (player == 'O')
			{
				cout << "Player 2(O) Winner" << endl;
				return 0;
			}
		}
	}
	cout << " Match Drawn" << endl;
	return 0;
}

