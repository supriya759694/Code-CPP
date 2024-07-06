#include<iostream>
using namespace std;
int main(){
int a,rev=0;
cout<<"enter a number : ";
cin>>a;
int num=a;
while(a){
    int res=a%10;
     rev=rev*10+res;
    a=a/10;
}
if(rev==num){
        cout<<num <<"is palindrome "<<endl;

    }
    else {
        cout<<num <<"is not palindrome "<<endl;

    }
return 0;
}
