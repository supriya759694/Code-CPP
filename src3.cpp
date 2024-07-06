#include<iostream>
using namespace std;
class test{
private:
    static int x;
public :
    void f1(){
    cout<< "value of x is : "<<x;
    cout<< "value of static is "<< test::x;
    }
};
int main(){
    test obj;
    int x=3;
    obj.f1(x);
    return 0;

}
