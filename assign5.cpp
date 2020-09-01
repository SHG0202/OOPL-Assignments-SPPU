//============================================================================
// Name        : assign5.cpp
// Author      : saket
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string.h>
using namespace std;

class DOB
{
public:
	int date;
	int month;
	int year;
};
class student_id
{

	char bg[2];
	string add;
	char tele_no[10];
	char drive_li_no[6];

	friend class student;

};

class student
{
	static int count;
	string name;
	int roll_no;
	int cls;
	char division;
	DOB dob;


public:


	void getdata(student_id &s)
	{
		cout<<"name:"<<endl;
		cin>>name;
		cout<<"roll_no "<<endl;
		cin>>roll_no;
		cout<<"class and division: "<<endl;
		cin>>cls>>division;
		cout<<"date of birth"<<endl;
		cin>>dob.date>>dob.month>>dob.year;
		cout<<"blood group:"<<endl;
		cin>>s.bg;
		cout<<"address:"<<endl;
		cin>>s.add;
		cout<<"telephone number:"<<endl;
		for(int i=0 ; i<10;i++)
			cin>>s.tele_no[i];
		cout<<"driving lisence number:"<<endl;
		for(int i=0 ; i<6;i++)
			cin>>s.drive_li_no[i];
		cout<<endl;
	}

	void display(student_id &s)
	{
		cout<<"STUDENT PROFILE:"<<endl;
		cout<<endl;
		cout<<"name:"<<name<<endl;
		cout<<"roll no. "<<roll_no<<endl;
		cout<<"class: "<<cls<<" "<<division<<endl;
		cout<<"DOB:"<<dob.date<<"/"<<dob.month<<"/"<<dob.year<<endl;
		cout<<"blood group:"<<s.bg[0]<<s.bg[1]<<endl;
		cout<<"address: "<<s.add;
		cout<<"telephone no ";
		for(int i=0;i<10;i++)
			cout<<s.tele_no[i];cout<<endl;
		cout<<"driving lisance number: ";
		for(int i=0;i<6;i++)
			cout<<s.drive_li_no[i];cout<<endl;
	}

	student()
	{
		name=" ";
		roll_no=0;
		cls=1;
		division=0;

		count++;
	}
	student(string name,int roll_no)
	{
		this->name=name;
		this->roll_no=roll_no;
		cls=1;
		division=0;

		count++;
	}

	~student()
	{
		count--;
		cout<<"object destroyed"<<count<<endl;
	}

	inline static int getcount()
	{
		return count;
	}



};



int student::count=0;

int main()
{
	int n;
	cout<<"number of students:"<<endl;
	cin>>n;
	student *s[n];
	student_id p;

	for(int i=0;i<n;i++)
	{
		s[i]= new student;
		s[i]->getdata(p);

	}
	for(int i=0;i<5;i++)
		s[i]->display(p);

	delete []s;


	return 0;
}
