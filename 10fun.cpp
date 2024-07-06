
#include<iostream>
using namespace std;
int add();
int add(int , int );
double add(double , double );
int main(){
int a=add();
int a1=add(4,45);
double a2=add(4.5,6.2);
cout<<"sum is : "<<a<<endl;
cout<<"sum is : "<<a1<<endl;
cout<<"sum is : "<<a2<<endl;
}
int add(){
    int a,b,sum=0;
cout<<"enter two numbers : "<<endl;
cin>>a>>b;
sum=a+b;
return sum;
}

int add(int a, int b){
int sum=0;
sum=a+b;
return sum;
}
double add(double a, double b){
double sum;
sum=a+b;
return sum;
}
