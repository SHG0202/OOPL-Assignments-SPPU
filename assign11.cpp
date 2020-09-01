//============================================================================
// Name        : assign11.cpp
// Author      : saket
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<stack>
#include<queue>

using namespace std;

void display(stack<int>S)
{
	while (!S.empty())
	{
		cout << S.top() << " ";
		S.pop();
	}
	cout << endl;
}

void display(queue<int>Q)
{
	while (!Q.empty())
	{
		cout << Q.front() << " ";
		Q.pop();
	}
	cout << endl;
}

int main()
{
	int opt;
	int s_opt;
	int q_opt;

	stack<int>S;
	queue<int>Q;

	do
	{
		cout << "Do you want to work with STACK OR QUEUE ? " << endl;
		cout << "1. STACK " << endl;
		cout << "2. QUEUE " << endl;
		cout << "3. EXIT " << endl;
		cin >> opt;
		cout << endl;

		switch (opt)
		{
		case 1:
			do
			{
				int temp;

				cout << "What operation do you want to perform ? " << endl;
				cout << "1. Add elements " << endl;
				cout << "2. Remove an element " << endl;
				cout << "3. Get top element " << endl;
				cout << "4. Size of STACK " << endl;
				cout << "5. Is STACK empty ?" << endl;
				cout << "6. Display STACK " << endl;
				cout << "7. EXIT " << endl;
				cin >> s_opt;

				switch (s_opt)
				{
				case 1:
					int N;
					cout << " Number of elements you wish to add ? " << endl;
					cin >> N;

					cout << "Enter elements " << endl;
					for (int i = 0; i < N; i++)
					{
						cin >> temp;
						S.push(temp);

					}
					break;

				case 2:
					temp = S.top();
					S.pop();
					cout << "removed " << temp << endl;
					break;

				case 3:
					temp = S.top();
					cout << "topmost element is " << temp << endl;
					break;

				case 4:
					temp = S.size();
					cout << "size of STACK is " << temp << endl;
					break;

				case 5:
					if (S.empty())
						cout << "YES, STACK is empty " << endl;
					else
						cout << "NO, STACK is not empty " << endl;

					break;

				case 6:
					display(S);
					break;

				case 7:
					break;

				default:
					cout << "select a valid choice " << endl;
					break;

				}

			} while (s_opt != 7);

			break;

		case 2:
			do
			{
				int temp;

				cout << "What operation do you want to perform ? " << endl;
				cout << "1. Add elements " << endl;
				cout << "2. Remove an element " << endl;
				cout << "3. Get top element " << endl;
				cout << "4. Size of QUEUE " << endl;
				cout << "5. Is QUEUE empty ?" << endl;
				cout << "6. Display QUEUE " << endl;
				cout << "7. EXIT " << endl;
				cin >> q_opt;

				switch (q_opt)
				{
				case 1:
					int N;
					cout << " Number of elements you wish to add ? " << endl;
					cin >> N;

					cout << "Enter elements " << endl;
					for (int i = 0; i < N; i++)
					{
						cin >> temp;
						Q.push(temp);
					}
					break;

				case 2:
					temp = Q.front();
					Q.pop();
					cout << "removed " << temp << endl;
					break;

				case 3:
					temp = Q.front();
					cout << "topmost element is " << temp << endl;
					break;

				case 4:
					temp = Q.size();
					cout << "size of QUEUE is " << temp << endl;
					break;

				case 5:
					if (Q.empty())
						cout << "YES, QUEUE is empty " << endl;
					else
						cout << "NO, QUEUE is not empty " << endl;

					break;

				case 6:
					display(Q);
					break;

				case 7:
					break;

				default:
					cout << "select a valid choice " << endl;
					break;

				}

			} while (q_opt != 7);

			break;

		case 3:
			cout << "ta da!!" << endl;
			break;
		}
	}while (opt !=3);


}
