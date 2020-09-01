//============================================================================
// Name        : assign8.cpp
// Author      : saket
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

int main()
{
	string data;
	int x = 0;

	ofstream obj("temp.txt");

	cout << "ENTER DATA " << endl;
	do
	{
		cin >> data;
		obj << data<<"\t\t";

		cin >> x;
	} while (x == 1);

	obj.close();

	ifstream obj2;

	obj2.open("temp.txt");

	while (obj2>>data)
	{
		cout << data<<"\t";
	}

	return 0;
}
