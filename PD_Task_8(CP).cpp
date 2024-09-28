#include<iostream>
using namespace std;
void pet(int holidays);
main()
{
	int holidays;
	cout<<"Holidays: ";
	cin>>holidays;
	pet(holidays);
}
void pet(int holidays)
{
	int workingDays,time,differenceFromTheNorm;
	int hour,minutes;
	workingDays=365-holidays;
	time=workingDays*63+holidays*127;
	differenceFromTheNorm=30000-time;
	if(differenceFromTheNorm>=0)
	{	hour=differenceFromTheNorm/60;
		minutes=differenceFromTheNorm%60;
		cout<<"Tom sleeps well "<<endl;
		cout<<hour <<" hours and "<<minutes<<" minutes for play";
	}	
	if(differenceFromTheNorm<0)
	{
		hour=-differenceFromTheNorm/60;
		minutes=-differenceFromTheNorm%60;
		cout<<"Tom will run away "<<endl;
		cout<<hour <<" hours and "<<minutes<<" minutes for play";

 	}

}
