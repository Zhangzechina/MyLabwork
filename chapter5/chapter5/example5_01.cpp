//example5_01.cpp:对象成员的构造与析构
#include<iostream>
#include<stdlib.h>
using namespace std;
class A 
{
public:
	A()
	{
		cout << "创建A" << endl;
	}
	~A()
	{
		cout << "析构A" << endl;
		getchar();
	}
};

class B
{
public:
	B()
	{
		cout << "创建B" << endl;
	}
	~B()
	{
		cout << "析构B" << endl;
		getchar();
	}
private:
	A a;                           //对象成员，B类包含了A类
};


int main()
{
	B obj;
	system("pause");
	return 0;
}
