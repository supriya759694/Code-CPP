//single inheritance
#include<iostream>
using namespace std ;
class A{
protected:
    int a;
public :
    void set_a(){
    cout<<"enter the value of a "<<endl;
    cin>>a;
    }
    void display_a(){
    cout<<"value of a is = "<<a<<endl;
    }
};
class B:public A{
int b ,p;
public :
    void set_b(){
    set_a();
    cout<<"enter the value of b "<<endl;
    cin>>b;
    }
    void display_b(){
    display_a();
    cout<< "value of b is : "<<b;
    }
    void product(){
    p=a*b;
    cout<<endl<<"value of product is : "<<a<< "x" <<b<< "="<<p;
    }
};
int main(){
B b;
b.set_b();
b.display_b();
b.product();
return 0;
}
