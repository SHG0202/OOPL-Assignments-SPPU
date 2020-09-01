//============================================================================
// Name        : assign4.cpp
// Author      : saket
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <math.h>
using namespace std;

class calculator
{
public:
	void addition()
	{
		float a,b,sum;
		cout<<"enter two numbers"<<endl;
		cin>>a>>b;
		sum=a+b;
		cout<<"sum of "<<a<<" and "<<b<<" is equal to "<<sum<<endl;
	}

	void subtract()
	{
		float a,b,diff;
		cout<<"enter two numbers"<<endl;
		cin>>a>>b;
		diff=a-b;
		cout<<"difference of "<<a<<" and "<<b<<" is equal to "<<diff<<endl;
	}

	void multiply()
	{
		float a,b,product;
		cout<<"enter two numbers"<<endl;
		cin>>a>>b;
		product=a*b;
		cout<<"product of "<<a<<" and "<<b<<" is equal to "<<product<<endl;
	}

	void divide()
	{
		float a,b,div;
		cout<<"enter two numbers"<<endl;
		cin>>a>>b;
		if(b==0)
		{
			cout<<"division is not defined"<<endl;
		}
		else
		{
			div=a/b;
			cout<<a<<" divided by "<<b<<" is equal to "<<div<<endl;
		}
	}

	void trig()
	{
		float a,rad,s;
		int N;
		cout<<"enter angle"<<endl;
		cin>>a;
		rad=(22/7 * a)/180;

		cout<<"enter 1 for sine operation"<<endl;
		cout<<"enter 2 for cosine operation"<<endl;
		cout<<"enter 3 for tangent operation"<<endl;
		cin>>N;
		switch(N)
		{
		case 1:
			s=sin(rad);
			cout<<"sin("<<a<<") is equal to "<<s<<endl;
			break;

		case 2:
			s=cos(rad);
			cout<<"cos("<<a<<") is equal to "<<s<<endl;
			break;

		case 3:
			s=tan(rad);
			cout<<"tan("<<a<<") is equal to "<<s<<endl;
			break;

		}

	}
};

void sine(float p,int q)
{

}

int main()
{
	calculator cal;
	char ch,choice;

	do
	{
		cout<<"which operation do you want to perform?"<<endl;
		cout<<"1. press + for addition"<<endl;
		cout<<"2. press - for subtraction"<<endl;
		cout<<"3. press * for multiplication"<<endl;
		cout<<"4. press / for division"<<endl;
		cout<<"5. Press T fot trigonometric operation"<<endl;
		cin>>choice;

		switch(choice)
		{
			case '+':
				cal.addition();
				break;

			case '-':
				cal.subtract();
				break;

			case '*':
				cal.multiply();
				break;

			case '/':
				cal.divide();
				break;

			case 'T':
				cal.trig();
				break;

			default:
				cout<<"enter a valid choice"<<endl;
				break;

		}
		cout<<"do you want to continue , Y or N?"<<endl;
		cin>>ch;

	}
	while(ch=='Y' && ch!='N');


	return 0;
}
