#include<iostream>
using namespace std;
class A{
protected :
    int a;
public :
    void set_a(int x ){
    a=x;
    }
    void disp_a(){
    cout<< "value of a ="<<a<<endl;
    }

};
class B : public A{
    int b,p;
    public :
   void set_b(int x, int y){
     set_a(x);
     b=y;
   }
   void displ_b(){
       disp_a();
   cout<<"value of b is "<<b<<endl;
   }
   void product(){
   p=a*b;
   cout<< "value of product is "<<a<< "x" <<b << "=" <<p<<endl;
   }
};
int main(){
B obj;
obj.set_b(7,5);
obj.displ_b();
obj.product();
return 0;
}
