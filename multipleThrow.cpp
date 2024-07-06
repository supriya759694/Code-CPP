//multiple try,throws and catch
#include<iostream>
using namespace std;
#include<string.h>
void f1(){
int vote,age;
char nationality[20];
try{
cout<< "enter your age : "<<endl;
cin>>age;
if(age<18)
    throw 1;
cout<<"enter your nationality : ";
cin.ignore();
cin.getline(nationality,20);
if(strcmp(strupr(nationality), "INDIAN"))
    throw nationality;
cout<< "\n vote for your favourite actor "<<endl;
cout<< "\n 1. Amir Khan ";
cout<< "\n 2. Shahrukh khan ";
cout<< "\n 3. Akshya Kumar "<<endl;
cin>>vote;
if(vote>3 || vote<1)
    throw 2.0;
cout<< "\n Thank for your vote";
}
catch(int e){
cout<< "you are not Eligible to cast your vote "<<endl;
}
catch(char *n){
cout<< "you have to be INDIAN"<<endl;
}
catch(...){
cout<< "Invalid vote ";
}
cout<< "\n End";
}
int main(){
f1();
return 0;
}
