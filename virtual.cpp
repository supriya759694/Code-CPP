#include<iostream>
using namespace std;
//VIRTUAL FUNCTION
/*class base{
public :
    virtual void display(){
    cout<<"display function called from base"<<endl;
    }
    void show(){
    cout<<"show base function"<<endl;
    }
};
class derived : public base{
public:
void display(){
cout<< "display function called from derived class"<<endl;
}
void show(){
    cout<<"show derived function"<<endl;
    }
};*/

//pure virtual function

class base{
public :
    virtual void pureVirtual()= 0;

};
class derived : public base{
public:
    void pureVirtual(){
    cout<< "pure virtual function called from derived "<<endl;
    }

};
int main(){
    derived b1;
base *ptr=&b1;
/*ptr->display();
ptr->show();*/
ptr->pureVirtual();
}
