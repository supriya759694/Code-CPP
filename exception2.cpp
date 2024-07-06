//Implicit conversion doesn't hapen
#include<iostream>
using namespace std;
int main(){
try{
throw 'a';
}
catch(int e) {
cout<< "caught :"<<e<<endl;
}
catch(...) {
cout<<"default exception"<<endl;
}
return 0;
}
