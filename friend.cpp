#include<iostream>
using namespace std;
class A{
private:
    int a,b;
protected:
    int c,d;
public:
    A(){
a=4,b=5;
c=7,d=10;
    }
  friend void sum(A &x);
  friend void sum2(A &y);

};
 void sum(A &x){
cout<<"sum using friend function "<<x.a+x.b<<endl;
}
void sum2(A &y){
cout<<"sum using friend function "<<endl<<y.c+y.d;

}
int main(){
A obj;
sum(obj);
sum2(obj);

}
