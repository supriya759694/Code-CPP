//multilevel inherirance
#include<iostream>
using namespace std;
class A {
protected :
    int a;
public :
    void set_a(){
    cout<< "enter the value of a"<<endl;
    cin>>a;
    }
    void display(){
    cout<<"value of a is "<<a<<endl;
    }
};
class B :public A{
protected :
    int b;
public :
    void set_b(){
    cout<< "enter value of b"<<endl;
    cin>>b;
    }
    void display_b(){
    cout<<"value of b is "<<b<<endl;
    }
};
class C : public B{
protected :
    int c,p;
public :
    void set_c(){
    cout<<  "enter value of c "<<endl;
    cin>>c;
    }
    void display_c(){
    cout<< "value of c is "<<c<<endl;
    }
    void product(){
    p=a*b*c;
    cout<< "value of product is :"<<p<<endl;
        }
};
int main(){
C obj;
obj.set_a();
obj.set_b();
obj.set_c();
obj.display();
obj.display_b();
obj.display_c();
obj.product();
return 0;
}
