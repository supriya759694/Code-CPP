#include<iostream>
using namespace  std;
class A{
public :
 void display(){
 cout<<"display function of A"<<endl;
 }
};
class B{
public:
    void display2(){
    cout<<"display function of B"<<endl;
    }
};
class C : public A, public B{
public:
  void display3(){
  cout<< "display function of c"<<endl;
  }

};
 int main(){
 C c1;
 c1.display();
 c1.display2();
 c1.display3();
 return 0;
 }
