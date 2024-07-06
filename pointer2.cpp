#include<iostream>
using namespace std;
class complex {
int a,b;
public :

void setdata(int a, int b){
    this->a=a;
    this->b=b;
    }
void showdata(){
    cout<<a <<" + i "<<b;
    }
};
int main(){
complex c1;
c1.setdata(7,8);
c1.showdata();
return 0;
}
