
#include<iostream>
using namespace std;
int main(){
    int n,i=0,a=-1,b=1,c,d=0;
cout<<"enter fibonacii terms :  ";
cin>>n;
while(i<=n){
   c=a/1000000007+b/1000000007;
   d=d+c;
   cout<< c;
   a=b;
   b=c;
   i++;
}

cout<<endl;

cout<<(d+1)/1000000007<<endl;
}
