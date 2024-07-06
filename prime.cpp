#include<iostream>
using namespace std;
int main(){
    int n,i;
cout<<"enter a number ";
cin>>n;
for(i=2;i<n;i++){
    if(n%i==0){
    cout<<n<<"is not prime number";
    break;
    }
    else
    {
     cout <<n <<" is prime no ";
    break;
    }

}
cout<<endl;

}

