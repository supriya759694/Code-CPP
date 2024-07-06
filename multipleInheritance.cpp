#include<iostream>
using namespace std;
class A1{
public :
    A1()
    {
    cout<<"constructor of base class A1"<<endl;
    }
};
class A2{
public :
    A2()
    {
    cout<<"constructor of base class A2"<<endl;
    }
};
class S : public A1, virtual A2{
public :
    S():A1(),A2()
    {
    cout<<"constructor of derived class A1 and A2"<<endl;
    }
};
int main(){
 S obj;
 return 0;
}
