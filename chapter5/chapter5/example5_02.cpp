//example5_02.cpp �����Ա�Ĺ��캯�������Ĵ���
#include<iostream>
#include<stdlib.h>
using namespace std;
class A
{
public:
	A(int a)
	{
		x= a;
		cout << "A:x=" << a << endl;
	}
private:
	int x;
};
class B
{
public:
   B(int a, int b, int c) :a2(b), a1(a)  //ע�⣺��ʼ���б����ǳ�Ա������a1,a2������������A
   {
	   y = c;
	   cout << "B:y=" << c << endl;
    }
private:
	A a1, a2;                             //�����������Ա��B�������A��
	int y;
};

int main()
{
	B obj(10, 20, 30);
	system("pause");
	return 0;
}