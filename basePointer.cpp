#include<iostream>
using namespace std;
class baseClass{
public :
    int var_base;//variable
    void display(){
    cout<< "displaying base class"<< " displaying var_base :"<<var_base<<endl;
    }
};
class derivedClass : public baseClass
{
public :
    int var_derived;//variable of child class
    void display(){
    cout<< "displaying base class "<< " displaying var_base"<<var_base<<endl;
    cout<< "displaying derived class "<< "  displaying var_derived"<<var_derived<<endl;
    }
};
int main(){
baseClass *parent;//pointer of base class
baseClass obj_base;//create object of base class
derivedClass obj_derived;//create object of derived class

//pointing to derived class
parent= &obj_derived;
parent->var_base=34;
parent->display();

parent->var_base=3400;
parent->display();

derivedClass *child;
child=&obj_derived;
child->var_base=96;
child->var_derived=65;
child->display();
return 0;
}
