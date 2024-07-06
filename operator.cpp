#include<iostream>
using namespace std;
//concept of function overloading and function overriding
/*class Area{
public :
    void area(int r){
    cout<< "area of circlr : "<<(22/7)*r*r<<endl;
    }
    void area(int h,int b){
    cout<< "area of rectangle : "<<h*b <<endl;
    }
    void area(int l,int b,int h){
    cout<< "area of volume : "<<h*b*l<<endl;
    }
};
*/


//concept of function overriding
class A{
public :
   virtual void  display(){
    cout<< "display function from A"<<endl;
    }
};
class B : public A{
public :
    void display()override{
    cout<< "display from B"<<endl;
    }
};
int main(){
/*Area a1;
a1.area(2);
a1.area(10,2);
a1.area(2,3,6);*/
B b1;
A *ptr=&b1;
ptr->display();
ptr->A::display();
 return 0;
}
