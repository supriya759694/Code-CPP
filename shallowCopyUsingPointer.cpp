#include<iostream>
#include<conio.h>
using namespace std;
class dummy
{
private :
    int a,b,*p;
public :
    void setdata(int x,int y,int z)
    {
        a=x;b=y;*p=z;
    }
    void showdata()
    {
        cout<<"\n a= "<<a<<"b= "<<b<<"p= "<<p;
    }
    dummy()
    {
        p=new int;
    }
    dummy(dummy &d)
    {
        a=d.a;b=d.b;p=d.p;
    }
    /*~dummy()
    {
        delete p;
    }*/
};
int main()
{
    dummy d1;
    d1.setdata(3,4,5);
    dummy d2=d1;
    d2.showdata();

}
