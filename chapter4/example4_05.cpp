#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
class Person
{
private:
	int age;
	char *name;
public:
	Person(int i=1,char *na="Zhuli");
	~Person();
	void Print();
	//void Print() const;
	void ModifyAge();
};
Person::Person(int n,char *na)
{
	age=n;
	name=new char[strlen(na)+1];
	strcpy(name,na);
}
Person::~Person()
{
	delete []name;
}
void Person::Print() 
 {
	 cout<<"age:"<<age<<"name:"<<name<<endl;
	 cout<<"Thia is a general print()."<<endl;
 } 

//void Person::Print() const
//{
	//cout<<"age:"<<age<<"name:"<<name<<endl;
	//cout<<"Thia is a const print()."<<endl;
//}

void Person::ModifyAge()
{
	age++;
}

int main()
{
	const Person p1(17,"wu");
	cout<<"Output const object p1:"<<endl;
	p1.Print();
	Person p2(18,"zhang");
	cout<<"Output general object p2"<<endl;
	p2.ModifyAge();
	p1.Print();
	system("pause");
	return 0;
}
