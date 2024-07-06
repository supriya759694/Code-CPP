
#include<iostream>
using namespace std;
class time {
private :
    int h,m,s;
public :
    void set_value(int x, int y,int z){
       h=x;
       m=y;
       s=z;
    }
    void print_value(){
    cout<<h  <<"hr " <<m <<"min " <<s << "sec " <<endl;

    }
};
int main(){
time t1,c1,c2;
t1.set_value(3,45,20);
t1.print_value();
c1.print_value();
c2.print_value();
return 0;
}
