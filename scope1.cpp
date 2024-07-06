#include<iostream>
using namespace std;
int x=10;
int main(){
int x=20;
cout<< "value of global x is :"<<::x;
cout<<endl;
cout<< "value of local x :"<<x;

}
