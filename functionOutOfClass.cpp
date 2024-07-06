#include<stdio.h>
#include<iostream>
using namespace std;
 class complex
 {
 private :
    int a,b;
 public :
    void setdata(int, int);
    void showdata();
 };
void complex :: setdata(int x, int y)
{
    a=x;b=y;
}
    void  complex ::showdata(){
    cout<<"\n a="<<a<<"b = "<<b;
    }

int main()
{
    complex c1,c2;//object
    c1.setdata(3,4);
    c1.showdata();
}

