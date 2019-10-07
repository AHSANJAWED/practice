#include<fstream>
#include<stdio.h>
#include<iostream>
using namespace std;
class emp
{	public:
	int Busno;
	char name[100];
	char dept[100];
	char collegename[100];
	char management[20];

};
emp e;
int main()

{
	cout<<"Enter the name of your system"<<endl;
	ofstream x;
	x.open("student.txt");
	char ch='y';
	while(ch=='y'||ch=='Y')
	
	{
	gets(e.management);
	cout<<"Enter name"<<endl;
	gets(e.name);
	cout<<"Enter dept"<<endl;
	gets(e.dept);
	cout<<"Enter collegename"<<endl;
	gets(e.collegename);
	cout<<"Enter Bus no."<<endl;
	cin>>e.Busno;
	

	x.write((char *)&e, sizeof(e));
	cout<<"Do you want to continue:(y/n)";
	cin>>ch;
	
	}
	x.close();
	return 0;
}
