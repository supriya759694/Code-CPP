
#include<iostream>
using namespace std;
class InsufficientBalance :public exception{
public:
    const char* what()const throw(){
    return  "Insufficient balance can't withdraw ";
    }
};
void f2(){
int balance=5000,amount;
try{
cout<< "enter amount to withdraw"<<endl;
cin>>amount;
if(amount>balance)
    throw InsufficientBalance();//child class object
    balance=balance-amount;
    cout<< "new balance is : "<<balance<<endl;

}
catch(const exception& e){//reference e to an object of base class or child class insufficient
cout<<e.what()<<endl;
}
}
int main(){
f2();
cout<< "end";
return 0;
}
