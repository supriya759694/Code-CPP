#include<iostream>
using namespace std;
void fun(int *ptr, int num){

if(ptr==NULL)
    throw 1;
cout<< "value of ptr"<<ptr<<endl;
if(ptr==0)
    throw 2;
cout<<"value of number is "<<num<<endl;
}

int main(){
int *p=nullptr;
try{
fun(p,54);
fun(NULL,0);
}
catch(...){
cout<<"default exception";
}
return 0;
}
