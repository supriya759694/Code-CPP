//single throw
#include<iostream>
using namespace std;
void f1(){
int age, vote;
try{
cout<<"enter your age : "<<endl;
cin>>age;
if(age<18)
    throw 1;
cout<< "\n vote for your favourite actor ";
cout<<"\nsalman kahn";
cout<< "\nAmir khan";
cout<< "\nAkshay Kumar"<<endl;
cin>>vote;
cout<< "\n Thank You for your vote : ";
}
catch(int e){
cout<< "you are not eligible for your vote";
}
cout<< "\n END ";
}
int main(){
f1();
return 0;
}
