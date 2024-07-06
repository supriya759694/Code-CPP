
#include<iostream>
using namespace std;
class A{
protected :
    int x;
public:
    A(){x=10;}
};
class B{
protected :
 int x;
public :
    B(){x=30;}
};
class C : public A, public B{
public:
    void f1(){
    cout<<"value of x in class A "<<A::x<<endl;
    cout<< "value of x in class B "<<B::x<<endl;
    }

};
int main(){
C obj;
obj.f1();
}


