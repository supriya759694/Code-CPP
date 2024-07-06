//initializing with reference varible
#include<iostream>
using namespace std;
class Test {
 int k;
 int &x;
public :
    Test(int kvalue,int &xref ): k(kvalue),x(xref) {} // for const Initializer must be used
    int get_k (){return k;}
    int get_x (){return x;}

};
int main(){
   int  k=10;
Test t1(k,k );
cout<<t1.get_k();
cout<<t1.get_x();

return 0;
}
