#include<iostream>
#include<windows.h>
void gotoxy(int x, int y);
using namespace std;
void h();
void a();
void s();
void n();
main ()
{
	gotoxy(5,2);
	h();
	gotoxy(5,3);
	a();
	gotoxy(5,4);
	s();
	gotoxy(5,5);
	s();
	gotoxy(5,6);
	a();
	gotoxy(5,7);
	n();
	gotoxy(5,8);
}
void h()
{
	cout<<"H";
}
void a()
{
	cout<<"A";
}
void s()
{
	cout<<"S";
}
void n()
{
	cout<<"N";
}
void gotoxy(int x, int y)
{

	COORD coordinates;

	coordinates.X = x;

	coordinates.Y = y;

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

