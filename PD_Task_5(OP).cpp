#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y);
main()
{
	system("cls");
	gotoxy(75,20);
	cout<<"ABDULLAH";
	gotoxy(77,21);
	cout<<"AMIR";
	gotoxy(0,2);
}
void gotoxy(int x, int y)
{

	COORD coordinates;

	coordinates.X = x;

	coordinates.Y = y;

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}




