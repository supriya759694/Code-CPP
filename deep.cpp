//shallow copy
#include<iostream>
using namespace std;
class dummy {
private :
    int a,b,*p;
public :
    dummy(dummy &d){//copy constructor
    a=d.a;
    b=d.b;
    p=new int ;
    *p=*(d.p);
    }
    dummy(){ p=new int; }
    void setdata(int x, int y,int z){
    a=x;b=y; *p=z;
    }
    void showData(){
    cout<<"a = " << a << " b = "<<b << " p ="<< p<<endl;
    }

};
int main(){
dummy d1;
d1.setdata(3,4,7);
d1.showData();
dummy d2=d1;//implicit copy constructor(compiler cteated copy constructor)
        //copy contrustor called
d2.showData();
return 0;
}

