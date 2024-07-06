#include<iostream>
using namespace std;
#include<string.h>
void f1(){
int vote,age;
char nationality[20];
try{
cout<<"enter the age : "<<endl;
cin>>age;
if(age<18)
    throw 1;
cout<< "enter the nationality :"<<endl;
cin.ignore();
cin.getline(nationality,20);
if(strcmp(strupr(nationality),"INDIAN"))
throw nationality;
cout<< "enter the vote :"<<endl;
cout<< "\n 1.salman khan"<<endl;
cout<< "\n 2.shahrukh khan"<<endl;
cout<< "\n 3.Akshy kumar "<<endl;
cin>>vote;
if(vote>3 || vote<1)
    throw 2.0;
cout<< "thank you for vote"<<endl;
}
catch(int a){
cout<< "your age is less than 18 so, you are not eligible for vote"<<endl;
}
catch(char *n){
cout<< "you should be INDIAN"<<endl;
}
catch(...){
cout<< "Invalid vote"<<endl;
}
cout<< "\n END"<<endl;

}
int main(){
f1();
return 0;
}
