//nested exception
//Implicit conversion doesn't hapen
#include<iostream>
using namespace std;
int main(){
try{
    try{
    throw 20;
    }catch(int e){
    cout<< "handle partially "<<endl;
    throw 20;
    }
}
catch(int e){
    cout<< "handle remaining";
}
return 0;
}

