//FUNCTION HIDIDNG
#include<iostream>
using namespace std;
class A{
public :
    void f1(){
    cout<< "parent function"<<endl;
    }
};
class B : public A{
public:
    void f1(int x){
    cout<< "child function"<<endl;
    }
    void f2(){cout<< "function called"<<endl;}
};
int main(){
B obj;
obj.A :: f1();//parent function called
obj.f1(10);//child function
//obj.f1(); error
obj.f2();
}
