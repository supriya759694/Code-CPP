#include<conio.h>
#include<iostream>
using namespace std;
class complex{
private :
    int a,b; //instance menber variable
public :
    void setdata(int x, int y)
    {
        a=x;b=y;
    }
    void showdata()
    {
        cout<<"\n a= "<<a<<"b= "<<b;
    }

};
int main()
{
    complex c1,c2;//object
    c1.setdata(3,4);
    c1.showdata();
}
