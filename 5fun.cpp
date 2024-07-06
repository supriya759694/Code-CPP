#include<iostream>
using namespace std;
int main(){
int a=-1,b=1,c,n;
int fib=0;
cout<<"enter a number "<<endl;
    cin>>n;
while(true){
    c=a+b;
    a=b;
    b=c;
if(n==c){
        fib=1;
        //cout<<n<<"is fibonacci number "<<endl;
        break;
    }
if (c > n) {
            break;
        }
//break;
}
if(fib){
        cout<<n<<"is fibonacci number "<<endl;

    }
    else
    {
    cout<<n<<"is not fibonacci number "<<endl;

    }
return 0;
}
