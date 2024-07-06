
#include<iostream>
using namespace std;
//This pointer contains address of an object is called Object pointer
class box
{
private :
    int l,b,h;
public :
    void setDimension(int x,int y,int z)
    {
        l=x;b=y;h=z;
    }
    void showdata()
    {
        cout<<"\n l= "<<l<<" b = "<<b<<" h= "<<h;
    }
};
int main()
{
    box *p,smallBox;
    p=&smallBox;
    //p->setDimension(12,10,5);
    smallBox.setDimension(12,10,5);
    //p->showdata();
    smallBox.showdata();
}
