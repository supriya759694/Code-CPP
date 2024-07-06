#include<iostream>
using namespace std;
int fact(int n){
if (n==1)
    return 1;
else
    return fact(n-1)*n;
}
int main(){
int n;
cin>>n;
int a=fact(n);
cout<<a;
}
