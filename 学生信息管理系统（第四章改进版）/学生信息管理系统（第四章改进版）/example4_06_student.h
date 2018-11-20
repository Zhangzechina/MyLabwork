#ifndef _STUDENT_H_INCLUDE_
#define _STUDENT_H_INCLUDE_
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
#define SIZE 80
class Student
{
	char *name;
	char ID[19];
	char number[10];
	char speciality[20];
	int age;
	static int mmm;

public:
	Student();
	Student(char *na,char *id,char *num,char *spec,int ag);
	Student(const Student &per);
	~Student();
	char* GetName() const;            //�ɶ���Ϊ����Ա����
	char* GetID();                    //���ɶ���Ϊ����Ա����
	char* GetNumber();                //�����Զ���Ϊ����Ա����
	char* GetSpec();                  //�����Զ���Ϊ����Ա����
	int GetAge() const;
	void Display() const;
	void Input();
	void Insert();
	void Delete();
	static int GetMmm();               //�����ӵľ�̬��Ա����
};




#endif