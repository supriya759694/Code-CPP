
#include<iostream>
using namespace std;
class A{
public :
    void f1(){
   cout<< "this is class A"<<endl;
    }
};
class B1 : virtual public A{
public :
void f2(){
cout<<"this is class B1"<<endl;
}
};
class B2 :virtual public A{
public :
    void f3(){
    cout<< "thsi is class B2"<<endl;
    }
};
class C : public B1, public B2,public A{
public :
    void f4(){
    cout<<"thsi is class C"<<endl;
    }
};
int main(){
C obj;
obj.f4();
obj.f3();
obj.f2();
obj.f1(); //----ambugity error solution
}

