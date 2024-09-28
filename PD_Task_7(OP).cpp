#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y);
void printMaze();
void playerMove(int x, int y);
main()

{
	int x=10,y=1;
	system("cls");
	printMaze();
	while(true)
	{
		playerMove(x, y);
		y=y+1;
		if(y==8)
		{	while(y>=2)
			{
				y=y-1;				
				playerMove(x, y);
			}
		}
	}
	gotoxy(0, 10);
}

void playerMove(int x, int y)

{

	gotoxy(x, y);

	cout << "P";

	Sleep(200);

	gotoxy(x, y);

	cout<<" ";
}

void printMaze()

{

cout << "#######################" << endl;

cout << "#                     #" << endl;

cout << "#                     #" << endl;

cout << "#                     #" << endl;

cout << "#                     #" << endl;

cout << "#                     #" << endl;

cout << "#                     #" << endl;

cout << "#                     #" << endl;

cout << "#######################" << endl;
}
void gotoxy(int x, int y)
{

	COORD coordinates;

	coordinates.X = x;

	coordinates.Y = y;

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

