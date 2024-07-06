#include<iostream>
using namespace std;
class complex
{
private :
    int a,b;
public :
    complex(int x,int y)   //Parametarized Constructor
    {
        a=x;b=y;
    }
    complex (int k)   //Parametarized Contructor
    {
        a=k;
    }
    complex ()   // default constructor
    {

    }
    complex(complex &c) //COPY CONSTRUCTOR
    {
        a=c.a;
        b=c.b;
    }
    void showdata()
    {
        cout<<"\n a="<<a<<"b="<<b;
    }
};
int main()
{
    complex c1(3,8),c2,c3(5),c4(c1);
    c1.showdata();
    c2.showdata();
    c3.showdata();
    c4.showdata();
}
