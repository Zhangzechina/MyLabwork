#include<iostream>
#include<stdlib.h>
using namespace std;
#include"example4_04_Circle.h"
int main()
{
	Circle c1(3.5),c2;
	cout<<"Radius of c1="<<c1.GetRadius();
	cout<<",area of c1:"<<c1.Area()<<",circumference of c1="<<c1.Circumference()<<endl;
	cout<<"Radius of c2="<<c2.GetRadius();
	cout<<",area of c2:"<<c2.Area()<<",circumference of c2="<<c2.Circumference()<<endl;
    system("pause");
	return 0;
}