// INITIALIZATION LIST
#include<iostream>
using namespace std ;
class A {
int a,b,c;
public :
    A():a(5),b(6),c(7){}
    A(int a , int b , int  c ) : a(a), b(b),c(c){}
    int get_a()const{return a;}
    int get_b()const{return b;}
    int get_c()const{return c;}
};
int main(){
A t1,t2(10,12,15);
cout<<t1.get_a();
cout<<t1.get_b();
cout<<t1.get_c();
cout<<endl;
cout<<t2.get_a();
cout<<t2.get_b();
cout<<t2.get_c();
cout<<endl;
return 0;
}
