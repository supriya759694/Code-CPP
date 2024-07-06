#include<iostream>
using namespace std;
class dummy
{
private :
    int a,b;
public :
  void setData(int x, int y)
    {
        a=x;b=y;
    }
    void showdata()
    {
        cout<<"\n a= "<< a<<"b= "<<b;
    }
    dummy(dummy &d)
    {
        a=d.a;b=d.b;
    }
    dummy()
    {

    }
};
int main()
{
    dummy d1;
    d1.setData(3,4);
    dummy d2=d1; //copy
    d2.showdata();
}
