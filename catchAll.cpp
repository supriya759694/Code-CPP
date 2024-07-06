#include<iostream>
using namespace std;
int main(){
try{
throw 1;
}
catch(int *e) {
cout<< "caught"<<e<<endl;
}
catch(...){
cout<<"by default exception"<<endl;
}
cout<< "end program"<<endl;
return 0;
}
