#include<iostream>
using namespace std;
class complex {
private :
    int real,img;
public :
    void set_value(int x, int y){
       real=x;
       img=y;
    }
    void print_value(){
    cout<<"real number is : " <<real<<endl;
    cout<<"imaginary number is : "<<img<<endl ;

    }
};
int main(){
complex c1, c2;
c1.set_value(4,8);
c1.print_value();
c2.print_value();
return 0;
}
