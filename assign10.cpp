//============================================================================
// Name        : assign10.cpp
// Author      : saket
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

template <class T>
void sort(T a[] , int n)
{
	T temp;
	int j,index;
	cout<<"enter elements of list"<<endl;
	for(int i=0;i<n;i++)
		cin>>a[i];

	cout<<"elements are"<<endl;
	for(int i=0;i<n;i++)
		cout<<a[i]<<"  ";
	cout<<endl;

	for(int i=0;i<n;i++)
	{
		index=i;
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				index=j;
			}
		}
		temp=a[index];
		a[index]=a[i];
		a[i]=temp;
	}

	cout<<"SORTED ARRAY"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}


int main()
{
	int n,k;

	cout<<"enter number of elements"<<endl;
	cin>>n;

	int t1[n];
	float t2[n];

	do
	{
		cout<<"do you want to work with integer or decimals"<<endl;
		cout<<"1.integer"<<endl;
		cout<<"2.decimals"<<endl;
		cout<<"3.exit"<<endl;
		cin>>k;

		switch(k)
		{
		case 1:
			sort(t1,n);
			break;

		case 2:
			sort(t2,n);
			break;

		case 3:
			cout<<"have a good day"<<endl;
			break;

		default:
			cout<<"invalid option"<<endl;
			break;
		}
	}
	while(k!=3);

	return 0;
}
