#include<iostream>
using namespace std;
class Test {
const int k;// const means fixed
public :
    Test(int k ): k(k) {} // for const Initializer must be used
    int get_k (){return k;}

};
int main(){
Test t1(11);
cout<<t1.get_k();
return 0;
}
