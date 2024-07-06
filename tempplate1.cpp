#include<iostream>
using namespace  std;
template <class X , class Y> fun1(X x, Y y){
cout<< "sum is "<<x+y<<endl;
}
int main(){
int a,b;
cout<<"enter two values : "<<endl;
cin>>a>>b;
fun1(a,b);
fun1(2.3,5.3);
}
