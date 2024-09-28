#include<iostream>
using namespace std;
void longestTime(int hour,int minutes);
main()
{
	int hour,minutes;
	cout<<"Enter the number of hours: ";
	cin>>hour;
	cout<<"Enter the number of minutes: ";
	cin>>minutes;
	longestTime(hour,minutes);
}
void longestTime(int hour,int minutes)
{
	int answer;
	answer=hour*60;
	if(answer>minutes)
	{
		cout<<hour;
	}
	if(answer<minutes)
	{
		cout<<minutes;
	}

}