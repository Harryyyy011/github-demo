#include<iostream>
#include<conio.h>
#include<stdio.h>
struct student
{
	int rollno;
	char name[30];
	float percent;
};
int main()
{
	int rollno;
	student s1;
	cout<<"Enter Roll no:";
	cin>>s1.rollno ;
	cout<<"Enter student name:";
	gets(s1.name);
	cout<<"Enter percentage:";
	cin>>s1.percent;
	cout<<"\n Student information is as follows:\n";
	cout<<"Roll No:"<<s1.rollno;
	cout<<"\n Name:"<<s1.name;
	cout<<"\n Percentage"<<s1.percentage;
	return 0;
	}
