#include<iostream>
using namespace std;
void tpChecker(int people, int tp);
main()
{
	int people,tp;
	cout<<"Number of people in the household: ";
	cin>>people;
	cout<<"Number of rolls of TP: ";
	cin>>tp;
	tpChecker(people,tp);
}
void tpChecker(int people, int tp)
{
	int days,tissueSheetsUsed,totalSheets;
	totalSheets=500*tp;
	tissueSheetsUsed=people*(57);
	days=totalSheets/tissueSheetsUsed;
	if(days<=14)
	{
		cout<<"Your TP will only last "<<days<<" days, buy more!";
	}
	if(days>14)
	{
		cout<<"Your TP will last "<<days<<" days, no need to panic!";
	}

}