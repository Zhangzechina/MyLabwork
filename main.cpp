#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;


//friend �������÷�ʾ��

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
		cout << "��������������" << endl;
	}

	void display(Date &rabbit);


};
//--------------------Date��---------------------------

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
		cout << "��������������" << endl;
	}

	void display()
	{
		cout << "year: " << year << "month" << month << "day:" << endl;

	}


	// ����Ԫ����"����",
	// friend�������ĸ���,�ĸ���Ͷ��⿪�˸�����,ͨ���ú��ſ����������(���˺���,ĳ����ĺ���,������)�����ʱ���.
	 
	friend bool equal(Date &r1, Date &r2);//�����˺���������,�������˺���ֱ�ӷ��ʱ������˽������
	friend void Student::display(Date &rabbit);//�������һ��student���ڵĺ���outputInfo������,������ֱ�ӷ��ʱ������˽������
	friend Student;//�������һ��student�࿪����,�����������ֱ�ӷ��ʱ������˽������

};




void Student::display(Date &rabbit)
{

	cout << "����display����" << endl;
	cout << id << "-" << name << endl;

	cout << rabbit.year << endl;

}



//���˺���
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