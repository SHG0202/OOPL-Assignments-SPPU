//============================================================================
// Name        : assign3.cpp
// Author      : saket
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <math.h>
using namespace std;

class quadratic
{
	float a,b,c;

public:
	quadratic()
	{
		a=0;
		b=0;
		c=0;
	}

	friend istream &operator>>(istream &in,quadratic &q)
	{
		in>>q.a>>q.b>>q.c;
		return in;
	}

	friend ostream &operator<<(ostream &out,quadratic &q)
	{
		out<<q.a<<"x^2 + "<<q.b<<"x + "<<q.c<<endl;
		return out;
	}

	quadratic operator+(const quadratic &q)
	{
		quadratic quad;
		quad.a=a+q.a;
		quad.b=b+q.b;
		quad.c=c+q.c;
		return quad;
	}
	void roots()
	{
		float x1=0,x2=0,D;
		D=b*b-(4*a*c);
		if(D>0)
		{
			x1=(-b+sqrt(D))/(2*a);
			x2=(-b-sqrt(D))/(2*a);
			cout<<"roots are:"<<endl;
			cout<<x1<<" and "<<x2<<endl;

		}
		else if(D==0)
		{
			x1=-b/(2*a);
			cout<<"equal roots:"<<x1<<endl;
		}
		else
		{
			cout<<"no real roots"<<endl;
		}
	}

	void eval()
	{
		float X,val;
		cout<<"enter X for which the result is to be calculated"<<endl;
		cin>>X;

		val=(a*(X*X))+(b*X)+c;

		cout<<"at X="<<X<<"the expression is equal to "<<val<<endl;

	}
};

int main()
{
	quadratic q1,q2,q3;
	int N;
	cout<<"enter first quadratic equation"<<endl;
	cin>>q1;
	cout<<"the equation is: "<<q1<<endl;

	do
	{
		cout<<"select a option"<<endl;
		cout<<"1.add two quadratic equation"<<endl;
		cout<<"2.roots of quadratic equation"<<endl;
		cout<<"3.evaluate the result for a value of X"<<endl;
		cout<<"4.exit"<<endl;
		cin>>N;
		switch(N)
		{
		case 1:
			cout<<"enter second quadratic equation"<<endl;
			cin>>q2;
			q3=q1+q2;
			cout<<q3;
			break;

		case 2:
			q1.roots();
			break;

		case 3:
			q1.eval();
			break;

		case 4:
			cout<<"have a great day"<<endl;
			break;

		default:
			cout<<"please enter a valid choice"<<endl;
			break;
		}
	}
	while(N!=4);
	return 0;
}
