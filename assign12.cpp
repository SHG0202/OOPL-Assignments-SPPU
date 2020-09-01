//============================================================================
// Name        : assign12.cpp
// Author      : saket
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<deque>

using namespace std;

void display(deque<int>D)
{
	while (!D.empty())
	{
		cout << D.front() << " ";
		D.pop_front();
	}
	cout << endl;

}

int main()
{
	int opt,temp;

	deque<int>D;
	do
	{
		cout<<"What operation do you want to perform on Double ended queue ?"<<endl;
		cout<<"1. insert data from front."<<endl;
		cout<<"2. insert data from back."<<endl;
		cout<<"3. remove data from front."<<endl;
		cout<<"4. remove data from back"<<endl;
		cout<<"5. size of dequeue"<<endl;
		cout<<"6. display front element"<<endl;
		cout<<"7. display rear element"<<endl;
		cout<<"8. display dequeue"<<endl;
		cout<<"9. EXIT"<<endl;
		cin>>opt;

		switch(opt)
		{
		case 1:
			int n,val;
			cout<<"how many elements do you want to add?";
			cin>>n;

			for(int i=0;i<n;i++)
			{
				cout<<"value: ";
				cin>>val;
				D.push_front(val);
			}

			break;

		case 2:
			cout<<"how many elements do you want to add?";
			cin>>n;

			for(int i=0;i<n;i++)
			{
				cout<<"value: ";
				cin>>val;
				D.push_back(val);
			}

			break;

		case 3:
			temp=D.front();
			D.pop_front();
			cout<<"removed "<<temp<<endl;
			break;

		case 4:
			temp=D.back();
			D.pop_back();
			cout<<"removed "<<temp<<endl;
			break;

		case 5:
			temp = D.size();
			cout << "size of DEQUE is " << temp << endl;
			break;

		case 6:
			temp=D.front();
			cout<<"Front element is "<<temp<<endl;
			break;

		case 7:
			temp=D.back();
			cout<<"Rear element is "<<temp<<endl;
			break;

		case 8:
			display(D);
			break;

		case 9:
			break;

		default:
			cout<<"Enter a valid option"<<endl;
			break;

		}
	}
	while(opt!=9);


	return 0;
}
