#include<iostream>
using namespace std;
int main(){
int x;
cout<< "enter the value of x"<<endl;
cin>>x;
try{
if(x<0)
    throw x;
cout<< "value of x is "<<x<<endl;
}
catch(int x){
cout<<"exception value error"<<endl;
}
cout<<"end program\n";
return 0;
}
