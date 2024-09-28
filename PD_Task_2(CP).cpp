#include<iostream>
using namespace std;
void Reverse(string ans);
main()
{
	string answer;
	cout<<"Enter 'true' or 'false': ";
	cin>>answer;
	Reverse(answer);
}
void Reverse(string ans)
{
	if(ans=="true")
	{
		cout<<"false";
	}
	if(ans=="false")
	{
		cout<<"true";	
	}
}