//============================================================================
// Name        : assign11.cpp
// Author      : Saket Gupta
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<stdlib.h>
#include<fstream>
#define SIZE 20
using namespace std;
class Student
{
	private:
	char name[SIZE];
	int rn;

	public:
	void getdata();
	void putdata();
};
void Student::getdata()
{
	cout<<"Enter name: ";
	cin>>name;
	cout<<"\nEnter roll number: ";
	cin>>rn;
	cout<<endl;
}
void Student::putdata()
{
	cout<<"Name: "<<name<<"Roll number: "<<rn<<endl;
}
int main()
{
	char ch;
	Student S;
	fstream f("object.txt",ios::in|ios::out|ios::app|ios::binary);

	do
	{
		S.getdata();
		f.write((char*)&S,sizeof(S));
		cout<<"Write 1 more?\n";
		cin>>ch;
	}while(ch=='y');
	f.seekg(0);
	while(f)
	{
		f.read((char*)&S,sizeof(S));
		if(f.eof())
			break;
		S.putdata();
	}
	return 0;
}
//	int i=53214;
//	float p=5.8213;
//	string s="pict";
//	ofstream os("data.txt");//CREATES NEW FILE
//	//ELSE WE CAN USE
//	//os.open("data.txt");
//	os<<i<<" "<<p<<" "<<s<<" ";
//	os.close();
//	int j;
//	float q;
//	string s1;
//	ifstream in("data.txt");
//	in>>j>>q>>s1;
//	return 0;


/*ofstream out;
out.open("profiles.txt");
out<<"My name is Chinmay Rahate\n";
out<<"I am a second year student\n";
out<<"I'll complete my graduation\n";
out<<"In PICT good placement\n";
out.close();

ifstream in;
in.open("profiles.txt");
char a[200];
while(in)
{
	in.getline(a,199);
	cout<<a;
}*/
