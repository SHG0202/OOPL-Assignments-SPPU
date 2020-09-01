//============================================================================
// Name        : assign2.cpp
// Author      : saket
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class complex
{
private:
	float real;
	float imag;
public:
	complex(float r=0 , float i=0)
	{
		real=r;
		imag=i;
	}

	complex operator+(const complex &Z)
	{
		complex com;
		com.real=real+Z.real;
		com.imag=imag+Z.imag;
		return(com);
	}

	complex operator-(const complex &Z)
	{
		complex com;
		com.real=real-Z.real;
		com.imag=imag-Z.imag;
		return(com);
	}

	complex operator*(const complex &Z)
	{
		complex com;
		com.real=real*Z.real - imag*Z.imag;
		com.imag=real*Z.imag + imag*Z.real;
		return(com);
	}

	complex operator/(const complex &Z)
	{
		complex com;
		com.real=(real*Z.real + imag*Z.imag)/(Z.real*Z.real + Z.imag*Z.imag);
		com.imag=(real*Z.imag - imag*Z.real)/(Z.real*Z.real + Z.imag*Z.imag);
		return(com);
	}

	friend ostream & operator<<(ostream &out,complex &s)
	{
		if(s.imag>0)
		{
			out<<s.real<<"+j"<<s.imag;
		}
		else
		{
			s.imag*=-1;
			out<<s.real<<"-j"<<s.imag;
		}

		return out;
	}

	friend istream & operator>>(istream &in,complex &s)
	{
		in>>s.real>>s.imag;
		return in;
	}
};



int main()
{
	complex c1(0,0),c2(0,0),c3(0,0);
	int n;
	cout<<"first number:"<<endl;
	cin>>c1;
	cout<<"second number:"<<endl;
	cin>>c2;
	do
	{
		cout<<"enter valid choice"<<endl;
		cout<<"1.addition"<<endl;
		cout<<"2.subtraction"<<endl;
		cout<<"3.multiplication"<<endl;
		cout<<"4.division"<<endl;
		cout<<"5.exit"<<endl;
		cin>>n;

		switch(n)
		{
		case 1:
			c3=c1+c2;
			cout<<c3;
			break;

		case 2:
			c3=c1-c2;
			cout<<c3;
			break;

		case 3:
			c3=c1*c2;
			cout<<c3;
			break;

		case 4:
			c3=c1/c2;
			cout<<c3;
			break;

		case 5:
			cout<<"have a good day"<<endl;
			break;

		default:
			break;
		}
	}
	while(n!=5);

	return(0);
}
