#include<iostream>
using namespace std;
 void high_value(int n){
    int num=n;
int max_no=0;
while(n){

    int digit=n%10;
    if(max_no<digit){
        max_no=digit;
    }
    n=n/10;
}
cout<<"hight value digit is : "<<max_no <<" of given number "<<num ;
}
int main(){
    int n;
    cout<<"enter the number : "<<endl;
    cin>>n;
high_value(n);
}
