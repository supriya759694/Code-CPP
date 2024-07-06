
#include<iostream>
using namespace std;
class A1{
public :
    A1()
    {
        int x=50,y=20,sum;
        sum=x+y;
    cout<<"sum is "<<sum<<endl;
    }
};
class A2{
public :
    A2()
    {
        int x=50,y=20,diff;
        diff=x-y;
    cout<<"difference is "<<diff<<endl;
    }
};
class S : public A1, virtual A2{
public :
    S():A1(),A2()
    {
        int x=10,y=20,product;
        product=x*y;
    cout<<"product is "<<product<<endl;
    }
};
int main(){
 S obj;
 return 0;
}
