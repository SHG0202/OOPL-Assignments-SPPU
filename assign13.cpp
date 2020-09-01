//============================================================================
// Name        : assign13.cpp
// Author      : saket
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;


class student
{
	string name;
	string dob;
	long int tele_no;

public:

	student()
	{
		tele_no = 0;
	}

	void getdata()
	{
		cout<<"NAME: ";
		cin>>name;cout<<endl;

		cout<<"Date of birth"<<endl;
		cin>>dob;

		cout<<"telo no. : ";
		cin>>tele_no;
		cout<<endl;
	}

	void putdata()
	{
		cout<<"NAME: "<<name<<endl;

		cout<<"Date of birth = "<<dob<<endl;

		cout<<"telo no. : "<<tele_no<<endl;
	}

	string getname()
	{
		return name;
	}


};

bool sort_name(student p,student q)
{
	return(p.getname()<q.getname());
}

int main()
{
	int n;
	cout<<"what is the total number of student?"<<endl;
	cin>>n;

	student s[n];

	cout<<"enter record of students."<<endl;
	for(int j=0;j<n;j++)
	{
		s[j].getdata();
	}

	sort(s,s+n,sort_name);

	for(int j=0;j<n;j++)
	{
		s[j].putdata();
	}


	string name[n],find;

	for(int j=0;j<n;j++)
	{
		name[j] = s[j].getname();
	}

	cout<<"which name do you want to search?"<<endl;
	cin>>find;

	if(binary_search(name,name+n,find))
		cout<<"found"<<endl;
	else
		cout<<"not found"<<endl;

	return 0;
}
