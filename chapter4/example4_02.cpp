//静态成员函数访问静态数据成员使用示例
#include<iostream>
#include<string.h>
using namespace std;
class Student
{
private:
	static int total;
	int num;
	char name[20];
	
public:
	            
	Student() {total++;}                 //构造函数，每定义一个新对象，则total加1
	~Student() {total--;}                //
	Student(int n,char *p="Wang");
    void GetName();
	int Getnum();
	static void Print();
};
int Student::total;                    //静态数据成员的初始化
Student::Student(int n,char *p)          //带参构造函数,每定义一个新对象，total减1
{
	num=n;
	strcpy(name,p);
	total++;
}
void Student::GetName()
{
	cout<<name<<endl;
}
int Student::Getnum()
{
	return num;
}

void Student::Print()                      //定义该共有静态成员函数，此处不能再加static
{
	cout<<"The number of all students:"<<total<<endl;
}
int main()
{
	Student::Print();
	Student *p=new Student(13);
	Student::Print();
	p->Print();
	delete p;
	Student::Print();
	Student s[2];
	s[0].Print();
	s[1].Print();
	system("pause");
	return 0;
}