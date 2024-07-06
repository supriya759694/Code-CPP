#include<iostream>
using namespace std;
class box
{
private :
    int l,b,h;
public :
    void setData(int l,int b,int h)
    {
        this->l=l;this->b=b;this->h=h;
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
    smallBox.setData(12,10,5);
    //p->showdata();
    smallBox.showdata();
}

