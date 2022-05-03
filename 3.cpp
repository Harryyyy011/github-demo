#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct student
{
    int rollno;
    char name[30]
    float percent;
};
void main()
{
    student s1;
    clrscr();
    cout<<"Enter Roll no:";
    cin>>s1.rollno;
    gets(s1.name);
    cout<<"Enter percentage:";
    cin<<s1.percent;
    cout<<"\nStudent information is as follows:\n";
    cout<<"Roll No:"<<s1.rollno;
    cout<<"\nName:"<<s1.name;
    cout<<"\nPercentage:"<<s1.percent;
    getch();
}
