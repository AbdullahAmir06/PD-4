#include<iostream>

using namespace std;
void IsEqual(int,int);
main ()
{
	int no1,no2;
	cout<<"Enter the First number: ";
	cin>>no1;
	cout<<"Enter the Second number: ";
	cin>>no2;
	IsEqual(no1,no2);

}
void IsEqual(int x,int y)
{
	if(x==y)
	{
		cout<<"true";
	}
	if(x!=y)
	{
		cout<<"false";
	}

}
