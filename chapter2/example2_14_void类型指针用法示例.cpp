/*---------------------------------------------------------*
//example2_14.cpp：void类型指针用法示例
*---------------------------------------------------------*/

#include <iostream>

using namespace std;

int main()
{
     void *vp;
     char c='A';
     short int x=97;
     vp=&c;//char类型指针可直接赋值给void型指针
     cout<<*(char*)vp<<" "<<*(short int*)vp<<" "<<endl;//显式类型转换控制输出
     vp=&x;//short类型指针可直接赋值给void型指针
     cout<<*(short int*)vp<<" "<<*(char*)vp<<" "<<endl;
     return 0;
}

