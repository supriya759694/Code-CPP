#include<iostream>
using namespace std;
void printFactor(int num){

    while(num%2==0){
        cout<<" 2 "<<" ";
        num/=2;
    }
    //print all odd prime
    for(int i=3;i*i<=num;i+=2){
        while(num%i==0){
            cout<< i <<" ";
            num/=i;
        }
    }
   //if the number still greater than 2 it primeitself
    if(num>2){
        cout<< num <<" ";
    }
cout<<endl;
}
int main(){
int num;
cout<<"enter a number"<<endl;
cin>>num;

cout<<"prime factor of "<<num <<"are"<<endl;
printFactor(num);
}
