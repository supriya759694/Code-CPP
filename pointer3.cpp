
#include<iostream>
using namespace std;
class complex {
int a,b;
public :
 void setdata(int a, int b){
    this->a=a;
    this->b=b;
    }
 friend void showdata(complex );
};
void showdata(complex c1){
cout<< c1.a  <<"+ i " <<c1.b<<endl;
}

int main(){
complex c1;
c1.setdata(7,8);
showdata(c1);
return 0;
}
