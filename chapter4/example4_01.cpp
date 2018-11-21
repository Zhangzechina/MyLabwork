//静态数据成员使用示例
#include<iostream>
#include<string.h>
using namespace std;
class Student
{
private:
	int num;
	char name[20];
	
public:
	static int total;                 //共有的数据成员
	Student() {total++;}                 //构造函数，每定义一个新对象，则total加1
	~Student() {total--;}                //
	Student(int n,char *p="Wang");
    void GetName();
	int Getnum();
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
int main()
{
	cout<<"The number of all students:"<<Student::total<<endl;
	                                     //无对象时可用类名：：静态成员名形式访问
    Student *p=new Student(13);          //用指针申请动态的空间并得到对象*p;
	cout<<"The number of all students:"<<Student::total<<endl;
	                                     //用类名：：静态成员形式访问
	cout<<"The number of all students:"<<p->total<<endl;//用指针所指向的对象去访问
	
	delete p;                            //通过指针删除对象，析构一次
	cout<<"The number of all students:"<<Student::total<<endl;
	                                     //用类名：：静态成员形式访问
	Student s[2];                        //定义两个对象，构造函数调用两次
	cout<<"The number of all students:"<<s[0].total<<endl;
	cout<<"The number of all students:"<<s[1].total<<endl;
	system("pause");

return 0;
}