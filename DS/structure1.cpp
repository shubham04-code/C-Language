#include<iostream>
using namespace std;

struct student
{
	char name[20];
	char address[50];
	int d,m,y;
	int addno;
};

student insert(student);     //function declaration
void show(student);

student insert(student s1)
{
	cout<<"\n==============================================================";
	cout<<"\nEnter your name : ";
	cin>>s1.name;
	
	cout<<"\nEnter your address : ";
	cin>>s1.address;

	cout<<"\nEnter your date of birth,month of birth,year of birth : ";
	cin>>s1.d>>s1.m>>s1.y;
	
	cout<<"\n==============================================================";
	
	return s1;
}

void show(student s1)
{
	cout<<"\n==============================================================";
	cout<<"\n\nName : "<<s1.name<<endl;
	cout<<"\nAddress : "<<s1.address<<endl;
	cout<<"\nBirthdate : "<<s1.d<<"/"<<s1.m<<"/"<<s1.y<<endl;
	cout<<"\n==============================================================";
}
int main()
{
	int size;
	student s1[100];
	cout<<"\nEnter total number of student ";
	cin>>size;
	for(int i = 0 ; i < size ; i++)
	{
	s1[i] = insert(s1[i]);
	}	
	for(int i = 0 ; i < size ; i++)
	{
	show(s1[i]);
	}
	return 0;
}
