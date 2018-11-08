#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;


//friend 的三种用法示例

class Date;

class Student
{

private:

	int id;
	char name[10];

public:
	Student(int _id, char *pname)
	{
		this->id = _id;
		strcpy(this->name, pname);
	}

	~Student()
	{
		cout << "析构函数被调用" << endl;
	}

	void display(Date &rabbit);


};
//--------------------Date类---------------------------

class  Date
{
private:
	int year;
	int month;
	int day;
public:
	Date(int y, int m, int d)
	{
		this->year = y;
		this->month = m;
		this->day = d;
	}

	~Date()
	{
		cout << "析构函数被调用" << endl;
	}

	void display()
	{
		cout << "year: " << year << "month" << month << "day:" << endl;

	}


	// 把友元当成"后门",
	// friend出现在哪个类,哪个类就对外开了个后门,通过该后门可以允许别人(流浪函数,某个类的函数,整个类)来访问本类.
	 
	friend bool equal(Date &r1, Date &r2);//给流浪函数开后门,允许流浪函数直接访问本类里的私有数据
	friend void Student::display(Date &rabbit);//给另外的一个student类内的函数outputInfo开后门,允许它直接访问本类里的私有数据
	friend Student;//给另外的一个student类开后门,允许这个大类直接访问本类里的私有数据

};




void Student::display(Date &rabbit)
{

	cout << "我是display函数" << endl;
	cout << id << "-" << name << endl;

	cout << rabbit.year << endl;

}



//流浪函数
bool equal(Date &r1, Date &r2)
{
	if (r1.year == r2.year&& r1.month == r2.month&&r1.day == r2.day)
	{
		r1.year = 2018;
		return true;
	}

	else
		return false;

}



int main()
{

	Date A(1990, 11, 11);
	Date B(1990,11,11);

	cout<<boolalpha<<equal(A, B)<<endl;
	cout << noboolalpha << equal(A, B) << endl;



	system("pause");


}