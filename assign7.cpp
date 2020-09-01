//============================================================================
// Name        : assign7.cpp
// Author      : saket
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<string.h>
using namespace std;

class Exception
{
	int age;
	long int income;
	string city;
	bool four_wheeler;

public:
	Exception()
{
		age = 0;
		income = 0;
		four_wheeler = 0;
}

	class error
	{
	public:
		error( int a )
		{
			cout<<"Age should be between 18 to 55 yrs."<<endl;
			cout<<a<<" is an invalid age"<<endl;
		}

		error( long int b)
		{
			cout<<"income should be between Rs. 50,000 – Rs. 1,00,000"<<endl;
			cout<<b<<" is invalid income"<<endl;
		}

		error( string c)
		{
			cout<<"invalid city"<<endl;
			cout<<c<<" is invalid city"<<endl;
		}

		error( bool d)
		{
			cout<<"user should have a four wheeler"<<endl;
		}
	};

	void getdata()
	{

		cout<<"hello user"<<endl;
		cout<<"enter age"<<endl;
		cin>>age;

		if(age<18 || age>55)
		{
			throw error(age);
		}

		cout<<"enter annual income"<<endl;
		cin>>income;

		if(income<50000 || income>100000)
		{
			throw error(income);
		}

		cout<<"enter city"<<endl;
		cin>>city;

		if( city!= "Pune" && city!="Mumbai" && city!="Bangalore" && city!="Chennai" )
		{
			throw error(city);
		}

		cout<<"Do you have four wheeler?"<<endl;
		cin>>four_wheeler;

		if(four_wheeler==0)
		{
			throw error(four_wheeler);
		}
	}

	void display()
	{
		cout<<"USER DETAILS"<<endl;
		cout<<"age: "<<age<<endl;
		cout<<"Monthly income : "<<income<<endl;
		cout<<"City: "<<city<<endl;
		if(four_wheeler==1)
			cout<<"four wheeler : present"<<endl;
	}
};

int main()
{
	Exception e;
	char a;

	do
	{
		try
		{
			e.getdata();
		}
		catch(Exception::error&)
		{
			cout<<"INVALID DATA"<<endl;
			goto again;
		}

		e.display();
		goto exit;
		again:
		cout<<"do you want to enter again?"<<endl;
		cin>>a;
	}
	while(a != 'N');

	exit:
	return 0;
}
