#include<iostream>
using namespace std;
int main(){
    int a ;
cout<<"enter a number : " ;
cin>>a;
for (int i=2;i<a;i++){
    if(a%i){
        cout<<a <<"is prime number " ;
        break;
    }
    else{
        cout<<a<<" is not prime ";
        break;
    }


}

}
