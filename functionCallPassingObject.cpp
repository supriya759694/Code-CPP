#include<stdio.h>
#include<iostream>
using namespace std;
class complex{
private :
    int a,b;
public :
    void setdata(int x,int y)
    {
        a=x;b=y;
    }
    void showdata()
    {
        cout<<"\n a= "<<a<<"b= "<<b;
    }
   complex add(complex c)
    {
        complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return temp;
    }
};
int main()
{
    complex c1,c2, c3;
    c1.setdata(3,4);
    c2.setdata(5,6);
    c3=c1.add(c2);//c1 call the add function and passing the arguments c2 which is return asssigned the c3.
    c3.showdata();
}
