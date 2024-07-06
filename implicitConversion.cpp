//NO implicit Conversion(exception is thrown and not caught anywhere the program terminates automatically)
#include<iostream>
using namespace std;
void f2(){
int balance=5000,amount;
cout<< "enter amount to withdraw"<<endl;
cin>>amount;
if(amount>balance)
    throw 1;
    balance=balance-amount;
    cout<< "new balance is : "<<balance<<endl;

}
int main(){
f2();
cout<< "end";
return 0;
}
