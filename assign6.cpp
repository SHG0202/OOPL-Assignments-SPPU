//============================================================================
// Name        : assign6.cpp
// Author      : saket
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string.h>
using namespace std;

class personal
{
	string name;
	string add;
	long int mo_no;

public:
	personal()
{
	name = ' ';
	add = ' ';
	mo_no = 0;

	cout<<"personal constructor"<<endl;
}

void getdata()
{
	cout<<"enter personal details:"<<endl;
	cout<<"name:"<<endl;
	cin>>name;
	cout<<"address:"<<endl;
	cin>>add;
	cout<<"mobile number:"<<endl;
	cin>>mo_no;
}
void display()
{
	cout<<"PERSONAL RECORD:"<<endl;
	cout<<"name:"<<name<<endl;
	cout<<"address:"<<add<<endl;
	cout<<"mobile number:"<<mo_no<<endl;
}

~personal()
{
	cout<<"personal destroyed"<<endl;
}

};

class professional
{
	int id;
	string post;

public:
	professional()
{
	id = 0;
	post = ' ';

	cout<<"professional constructor"<<endl;
}

void getdata()
{
	cout<<"Enter professional details:"<<endl;
	cout<<"id:"<<endl;
	cin>>id;
	cout<<"post:"<<endl;
	cin>>post;
}

void display()
{
	cout<<"PROFESSIONAL RECORD:"<<endl;
	cout<<"id:"<<id<<endl;
	cout<<"post:"<<post<<endl;
}

~professional()
{
	cout<<"professional destroyed"<<endl;
}
};

class academic
{
	int ssc;
	int hsc;
	float graduate;

public:
	academic()
{
		ssc = 0;
		hsc = 0;
		graduate = 0.0;

		cout<<"academic constructor"<<endl;
}

void getdata()
{
	cout<<"enter academic details:"<<endl;
	cout<<"ssc score"<<endl;
	cin>>ssc;
	cout<<"hsc score"<<endl;
	cin>>hsc;
	cout<<"engineering score"<<endl;
	cin>>graduate;
}

void display()
{
	cout<<"ACADEMIC RECORD:"<<endl;
	cout<<"ssc score"<<ssc<<endl;
	cout<<"hsc score"<<hsc<<endl;
	cout<<"engineering score"<<graduate<<endl;
}

~academic()
{
	cout<<"academic destroyed"<<endl;
}

};

class employee : public personal , public professional , public academic
{
public:
employee()
{
	cout<<"employee constructor"<<endl;
}
void getdata()
{
	personal :: getdata();
	professional :: getdata();
	academic :: getdata();
}

void display()
{
	personal :: display();
	professional :: display();
	academic :: display();
}

~employee()
{
	cout<<"employee destroyed"<<endl;
}
};

int main()
{
	employee e;
	e.getdata();
	e.display();
	return 0;
}
