#include<iostream>
using namespace std;
void printMenu();
void calculateAggregate(string name,int matricMarks,int interMarks,int ecatMarks);
void compareMarks(string nameStd1,int ecatMarksStd1,string nameStd2,int ecatMarksStd2);
main ()
{
	system("cls");
	int matricMarks,interMarks,ecatMarks;
	string nameStd1,nameStd2;
	int ecatMarksStd1,ecatMarksStd2;
	string name;
	printMenu();
	cout<<"Enter the name of Student: ";
	cin>>name;
	cout<<"Enter Matric Marks (out of 1100): ";
	cin>>matricMarks;
	cout<<"Enter Inter Marks (out of 550): ";
	cin>>interMarks;
	cout<<"Enter Ecat Marks (out of 400): ";
	cin>>ecatMarks;
	calculateAggregate(name,matricMarks,interMarks,ecatMarks);
	cout<<" "<<endl;
	cout<<"Allotment of Roll Number"<<endl;
	cout<<" "<<endl;
	cout<<"Enter First Student Name: ";
	cin>>nameStd1;
	cout<<"Enter First Student Ecat Marks: ";
	cin>>ecatMarksStd1;
	cout<<"Enter Second Student Name: ";
	cin>>nameStd2;
	cout<<"Enter Second Student Ecat Marks: ";
	cin>>ecatMarksStd2;
	compareMarks(nameStd1,ecatMarksStd1,nameStd2,ecatMarksStd2);
	
}
void printMenu()
{
	cout<<"University Admission Management System"<<endl;
}

void calculateAggregate(string name,int matricMarks,int interMarks,int ecatMarks)
{
	float aggregate;
	aggregate=((((matricMarks*100)/1100)*30)/100)+((((interMarks*100)/550)*30)/100)+((((ecatMarks*100)/400)*40)/100);
	cout<<"Name of Student: "<<name<<endl;
	cout<<"Aggregate: "<<aggregate<<endl;
}
void compareMarks(string nameStd1,int ecatMarksStd1,string nameStd2,int ecatMarksStd2)
{
	if(ecatMarksStd1>ecatMarksStd2)
	{
		cout<<"The First Roll Number is of "<<nameStd1<<" who has Ecat marks "<<ecatMarksStd1<<" out of 400.";
	}
	else
	{
		cout<<"The First Roll Number is of "<<nameStd2<<" who has Ecat marks "<<ecatMarksStd2<<" out of 400.";
	}



}