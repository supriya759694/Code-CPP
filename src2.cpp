#include<iostream>
using namespace std;
class A{
public :
void f1();//function declaration
};
void A:: f1(){
cout<< "fun() called";
}
int main(){
A a;
a.f1();
}
